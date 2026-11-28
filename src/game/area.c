#include <PR/ultratypes.h>

#include "prevent_bss_reordering.h"
#include "area.h"
#include "sm64.h"
#include "gfx_dimensions.h"
#include "behavior_data.h"
#include "game_init.h"
#include "object_list_processor.h"
#include "engine/surface_load.h"
#include "ingame_menu.h"
#include "screen_transition.h"
#include "mario.h"
#include "mario_actions_cutscene.h"
#include "print.h"
#include "hud.h"
#include "audio/external.h"
#include "area.h"
#include "rendering_graph_node.h"
#include "level_update.h"
#include "engine/geo_layout.h"
#include "engine/math_util.h"
#include "mario_misc.h"
#include "save_file.h"
#include "level_table.h"
#include "dialog_ids.h"
#include "profiler.h"

struct SpawnInfo gPlayerSpawnInfos[1];
struct GraphNode *D_8033A160[0x100];
struct Area gAreaData[8];

struct WarpTransition gWarpTransition;

s16 gCurrCourseNum;
s16 gCurrActNum;
s16 gCurrAreaIndex;
s16 gSavedCourseNum;
s16 gMenuOptSelectIndex;
s16 gSaveOptSelectIndex;

struct SpawnInfo *gMarioSpawnInfo = &gPlayerSpawnInfos[0];
struct GraphNode **gLoadedGraphNodes = D_8033A160;
struct Area *gAreas = gAreaData;
struct Area *gCurrentArea = NULL;
struct CreditsEntry *gCurrCreditsEntry = NULL;
Vp *D_8032CE74 = NULL;
Vp *D_8032CE78 = NULL;
s16 gWarpTransDelay = 0;
u32 gFBSetColor = 0;
u32 gWarpTransFBSetColor = 0;
u8 gWarpTransRed = 0;
u8 gWarpTransGreen = 0;
u8 gWarpTransBlue = 0;
s16 gCurrSaveFileNum = 1;
s16 gCurrLevelNum = LEVEL_MIN;

/*
 * The following two tables are used in get_mario_spawn_type() to determine spawn type
 * from warp behavior.
 * When looping through sWarpBhvSpawnTable, if the behavior function in the table matches
 * the spawn behavior executed, the index of that behavior is used with sSpawnTypeFromWarpBhv
*/

const BehaviorScript *sWarpBhvSpawnTable[] = {
    bhvDoorWarp,                bhvStar,                   bhvExitPodiumWarp,          bhvWarp,
    bhvWarpPipe,                bhvFadingWarp,             bhvInstantActiveWarp,       bhvAirborneWarp,
    bhvHardAirKnockBackWarp,    bhvSpinAirborneCircleWarp, bhvDeathWarp,               bhvSpinAirborneWarp,
    bhvFlyingWarp,              bhvSwimmingWarp,           bhvPaintingStarCollectWarp, bhvPaintingDeathWarp,
    bhvAirborneStarCollectWarp, bhvAirborneDeathWarp,      bhvLaunchStarCollectWarp,   bhvLaunchDeathWarp,
};

u8 sSpawnTypeFromWarpBhv[] = {
    MARIO_SPAWN_DOOR_WARP,             MARIO_SPAWN_UNKNOWN_02,           MARIO_SPAWN_UNKNOWN_03,            MARIO_SPAWN_UNKNOWN_03,
    MARIO_SPAWN_UNKNOWN_03,            MARIO_SPAWN_TELEPORT,             MARIO_SPAWN_INSTANT_ACTIVE,        MARIO_SPAWN_AIRBORNE,
    MARIO_SPAWN_HARD_AIR_KNOCKBACK,    MARIO_SPAWN_SPIN_AIRBORNE_CIRCLE, MARIO_SPAWN_DEATH,                 MARIO_SPAWN_SPIN_AIRBORNE,
    MARIO_SPAWN_FLYING,                MARIO_SPAWN_SWIMMING,             MARIO_SPAWN_PAINTING_STAR_COLLECT, MARIO_SPAWN_PAINTING_DEATH,
    MARIO_SPAWN_AIRBORNE_STAR_COLLECT, MARIO_SPAWN_AIRBORNE_DEATH,       MARIO_SPAWN_LAUNCH_STAR_COLLECT,   MARIO_SPAWN_LAUNCH_DEATH,
};

Vp D_8032CF00 = { {
    { 640, 480, 511, 0 },
    { 640, 480, 511, 0 },
} };

