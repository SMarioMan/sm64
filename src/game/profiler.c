#include <PR/ultratypes.h>
#include <PR/os_time.h>
#include <PR/gbi.h>

#include "sm64.h"
#include "profiler.h"
#include "game_init.h"
#include "level_update.h"
#include "object_list_processor.h"

s16 gProfilerMode = 0;

static OSTime sStageStart[PROF_STAGE_COUNT];
static OSTime sStageTotal[PROF_STAGE_COUNT];

// the thread 3 info is logged on the opposite profiler from what is used by
// the thread4 and 5 loggers. It's likely because the sound thread runs at a
// much faster rate and shouldn't be flipping the index for the "slower" game
// threads, which could leave the frame data in a possibly corrupt or incomplete
// state.
s16 gCurrentFrameIndex1 = 1;
s16 gCurrentFrameIndex2 = 0;

struct ProfilerFrameData gProfilerFrameData[2];

// log the current osTime to the appropriate idx for current thread5 processes.
void profiler_log_thread5_time(enum ProfilerGameEvent eventID) {
    gProfilerFrameData[gCurrentFrameIndex1].gameTimes[eventID] = osGetTime();

    // event ID 4 is the last profiler event for after swapping
    // buffers: switch the Info after updating.
    if (eventID == THREAD5_END) {
        gCurrentFrameIndex1 ^= 1;
        gProfilerFrameData[gCurrentFrameIndex1].numSoundTimes = 0;
    }
}

// log the audio system before and after osTimes in pairs to the soundTimes array.
void profiler_log_thread4_time(void) {
    struct ProfilerFrameData *profiler = &gProfilerFrameData[gCurrentFrameIndex1];

    if (profiler->numSoundTimes < ARRAY_COUNT(profiler->soundTimes)) {
        profiler->soundTimes[profiler->numSoundTimes++] = osGetTime();
    }
}

// log the times for gfxTimes: RSP completes, and RDP completes.
void profiler_log_gfx_time(enum ProfilerGfxEvent eventID) {
    if (eventID == TASKS_QUEUED) {
        gCurrentFrameIndex2 ^= 1;
        gProfilerFrameData[gCurrentFrameIndex2].numVblankTimes = 0;
    }

    gProfilerFrameData[gCurrentFrameIndex2].gfxTimes[eventID] = osGetTime();
}

// log the times between vblank started and ended.
void profiler_log_vblank_time(void) {
    struct ProfilerFrameData *profiler = &gProfilerFrameData[gCurrentFrameIndex2];

    if (profiler->numVblankTimes < ARRAY_COUNT(profiler->vblankTimes)) {
        profiler->vblankTimes[profiler->numVblankTimes++] = osGetTime();
    }
}

// draw the specified profiler given the information passed.
void draw_profiler_bar(OSTime clockBase, OSTime clockStart, OSTime clockEnd, s16 posY, u16 color) {
    s64 durationStart, durationEnd;
    s32 rectX1, rectX2;

    // set the duration to start, and floor to 0 if the result is below 0.
    if ((durationStart = clockStart - clockBase) < 0) {
        durationStart = 0;
    }
    // like the above, but with end.
    if ((durationEnd = clockEnd - clockBase) < 0) {
        durationEnd = 0;
    }

    // calculate the x coordinates of where start and end begins, respectively.
    rectX1 = ((((durationStart * 1000000) / osClockRate * 3) / 1000) + 30);
    rectX2 = ((((durationEnd * 1000000) / osClockRate * 3) / 1000) + 30);

    //! I believe this is supposed to cap rectX1 and rectX2 to 320, but the
    //  code seems to use the wrong variables... it's possible that the variable
    //  names were very similar within a single letter.
    if (rectX1 > 319) {
        rectX1 = 319;
    }
    if (rectX2 > 319) {
        rectX2 = 319;
    }

    // perform the render if start is less than end. in most cases, it should be.
    if (rectX1 < rectX2) {
        gDPPipeSync(gDisplayListHead++);
        gDPSetFillColor(gDisplayListHead++, color << 16 | color);
        gDPFillRectangle(gDisplayListHead++, rectX1, posY, rectX2, posY + 2);
    }
}