#ifdef VERSION_EU
const char *gNoControllerMsg[] = {
    "NO CONTROLLER",
    "MANETTE DEBRANCHEE",
    "CONTROLLER FEHLT",
};
#endif

void override_viewport_and_clip(Vp *a, Vp *b, u8 c, u8 d, u8 e) {
    u16 sp6 = ((c >> 3) << 11) | ((d >> 3) << 6) | ((e >> 3) << 1) | 1;

    gFBSetColor = (sp6 << 16) | sp6;
    D_8032CE74 = a;
    D_8032CE78 = b;
}

void set_warp_transition_rgb(u8 red, u8 green, u8 blue) {
    u16 warpTransitionRGBA16 = ((red >> 3) << 11) | ((green >> 3) << 6) | ((blue >> 3) << 1) | 1;

    gWarpTransFBSetColor = (warpTransitionRGBA16 << 16) | warpTransitionRGBA16;
    gWarpTransRed = red;
    gWarpTransGreen = green;
    gWarpTransBlue = blue;
}

void print_intro_text(void) {
#ifdef VERSION_CN
    u8 sp18[] = { 0xB0, 0x00 }; // TODO: iQue colorful text
#endif
#ifdef VERSION_EU
    s32 language = eu_get_language();
#endif
    if ((gGlobalTimer & 31) < 20) {
        if (gControllerBits == 0) {
#ifdef VERSION_EU
            print_text_centered(SCREEN_WIDTH / 2, 20, gNoControllerMsg[language]);
#else
            print_text_centered(SCREEN_WIDTH / 2, 20, "NO CONTROLLER");
#endif
        } else {
#ifdef VERSION_EU
            print_text(20, 20, "START");
#else
#ifdef VERSION_CN
            print_text_centered(60, 38, (char *) sp18);
#else
            print_text_centered(60, 38, "PRESS");
#endif
            print_text_centered(60, 20, "START");
#endif
        }
    }
}

u32 get_mario_spawn_type(struct Object *o) {
    s32 i;
    const BehaviorScript *behavior = virtual_to_segmented(0x13, o->behavior);

    for (i = 0; i < 20; i++) {
        if (behavior == sWarpBhvSpawnTable[i]) {
            return sSpawnTypeFromWarpBhv[i];
        }
    }
    return 0;
}

struct ObjectWarpNode *area_get_warp_node(u8 id) {
    struct ObjectWarpNode *node = NULL;

    for (node = gCurrentArea->warpNodes; node != NULL; node = node->next) {
        if (node->node.id == id) {
            break;
        }
    }
    return node;
}

struct ObjectWarpNode *area_get_warp_node_from_params(struct Object *o) {
    u8 id = (o->oBhvParams & 0x00FF0000) >> 16;

    return area_get_warp_node(id);
}

void load_obj_warp_nodes(void) {
    struct ObjectWarpNode *sp24;
    struct Object *sp20 = (struct Object *) gObjParentGraphNode.children;

    do {
        struct Object *sp1C = sp20;

        if (sp1C->activeFlags != ACTIVE_FLAG_DEACTIVATED && get_mario_spawn_type(sp1C) != 0) {
            sp24 = area_get_warp_node_from_params(sp1C);
            if (sp24 != NULL) {
                sp24->object = sp1C;
            }
        }
    } while ((sp20 = (struct Object *) sp20->header.gfx.node.next)
             != (struct Object *) gObjParentGraphNode.children);
}

void clear_areas(void) {
    s32 i;

    gCurrentArea = NULL;
    gWarpTransition.isActive = FALSE;
    gWarpTransition.pauseRendering = FALSE;
    gMarioSpawnInfo->areaIndex = -1;

    for (i = 0; i < 8; i++) {
        gAreaData[i].index = i;
        gAreaData[i].flags = 0;
        gAreaData[i].terrainType = 0;
        gAreaData[i].unk04 = NULL;
        gAreaData[i].terrainData = NULL;
        gAreaData[i].surfaceRooms = NULL;
        gAreaData[i].macroObjects = NULL;
        gAreaData[i].warpNodes = NULL;
        gAreaData[i].paintingWarpNodes = NULL;
        gAreaData[i].instantWarps = NULL;
        gAreaData[i].objectSpawnInfos = NULL;
        gAreaData[i].camera = NULL;
        gAreaData[i].unused = NULL;
        gAreaData[i].whirlpools[0] = NULL;
        gAreaData[i].whirlpools[1] = NULL;
        gAreaData[i].dialog[0] = DIALOG_NONE;
        gAreaData[i].dialog[1] = DIALOG_NONE;
        gAreaData[i].musicParam = 0;
        gAreaData[i].musicParam2 = 0;
    }
}

void clear_area_graph_nodes(void) {
    s32 i;

    if (gCurrentArea != NULL) {
        geo_call_global_function_nodes(&gCurrentArea->unk04->node, GEO_CONTEXT_AREA_UNLOAD);
        gCurrentArea = NULL;
        gWarpTransition.isActive = FALSE;
    }

    for (i = 0; i < 8; i++) {
        if (gAreaData[i].unk04 != NULL) {
            geo_call_global_function_nodes(&gAreaData[i].unk04->node, GEO_CONTEXT_AREA_INIT);
            gAreaData[i].unk04 = NULL;
        }
    }
}

void load_area(s32 index) {
    if (gCurrentArea == NULL && gAreaData[index].unk04 != NULL) {
        gCurrentArea = &gAreaData[index];
        gCurrAreaIndex = gCurrentArea->index;

        if (gCurrentArea->terrainData != NULL) {
            load_area_terrain(index, gCurrentArea->terrainData, gCurrentArea->surfaceRooms,
                              gCurrentArea->macroObjects);
        }

        if (gCurrentArea->objectSpawnInfos != NULL) {
            spawn_objects_from_info(0, gCurrentArea->objectSpawnInfos);
        }

        load_obj_warp_nodes();
        geo_call_global_function_nodes(&gCurrentArea->unk04->node, GEO_CONTEXT_AREA_LOAD);
    }
}

void unload_area(void) {
    if (gCurrentArea != NULL) {
        unload_objects_from_area(0, gCurrentArea->index);
        geo_call_global_function_nodes(&gCurrentArea->unk04->node, GEO_CONTEXT_AREA_UNLOAD);

        gCurrentArea->flags = 0;
        gCurrentArea = NULL;
        gWarpTransition.isActive = FALSE;
    }
}

void load_mario_area(void) {
    stop_sounds_in_continuous_banks();
    load_area(gMarioSpawnInfo->areaIndex);

    if (gCurrentArea->index == gMarioSpawnInfo->areaIndex) {
        gCurrentArea->flags |= 0x01;
        spawn_objects_from_info(0, gMarioSpawnInfo);
    }
}

void unload_mario_area(void) {
    if (gCurrentArea != NULL && (gCurrentArea->flags & 0x01)) {
        unload_objects_from_area(0, gMarioSpawnInfo->activeAreaIndex);

        gCurrentArea->flags &= ~0x01;
        if (gCurrentArea->flags == 0) {
            unload_area();
        }
    }
}

void change_area(s32 index) {
    s32 areaFlags = gCurrentArea->flags;

    if (gCurrAreaIndex != index) {
        unload_area();
        load_area(index);

        gCurrentArea->flags = areaFlags;
        gMarioObject->oActiveParticleFlags = 0;
    }

    if (areaFlags & 0x01) {
        gMarioObject->header.gfx.areaIndex = index, gMarioSpawnInfo->areaIndex = index;
    }
}

void area_update_objects(void) {
    gAreaUpdateCounter++;
    profiler_stage_begin(PROF_STAGE_OBJECTS);
    update_objects(0);
    profiler_stage_end(PROF_STAGE_OBJECTS);
}

/*
 * Sets up the information needed to play a warp transition, including the
 * transition type, time in frames, and the RGB color that will fill the screen.
 */
void play_transition(s16 transType, s16 time, u8 red, u8 green, u8 blue) {
    gWarpTransition.isActive = TRUE;
    gWarpTransition.type = transType;
    gWarpTransition.time = time;
    gWarpTransition.pauseRendering = FALSE;

    // The lowest bit of transType determines if the transition is fading in or out.
    if (transType & 1) {
        set_warp_transition_rgb(red, green, blue);
    } else {
        red = gWarpTransRed, green = gWarpTransGreen, blue = gWarpTransBlue;
    }

    if (transType < 8) { // if transition is RGB
        gWarpTransition.data.red = red;
        gWarpTransition.data.green = green;
        gWarpTransition.data.blue = blue;
    } else { // if transition is textured
        gWarpTransition.data.red = red;
        gWarpTransition.data.green = green;
        gWarpTransition.data.blue = blue;

        // Both the start and end textured transition are always located in the middle of the screen.
        // If you really wanted to, you could place the start at one corner and the end at
        // the opposite corner. This will make the transition image look like it is moving
        // across the screen.
        gWarpTransition.data.startTexX = SCREEN_WIDTH / 2;
        gWarpTransition.data.startTexY = SCREEN_HEIGHT / 2;
        gWarpTransition.data.endTexX = SCREEN_WIDTH / 2;
        gWarpTransition.data.endTexY = SCREEN_HEIGHT / 2;

        gWarpTransition.data.texTimer = 0;

        if (transType & 1) { // Is the image fading in?
            gWarpTransition.data.startTexRadius = GFX_DIMENSIONS_FULL_RADIUS;
            if (transType >= 0x0F) {
                gWarpTransition.data.endTexRadius = 16;
            } else {
                gWarpTransition.data.endTexRadius = 0;
            }
        } else { // The image is fading out. (Reverses start & end circles)
            if (transType >= 0x0E) {
                gWarpTransition.data.startTexRadius = 16;
            } else {
                gWarpTransition.data.startTexRadius = 0;
            }
            gWarpTransition.data.endTexRadius = GFX_DIMENSIONS_FULL_RADIUS;
        }
    }
}