void draw_reference_profiler_bars(void) {
    // Draws the reference "max" bars underneath the real thing.

    // Blue
    gDPPipeSync(gDisplayListHead++);
    gDPSetFillColor(gDisplayListHead++,
                    GPACK_RGBA5551(40, 80, 255, 1) << 16 | GPACK_RGBA5551(40, 80, 255, 1));
    gDPFillRectangle(gDisplayListHead++, 30, 220, 79, 222);

    // Yellow
    gDPPipeSync(gDisplayListHead++);
    gDPSetFillColor(gDisplayListHead++,
                    GPACK_RGBA5551(255, 255, 40, 1) << 16 | GPACK_RGBA5551(255, 255, 40, 1));
    gDPFillRectangle(gDisplayListHead++, 79, 220, 128, 222);

    // Orange
    gDPPipeSync(gDisplayListHead++);
    gDPSetFillColor(gDisplayListHead++,
                    GPACK_RGBA5551(255, 120, 40, 1) << 16 | GPACK_RGBA5551(255, 120, 40, 1));
    gDPFillRectangle(gDisplayListHead++, 128, 220, 177, 222);

    // Red
    gDPPipeSync(gDisplayListHead++);
    gDPSetFillColor(gDisplayListHead++,
                    GPACK_RGBA5551(255, 40, 40, 1) << 16 | GPACK_RGBA5551(255, 40, 40, 1));
    gDPFillRectangle(gDisplayListHead++, 177, 220, 226, 222);
}

/*
  Draw Profiler Mode 1. This mode draws a traditional per-event bar for durations of tasks
  recorded by the profiler calls of various threads.

  Information:

  (yellow): Level Scripts Execution
  (orange): Rendering
  (blue): Display Lists Send
  (red): Sound Updates
  (yellow): Time from SP tasks queued to RSP complete
  (orange): Time from RSP complete to RDP complete (possibly bugged, see //! note below)
  (red): VBlank Times
*/
void draw_profiler_mode_1(void) {
    s32 i;
    struct ProfilerFrameData *profiler;
    OSTime clockBase;

    // the profiler logs 2 frames of data: last frame and current frame. Indexes are used
    // to keep track of the current frame, so the index is xor'd to retrieve the last frame's
    // data.
    profiler = &gProfilerFrameData[gCurrentFrameIndex1 ^ 1];

    // calculate the clockBase.
    clockBase = profiler->soundTimes[0] - (16433 * osClockRate / 1000000);

    // draw the profiler for the time it takes for level scripts to execute. (yellow)
    draw_profiler_bar(clockBase, profiler->gameTimes[0], profiler->gameTimes[1], 212,
                      GPACK_RGBA5551(255, 255, 40, 1));

    // draw the profiler for the time it takes for the game to render (between level scripts and
    // pre-display lists). (orange)
    draw_profiler_bar(clockBase, profiler->gameTimes[1], profiler->gameTimes[2], 212,
                      GPACK_RGBA5551(255, 120, 40, 1));

    // draw the profiler for the time it takes for the display lists to send. (blue)
    draw_profiler_bar(clockBase, profiler->gameTimes[2], profiler->gameTimes[3], 212,
                      GPACK_RGBA5551(40, 192, 230, 1));

    // we need to get the amount of finished numSoundTimes pairs, so get rid of the odd bit to get the
    // limit of finished pairs.
    profiler->numSoundTimes &= 0xFFFE;

    // draw the sound update times. (red)
    for (i = 0; i < profiler->numSoundTimes; i += 2) {
        draw_profiler_bar(clockBase, profiler->soundTimes[i], profiler->soundTimes[i + 1], 212,
                          GPACK_RGBA5551(255, 40, 40, 1));
    }

    //! RSP and RDP run in parallel, so while they are not absolutely guaranteed to return in order,
    //  it is theoretically possible they might not. In all cases, the RDP should finish later than RSP.
    //  Thus, this is not really a bug in practice, but should still be noted that the C doesn't check
    //  this.
    draw_profiler_bar(clockBase, profiler->gfxTimes[0], profiler->gfxTimes[1], 216,
                      GPACK_RGBA5551(255, 255, 40, 1));
    // (orange)
    draw_profiler_bar(clockBase, profiler->gfxTimes[1], profiler->gfxTimes[2], 216,
                      GPACK_RGBA5551(255, 120, 40, 1));

    // like earlier, toss the odd bit.
    profiler->numVblankTimes &= 0xFFFE;

    // render the vblank time pairs. (red)
    for (i = 0; i < profiler->numVblankTimes; i += 2) {
        draw_profiler_bar(clockBase, profiler->vblankTimes[i], profiler->vblankTimes[i + 1], 216,
                          GPACK_RGBA5551(255, 40, 40, 1));
    }

    draw_reference_profiler_bars();
}

/*
  Draw Profiler Mode 0. This mode renders bars over each other to make it
  easier to see which processes take the longest.

  Information:

  (red): Sound Updates
  (yellow): Level Script Execution
  (orange): Rendering
  (orange): RDP Duration
  (yellow): RSP Duration
  (red): VBlank Duration
*/
void draw_profiler_mode_0(void) {
    s32 i;
    struct ProfilerFrameData *profiler;

    u64 clockStart;
    u64 levelScriptDuration;
    u64 renderDuration;
    u64 taskStart;
    u64 rspDuration;
    u64 rdpDuration;
    u64 vblank;
    u64 soundDuration;

    // get the last frame profiler. gCurrentFrameIndex1 has the current frame being processed, so
    // xor it to get the last frame profiler.
    profiler = &gProfilerFrameData[gCurrentFrameIndex1 ^ 1];

    // was thread 5 ran before thread 4? set the lower one to be the clockStart.
    clockStart = profiler->gameTimes[0] <= profiler->soundTimes[0] ? profiler->gameTimes[0]
                                                                    : profiler->soundTimes[0];

    // set variables for duration of tasks.
    levelScriptDuration = profiler->gameTimes[1] - clockStart;
    renderDuration = profiler->gameTimes[2] - profiler->gameTimes[1];
    taskStart = 0;
    rspDuration = profiler->gfxTimes[1] - profiler->gfxTimes[0];
    rdpDuration = profiler->gfxTimes[2] - profiler->gfxTimes[0];
    vblank = 0;

    // like above functions, toss the odd bit.
    profiler->numSoundTimes &= 0xFFFE;

    // sound duration seems to be rendered with empty space and not actually drawn.
    for (i = 0; i < profiler->numSoundTimes; i += 2) {
        // calculate sound duration of max - min
        soundDuration = profiler->soundTimes[i + 1] - profiler->soundTimes[i];
        taskStart += soundDuration;
        // was the sound time minimum less than level script execution?
        if (profiler->soundTimes[i] < profiler->gameTimes[1]) {
            // overlay the levelScriptDuration onto the profiler by subtracting the soundDuration.
            levelScriptDuration -= soundDuration;
        } else if (profiler->soundTimes[i] < profiler->gameTimes[2]) {
            // overlay the renderDuration onto the profiler by subtracting the soundDuration.
            renderDuration -= soundDuration;
        }
    }

    // same as above. toss the odd bit.
    profiler->numSoundTimes &= 0xFFFE;

    //! wrong index used to retrieve vblankTimes, thus empty pairs can
    //  potentially be passed to draw_profiler_bar, because it could be sending
    //  pairs that are beyond the numVblankTimes enforced non-odd limit, due to
    //  using the wrong num value.
    for (i = 0; i < profiler->numSoundTimes; i += 2) {
        vblank += (profiler->vblankTimes[i + 1] - profiler->vblankTimes[i]);
    }

    // Draw top profilers.

    // draw sound duration as the first bar. (red)
    clockStart = 0;
    draw_profiler_bar(0, clockStart, clockStart + taskStart, 212, GPACK_RGBA5551(255, 40, 40, 1));

    // draw level script execution duration. (yellow)
    clockStart += taskStart;
    draw_profiler_bar(0, clockStart, clockStart + levelScriptDuration, 212,
                      GPACK_RGBA5551(255, 255, 40, 1));

    // draw render duration. (orange)
    clockStart += levelScriptDuration;
    draw_profiler_bar(0, clockStart, clockStart + renderDuration, 212,
                      GPACK_RGBA5551(255, 120, 40, 1));

    // Draw bottom profilers.

    // rdp duration (orange)
    draw_profiler_bar(0, 0, rdpDuration, 216, GPACK_RGBA5551(255, 120, 40, 1));
    // rsp duration (yellow)
    draw_profiler_bar(0, 0, rspDuration, 216, GPACK_RGBA5551(255, 255, 40, 1));
    // vblank duration (red)
    draw_profiler_bar(0, 0, vblank, 216, GPACK_RGBA5551(255, 40, 40, 1));

    draw_reference_profiler_bars();
}

// Draw the Profiler per frame. Toggle the mode if the player presses L while this
// renderer is active.
void draw_profiler(void) {
    if (gPlayer1Controller->buttonPressed & L_TRIG) {
        gProfilerMode ^= 1;
    }

    if (gProfilerMode == 0) {
        draw_profiler_mode_0();
    } else {
        draw_profiler_mode_1();
    }
}

void profiler_stage_begin(enum ProfilerStage stage) {
    sStageStart[stage] = osGetTime();
}

void profiler_stage_end(enum ProfilerStage stage) {
    sStageTotal[stage] += osGetTime() - sStageStart[stage];
}