/*
 * Sets up the information needed to play a warp transition, including the
 * transition type, time in frames, and the RGB color that will fill the screen.
 * The transition will play only after a number of frames specified by 'delay'
 */
void play_transition_after_delay(s16 transType, s16 time, u8 red, u8 green, u8 blue, s16 delay) {
    gWarpTransDelay = delay; // Number of frames to delay playing the transition.
    play_transition(transType, time, red, green, blue);
}

#define INTERP_ABSF(x) (((x) < 0.0f) ? -(x) : (x))
#define INTERP_MAX_THROW_MATS 32
#define INTERP_SAVED_VALID     0x01
#define INTERP_SAVED_THROW_MOD 0x02

u8 gInterpMidframe = 0;

struct InterpObjPrev {
    Vec3f pos;
    Vec3s angle;
    Vec3f scale;
    struct Animation *curAnim;
    s32 animFrameAccelAssist;
    s32 animAccel;
    s16 animID;
    s16 animFrame;
    s16 animYTrans;
    u16 gen;
    s8 throwIdx;
};

struct InterpObjSaved {
    Vec3f pos;
    Vec3s angle;
    Vec3f scale;
    s8 throwIdx;
    u8 valid;
};

static Vec3f sPrevCamPos;
static Vec3f sPrevCamFocus;
static s16 sPrevCamRoll;
static Vec3f sSavedCamPos;
static Vec3f sSavedCamFocus;
static s16 sSavedCamRoll;
static Vec3s sPrevTorsoAngle;
static Vec3s sSavedTorsoAngle;
static Vec3s sPrevHeadAngle;
static Vec3s sSavedHeadAngle;
static Vec3s sPrevCamHeadRot;
static Vec3s sSavedCamHeadRot;
static s16 sPrevLevelNum = -1;
static s16 sPrevAreaIndex = -1;
static u16 sInterpGen = 0;
u8 gInterpValid = 0;
static struct InterpObjPrev sPrevObjs[OBJECT_POOL_CAPACITY];
static struct InterpObjSaved sSavedObjs[OBJECT_POOL_CAPACITY];
static u8 sActiveObjIdx[OBJECT_POOL_CAPACITY];
static u8 sModifiedIdx[OBJECT_POOL_CAPACITY];
static s32 sActiveObjCount;
static s32 sModifiedCount;
static Mat4 sPrevThrowMats[INTERP_MAX_THROW_MATS];
static Mat4 sSavedThrowMats[INTERP_MAX_THROW_MATS];
static s32 sPrevThrowCount;
static s32 sSavedThrowCount;

/**
 * Returns TRUE when the engine is in a normal 3D gameplay/cutscene state safe
 * for 60 FPS midpoint frame interpolation (excluding menus, dialogs, and fades).
 */
s32 can_interpolate_frame(void) {
    return (gCurrentArea != NULL && gCurrentArea->camera != NULL && gMarioObject != NULL
            && !gWarpTransition.pauseRendering && !gWarpTransition.isActive
            && gMenuMode == MENU_MODE_NONE && get_dialog_id() == DIALOG_NONE);
}

/**
 * Clears cached previous-frame interpolation state on level/area changes or
 * 30 Hz menu/transition frames.
 */
void interp_reset_state(void) {
    gInterpValid = 0;
    sActiveObjCount = 0;
}

/**
 * Retrieves the previous 30 Hz tick's animation state for an object in gObjectPool.
 * Returns TRUE if valid snapshot data is available for this object.
 */