#ifdef ENABLE_PROFILER_LOG
static void isviewer_write(const char *str, u32 len) {
    volatile u32 *buf = (volatile u32 *) 0xB3FF0020;
    volatile u32 *flush = (volatile u32 *) 0xB3FF0014;
    volatile u32 *piStatus = (volatile u32 *) 0xA4600010;
    u32 i;
    u32 word;

    for (i = 0; i < len; i += 4) {
        word = ((u32)(u8) str[i] << 24);
        if (i + 1 < len) word |= ((u32)(u8) str[i + 1] << 16);
        if (i + 2 < len) word |= ((u32)(u8) str[i + 2] << 8);
        if (i + 3 < len) word |= ((u32)(u8) str[i + 3]);
        while (*piStatus & 3) {}
        buf[i >> 2] = word;
    }
    while (*piStatus & 3) {}
    *flush = len;
}

static char *prof_append_str(char *dst, const char *src) {
    while (*src != '\0') {
        *dst++ = *src++;
    }
    return dst;
}

static char *prof_append_s32(char *dst, s32 val) {
    char tmp[16];
    s32 i = 0;
    u32 uval;

    if (val < 0) {
        *dst++ = '-';
        uval = (u32)(-val);
    } else {
        uval = (u32) val;
    }
    if (uval == 0) {
        *dst++ = '0';
        return dst;
    }
    while (uval > 0) {
        tmp[i++] = (char)('0' + (uval % 10));
        uval /= 10;
    }
    while (i > 0) {
        *dst++ = tmp[--i];
    }
    return dst;
}

static char *prof_append_hex(char *dst, u32 val) {
    static const char hex[] = "0123456789abcdef";
    s32 shift;

    *dst++ = '0';
    *dst++ = 'x';
    for (shift = 28; shift >= 0; shift -= 4) {
        *dst++ = hex[(val >> shift) & 0xF];
    }
    return dst;
}

static u32 prof_cycles_to_us(OSTime cycles) {
    if ((s64) cycles < 0) {
        return 0;
    }
    return (u32)((cycles * 1000000ULL) / osClockRate);
}

static OSTime sPrevFrameStart = 0;
static u64 sSumFrameUs = 0;
static u64 sSumCpuUs = 0;
static u64 sSumLvlUs = 0;
static u64 sSumObjUs = 0;
static u64 sSumRendUs = 0;
static u64 sSumAudTickUs = 0;
static u64 sSumAudUs = 0;
static u64 sSumRspUs = 0;
static u64 sSumRdpUs = 0;
static u64 sSumDlCmds = 0;
static u32 sSampleCount = 0;

void profiler_log_frame_isviewer(void) {
    struct ProfilerFrameData *prof = &gProfilerFrameData[gCurrentFrameIndex1 ^ 1];
    struct ProfilerFrameData *gfx = &gProfilerFrameData[gCurrentFrameIndex2 ^ 1];
    OSTime frameStart = prof->gameTimes[THREAD5_START];
    OSTime frameDelta = (sPrevFrameStart != 0) ? (frameStart - sPrevFrameStart) : 0;
    u32 frameUs = prof_cycles_to_us(frameDelta);
    u32 cpuUs = prof_cycles_to_us(prof->gameTimes[BEFORE_DISPLAY_LISTS] - prof->gameTimes[THREAD5_START]);
    u32 lvlUs = prof_cycles_to_us(prof->gameTimes[LEVEL_SCRIPT_EXECUTE] - prof->gameTimes[THREAD5_START]);
    u32 objUs = prof_cycles_to_us(sStageTotal[PROF_STAGE_OBJECTS]);
    u32 rendUs = prof_cycles_to_us(sStageTotal[PROF_STAGE_RENDER]);
    u32 audTickUs = prof_cycles_to_us(sStageTotal[PROF_STAGE_AUDIO_TICK]);
    OSTime audCycles = 0;
    u32 audUs;
    u32 rspUs = prof_cycles_to_us(gfx->gfxTimes[RSP_COMPLETE] - gfx->gfxTimes[TASKS_QUEUED]);
    u32 rdpUs = prof_cycles_to_us(gfx->gfxTimes[RDP_COMPLETE] - gfx->gfxTimes[TASKS_QUEUED]);
    u32 dlCmds = (u32)(gDisplayListHead - gGfxPool->buffer);
    s32 i;
    char line[256];
    char *p;

    sPrevFrameStart = frameStart;
    for (i = 0; i < (prof->numSoundTimes & ~1); i += 2) {
        audCycles += prof->soundTimes[i + 1] - prof->soundTimes[i];
    }
    audUs = prof_cycles_to_us(audCycles);

    for (i = 0; i < PROF_STAGE_COUNT; i++) {
        sStageTotal[i] = 0;
    }

    if (gRenderFrame >= 60 && gRenderFrame < 180) {
        sSumFrameUs += frameUs;
        sSumCpuUs += cpuUs;
        sSumLvlUs += lvlUs;
        sSumObjUs += objUs;
        sSumRendUs += rendUs;
        sSumAudTickUs += audTickUs;
        sSumAudUs += audUs;
        sSumRspUs += rspUs;
        sSumRdpUs += rdpUs;
        sSumDlCmds += dlCmds;
        sSampleCount++;
    }

    if (gRenderFrame == 60 || gRenderFrame == 120 || gRenderFrame == 179) {
        p = line;
        p = prof_append_str(p, "PROF f=");
        p = prof_append_s32(p, (s32) gRenderFrame);
        p = prof_append_str(p, " frame_us=");
        p = prof_append_s32(p, (s32) frameUs);
        p = prof_append_str(p, " cpu_us=");
        p = prof_append_s32(p, (s32) cpuUs);
        p = prof_append_str(p, " lvl_us=");
        p = prof_append_s32(p, (s32) lvlUs);
        p = prof_append_str(p, " obj_us=");
        p = prof_append_s32(p, (s32) objUs);
        p = prof_append_str(p, " rend_us=");
        p = prof_append_s32(p, (s32) rendUs);
        p = prof_append_str(p, " aud_us=");
        p = prof_append_s32(p, (s32) audUs);
        p = prof_append_str(p, " rsp_us=");
        p = prof_append_s32(p, (s32) rspUs);
        p = prof_append_str(p, " rdp_us=");
        p = prof_append_s32(p, (s32) rdpUs);
        p = prof_append_str(p, " dl=");
        p = prof_append_s32(p, (s32) dlCmds);
        p = prof_append_str(p, " pos=(");
        p = prof_append_s32(p, (s32) gMarioState->pos[0]);
        *p++ = ',';
        p = prof_append_s32(p, (s32) gMarioState->pos[1]);
        *p++ = ',';
        p = prof_append_s32(p, (s32) gMarioState->pos[2]);
        p = prof_append_str(p, ") act=");
        p = prof_append_hex(p, gMarioState->action);
        *p++ = '\n';
        isviewer_write(line, (u32)(p - line));
    }

    if (gRenderFrame == 180 && sSampleCount > 0) {
        u32 avgFrame = (u32)(sSumFrameUs / sSampleCount);
        u32 fpsX10 = (avgFrame > 0) ? (10000000U / avgFrame) : 0;

        p = line;
        p = prof_append_str(p, "PROF_SUMMARY n=");
        p = prof_append_s32(p, (s32) sSampleCount);
        p = prof_append_str(p, " fps_x10=");
        p = prof_append_s32(p, (s32) fpsX10);
        p = prof_append_str(p, " frame_us=");
        p = prof_append_s32(p, (s32) avgFrame);
        p = prof_append_str(p, " cpu_us=");
        p = prof_append_s32(p, (s32)(sSumCpuUs / sSampleCount));
        p = prof_append_str(p, " lvl_us=");
        p = prof_append_s32(p, (s32)(sSumLvlUs / sSampleCount));
        p = prof_append_str(p, " obj_us=");
        p = prof_append_s32(p, (s32)(sSumObjUs / sSampleCount));
        p = prof_append_str(p, " rend_us=");
        p = prof_append_s32(p, (s32)(sSumRendUs / sSampleCount));
        p = prof_append_str(p, " audtick_us=");
        p = prof_append_s32(p, (s32)(sSumAudTickUs / sSampleCount));
        p = prof_append_str(p, " aud_us=");
        p = prof_append_s32(p, (s32)(sSumAudUs / sSampleCount));
        p = prof_append_str(p, " rsp_us=");
        p = prof_append_s32(p, (s32)(sSumRspUs / sSampleCount));
        p = prof_append_str(p, " rdp_us=");
        p = prof_append_s32(p, (s32)(sSumRdpUs / sSampleCount));
        p = prof_append_str(p, " dl=");
        p = prof_append_s32(p, (s32)(sSumDlCmds / sSampleCount));
        *p++ = '\n';
        isviewer_write(line, (u32)(p - line));
    }
}
#else
void profiler_log_frame_isviewer(void) {
    s32 i;
    for (i = 0; i < PROF_STAGE_COUNT; i++) {
        sStageTotal[i] = 0;
    }
}
#endif