s32 interp_get_obj_prev_anim(struct Object *obj, struct Animation **curAnim, s16 *animID,
                             s16 *animFrame, s16 *animYTrans, s32 *animFrameAccelAssist,
                             s32 *animAccel) {
    s32 idx;

    if (!gInterpValid || obj == NULL) {
        return 0;
    }

    idx = obj - gObjectPool;
    if ((u32) idx >= OBJECT_POOL_CAPACITY || sPrevObjs[idx].gen != sInterpGen) {
        return 0;
    }

    *curAnim = sPrevObjs[idx].curAnim;
    *animID = sPrevObjs[idx].animID;
    *animFrame = sPrevObjs[idx].animFrame;
    *animYTrans = sPrevObjs[idx].animYTrans;
    *animFrameAccelAssist = sPrevObjs[idx].animFrameAccelAssist;
    *animAccel = sPrevObjs[idx].animAccel;
    return 1;
}

/**
 * Snapshots the current 30 Hz camera and active object transforms before
 * running the next logic tick so a midpoint (t=0.5) frame can be interpolated.
 */
void interp_save_state(void) {
    s32 i;
    s32 listIdx;

    if (!can_interpolate_frame() || gCurrLevelNum != sPrevLevelNum || gCurrAreaIndex != sPrevAreaIndex) {
        sPrevLevelNum = gCurrLevelNum;
        sPrevAreaIndex = gCurrAreaIndex;
        gInterpValid = 0;
        sActiveObjCount = 0;
        return;
    }

    for (i = 0; i < 3; i++) {
        sPrevCamPos[i] = gLakituState.pos[i];
        sPrevCamFocus[i] = gLakituState.focus[i];
        sPrevTorsoAngle[i] = gBodyStates[0].torsoAngle[i];
        sPrevHeadAngle[i] = gBodyStates[0].headAngle[i];
        sPrevCamHeadRot[i] = gPlayerCameraState->headRotation[i];
    }
    sPrevCamRoll = gLakituState.roll;
    sPrevThrowCount = 0;
    sActiveObjCount = 0;

    if (++sInterpGen == 0) {
        bzero(sPrevObjs, sizeof(sPrevObjs));
        sInterpGen = 1;
    }

    for (listIdx = 0; sObjectListUpdateOrder[listIdx] >= 0; listIdx++) {
        struct ObjectNode *head = &gObjectLists[sObjectListUpdateOrder[listIdx]];
        struct ObjectNode *node = head->next;

        while (node != head) {
            struct Object *obj = (struct Object *) node;
            node = node->next;
            if (obj->activeFlags != ACTIVE_FLAG_DEACTIVATED) {
                s32 idx = obj - gObjectPool;
                if ((u32) idx < OBJECT_POOL_CAPACITY) {
                    struct InterpObjPrev *prev = &sPrevObjs[idx];
                    prev->pos[0] = obj->header.gfx.pos[0];
                    prev->pos[1] = obj->header.gfx.pos[1];
                    prev->pos[2] = obj->header.gfx.pos[2];
                    prev->angle[0] = obj->header.gfx.angle[0];
                    prev->angle[1] = obj->header.gfx.angle[1];
                    prev->angle[2] = obj->header.gfx.angle[2];
                    prev->scale[0] = obj->header.gfx.scale[0];
                    prev->scale[1] = obj->header.gfx.scale[1];
                    prev->scale[2] = obj->header.gfx.scale[2];
                    prev->curAnim = obj->header.gfx.animInfo.curAnim;
                    prev->animID = obj->header.gfx.animInfo.animID;
                    prev->animFrame = obj->header.gfx.animInfo.animFrame;
                    prev->animYTrans = obj->header.gfx.animInfo.animYTrans;
                    prev->animFrameAccelAssist = obj->header.gfx.animInfo.animFrameAccelAssist;
                    prev->animAccel = obj->header.gfx.animInfo.animAccel;
                    if (obj->header.gfx.throwMatrix != NULL) {
                        if (sPrevThrowCount < INTERP_MAX_THROW_MATS) {
                            mtxf_copy(sPrevThrowMats[sPrevThrowCount], *obj->header.gfx.throwMatrix);
                            prev->throwIdx = (s8) sPrevThrowCount++;
                        } else {
                            prev->throwIdx = -1;
                        }
                        obj->header.gfx.throwMatrix = NULL;
                    } else {
                        prev->throwIdx = -1;
                    }
                    prev->gen = sInterpGen;
                    sActiveObjIdx[sActiveObjCount++] = (u8) idx;
                }
            }
        }
    }

    gInterpValid = 1;
}

static void interp_apply_midframe(void) {
    s32 i;
    s32 k;
    f32 camDist;

    for (i = 0; i < 3; i++) {
        sSavedCamPos[i] = gLakituState.pos[i];
        sSavedCamFocus[i] = gLakituState.focus[i];
        sSavedTorsoAngle[i] = gBodyStates[0].torsoAngle[i];
        sSavedHeadAngle[i] = gBodyStates[0].headAngle[i];
        gBodyStates[0].torsoAngle[i] =
            sPrevTorsoAngle[i] + ((s16)(sSavedTorsoAngle[i] - sPrevTorsoAngle[i]) >> 1);
        gBodyStates[0].headAngle[i] =
            sPrevHeadAngle[i] + ((s16)(sSavedHeadAngle[i] - sPrevHeadAngle[i]) >> 1);
        sSavedCamHeadRot[i] = gPlayerCameraState->headRotation[i];
        gPlayerCameraState->headRotation[i] =
            sPrevCamHeadRot[i] + ((s16)(sSavedCamHeadRot[i] - sPrevCamHeadRot[i]) >> 1);
    }
    sSavedCamRoll = gLakituState.roll;

    camDist = INTERP_ABSF(sSavedCamPos[0] - sPrevCamPos[0])
            + INTERP_ABSF(sSavedCamPos[1] - sPrevCamPos[1])
            + INTERP_ABSF(sSavedCamPos[2] - sPrevCamPos[2])
            + INTERP_ABSF(sSavedCamFocus[0] - sPrevCamFocus[0])
            + INTERP_ABSF(sSavedCamFocus[1] - sPrevCamFocus[1])
            + INTERP_ABSF(sSavedCamFocus[2] - sPrevCamFocus[2]);
    if (camDist < 1000.0f) {
        for (i = 0; i < 3; i++) {
            gLakituState.pos[i] = 0.5f * (sPrevCamPos[i] + sSavedCamPos[i]);
            gLakituState.focus[i] = 0.5f * (sPrevCamFocus[i] + sSavedCamFocus[i]);
        }
        gLakituState.roll = sPrevCamRoll + ((s16)(sSavedCamRoll - sPrevCamRoll) >> 1);
    }

    sSavedThrowCount = 0;
    sModifiedCount = 0;
    for (k = 0; k < sActiveObjCount; k++) {
        s32 idx = sActiveObjIdx[k];
        struct Object *obj = &gObjectPool[idx];
        struct InterpObjPrev *prev = &sPrevObjs[idx];
        s32 xformChanged;
        u8 flags = 0;
        f32 dist;

        if (obj->activeFlags == ACTIVE_FLAG_DEACTIVATED || prev->gen != sInterpGen) {
            continue;
        }

        xformChanged = (obj->header.gfx.pos[0] != prev->pos[0]
                        || obj->header.gfx.pos[1] != prev->pos[1]
                        || obj->header.gfx.pos[2] != prev->pos[2]
                        || obj->header.gfx.angle[0] != prev->angle[0]
                        || obj->header.gfx.angle[1] != prev->angle[1]
                        || obj->header.gfx.angle[2] != prev->angle[2]
                        || obj->header.gfx.scale[0] != prev->scale[0]
                        || obj->header.gfx.scale[1] != prev->scale[1]
                        || obj->header.gfx.scale[2] != prev->scale[2]);

        if (!xformChanged && obj->header.gfx.throwMatrix == NULL) {
            continue;
        }

        dist = INTERP_ABSF(obj->header.gfx.pos[0] - prev->pos[0])
             + INTERP_ABSF(obj->header.gfx.pos[1] - prev->pos[1])
             + INTERP_ABSF(obj->header.gfx.pos[2] - prev->pos[2]);
        if (dist >= 500.0f) {
            continue;
        }

        {
            struct InterpObjSaved *saved = &sSavedObjs[sModifiedCount];
            s32 j;

            saved->throwIdx = -1;
            if (xformChanged) {
                for (j = 0; j < 3; j++) {
                    saved->pos[j] = obj->header.gfx.pos[j];
                    saved->angle[j] = obj->header.gfx.angle[j];
                    saved->scale[j] = obj->header.gfx.scale[j];
                    obj->header.gfx.pos[j] = 0.5f * (prev->pos[j] + saved->pos[j]);
                    obj->header.gfx.scale[j] = 0.5f * (prev->scale[j] + saved->scale[j]);
                    obj->header.gfx.angle[j] =
                        prev->angle[j] + ((s16)(saved->angle[j] - prev->angle[j]) >> 1);
                }
                flags = INTERP_SAVED_VALID;
            }

            if (obj->header.gfx.throwMatrix != NULL && sSavedThrowCount < INTERP_MAX_THROW_MATS) {
                Mat4 *dst = obj->header.gfx.throwMatrix;
                Mat4 *curM = &sSavedThrowMats[sSavedThrowCount];
                mtxf_copy(*curM, *dst);

                if (prev->throwIdx >= 0) {
                    Mat4 *prevM = &sPrevThrowMats[prev->throwIdx];
                    const f32 *p = &(*prevM)[0][0];
                    const f32 *q = &(*curM)[0][0];
                    s32 m;
                    for (m = 0; m < 15; m++) {
                        if (p[m] != q[m]) {
                            break;
                        }
                    }
                    if (m != 15) {
                        f32 tdist = INTERP_ABSF((*curM)[3][0] - (*prevM)[3][0])
                                  + INTERP_ABSF((*curM)[3][1] - (*prevM)[3][1])
                                  + INTERP_ABSF((*curM)[3][2] - (*prevM)[3][2]);
                        if (tdist < 500.0f) {
                            f32 dot = 0.0f;
                            s32 c;
                            for (j = 0; j < 3; j++) {
                                (*dst)[3][j] = 0.5f * ((*prevM)[3][j] + (*curM)[3][j]);
                            }
                            for (c = 0; c < 3; c++) {
                                for (j = 0; j < 3; j++) {
                                    dot += (*prevM)[c][j] * (*curM)[c][j];
                                }
                            }
                            if (dot > 1.5f) {
                                f32 prevLenSq = (*prevM)[0][0] * (*prevM)[0][0]
                                              + (*prevM)[0][1] * (*prevM)[0][1]
                                              + (*prevM)[0][2] * (*prevM)[0][2];
                                f32 curLenSq = (*curM)[0][0] * (*curM)[0][0]
                                             + (*curM)[0][1] * (*curM)[0][1]
                                             + (*curM)[0][2] * (*curM)[0][2];
                                if (prevLenSq > 0.95f && prevLenSq < 1.05f && curLenSq > 0.95f
                                    && curLenSq < 1.05f) {
                                    for (c = 0; c < 3; c++) {
                                        f32 mx = (*prevM)[c][0] + (*curM)[c][0];
                                        f32 my = (*prevM)[c][1] + (*curM)[c][1];
                                        f32 mz = (*prevM)[c][2] + (*curM)[c][2];
                                        f32 lenSq = mx * mx + my * my + mz * mz;
                                        f32 inv = (lenSq > 0.0f) ? (1.0f / sqrtf(lenSq)) : 0.0f;
                                        (*dst)[c][0] = mx * inv;
                                        (*dst)[c][1] = my * inv;
                                        (*dst)[c][2] = mz * inv;
                                    }
                                } else {
                                    for (c = 0; c < 3; c++) {
                                        (*dst)[c][0] = 0.5f * ((*prevM)[c][0] + (*curM)[c][0]);
                                        (*dst)[c][1] = 0.5f * ((*prevM)[c][1] + (*curM)[c][1]);
                                        (*dst)[c][2] = 0.5f * ((*prevM)[c][2] + (*curM)[c][2]);
                                    }
                                }
                            }
                            saved->throwIdx = (s8) sSavedThrowCount++;
                            flags |= INTERP_SAVED_THROW_MOD;
                        }
                    }
                } else {
                    f32 tdist = INTERP_ABSF((*curM)[3][0] - prev->pos[0])
                              + INTERP_ABSF((*curM)[3][1] - prev->pos[1])
                              + INTERP_ABSF((*curM)[3][2] - prev->pos[2]);
                    if (tdist > 0.0f && tdist < 500.0f) {
                        for (j = 0; j < 3; j++) {
                            (*dst)[3][j] = 0.5f * (prev->pos[j] + (*curM)[3][j]);
                        }
                        saved->throwIdx = (s8) sSavedThrowCount++;
                        flags |= INTERP_SAVED_THROW_MOD;
                    }
                }
            }

            if (flags != 0) {
                saved->valid = flags;
                sModifiedIdx[sModifiedCount++] = (u8) idx;
            }
        }
    }
}

static void interp_restore_state(void) {
    s32 i;
    s32 k;

    for (i = 0; i < 3; i++) {
        gLakituState.pos[i] = sSavedCamPos[i];
        gLakituState.focus[i] = sSavedCamFocus[i];
        gBodyStates[0].torsoAngle[i] = sSavedTorsoAngle[i];
        gBodyStates[0].headAngle[i] = sSavedHeadAngle[i];
        gPlayerCameraState->headRotation[i] = sSavedCamHeadRot[i];
    }
    gLakituState.roll = sSavedCamRoll;

    for (k = 0; k < sModifiedCount; k++) {
        struct Object *obj = &gObjectPool[sModifiedIdx[k]];
        struct InterpObjSaved *saved = &sSavedObjs[k];
        if (saved->valid & INTERP_SAVED_VALID) {
            obj->header.gfx.pos[0] = saved->pos[0];
            obj->header.gfx.pos[1] = saved->pos[1];
            obj->header.gfx.pos[2] = saved->pos[2];
            obj->header.gfx.angle[0] = saved->angle[0];
            obj->header.gfx.angle[1] = saved->angle[1];
            obj->header.gfx.angle[2] = saved->angle[2];
            obj->header.gfx.scale[0] = saved->scale[0];
            obj->header.gfx.scale[1] = saved->scale[1];
            obj->header.gfx.scale[2] = saved->scale[2];
        }
        if ((saved->valid & INTERP_SAVED_THROW_MOD) && obj->header.gfx.throwMatrix != NULL) {
            mtxf_copy(*obj->header.gfx.throwMatrix, sSavedThrowMats[saved->throwIdx]);
        }
    }
}

void render_game(void) {
    s32 canInterp = can_interpolate_frame();
    s32 doMidframe = (gInterpActive && canInterp);

    profiler_stage_begin(PROF_STAGE_RENDER);
    if (!canInterp) {
        gInterpValid = 0;
    }
    if (!doMidframe) {
        gInterpActive = 0;
    }
    if (gCurrentArea != NULL && !gWarpTransition.pauseRendering) {
        if (doMidframe && gInterpValid) {
            interp_apply_midframe();
            gInterpMidframe = 1;
        }
        geo_process_root(gCurrentArea->unk04, D_8032CE74, D_8032CE78, gFBSetColor);
        gInterpMidframe = 0;
        if (doMidframe && gInterpValid) {
            interp_restore_state();
        }

        gSPViewport(gDisplayListHead++, VIRTUAL_TO_PHYSICAL(&D_8032CF00));

        gDPSetScissor(gDisplayListHead++, G_SC_NON_INTERLACE, 0, BORDER_HEIGHT, SCREEN_WIDTH,
                      SCREEN_HEIGHT - BORDER_HEIGHT);
        render_hud();

        gDPSetScissor(gDisplayListHead++, G_SC_NON_INTERLACE, 0, 0, SCREEN_WIDTH, SCREEN_HEIGHT);
        render_text_labels();
        do_cutscene_handler();
        print_displaying_credits_entry();

        gDPSetScissor(gDisplayListHead++, G_SC_NON_INTERLACE, 0, BORDER_HEIGHT, SCREEN_WIDTH,
                      SCREEN_HEIGHT - BORDER_HEIGHT);
        gMenuOptSelectIndex = render_menus_and_dialogs();
        if (gMenuOptSelectIndex != MENU_OPT_NONE) {
            gSaveOptSelectIndex = gMenuOptSelectIndex;
        }

        if (D_8032CE78 != NULL) {
            make_viewport_clip_rect(D_8032CE78);
        } else {
            gDPSetScissor(gDisplayListHead++, G_SC_NON_INTERLACE, 0, BORDER_HEIGHT, SCREEN_WIDTH,
                          SCREEN_HEIGHT - BORDER_HEIGHT);
        }

        if (gWarpTransition.isActive) {
            if (gWarpTransDelay == 0) {
                gWarpTransition.isActive = !render_screen_transition(0, gWarpTransition.type, gWarpTransition.time,
                                                                     &gWarpTransition.data);
                if (!gWarpTransition.isActive) {
                    if (gWarpTransition.type & 1) {
                        gWarpTransition.pauseRendering = TRUE;
                    } else {
                        set_warp_transition_rgb(0, 0, 0);
                    }
                }
            } else {
                gWarpTransDelay--;
            }
        }
    } else {
        render_text_labels();
        if (D_8032CE78 != NULL) {
            clear_viewport(D_8032CE78, gWarpTransFBSetColor);
        } else {
            clear_framebuffer(gWarpTransFBSetColor);
        }
    }

    if (!gInterpActive) {
        D_8032CE74 = NULL;
        D_8032CE78 = NULL;
    }
    profiler_stage_end(PROF_STAGE_RENDER);
}
