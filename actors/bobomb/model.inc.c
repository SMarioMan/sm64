// Bobomb

// 0x0801DA60
ALIGNED8 static const Texture bobomb_seg8_texture_0801DA60[] = {
#include "actors/bobomb/bob-omb_left_side.rgba16.inc.c"
};

// 0x0801EA60
ALIGNED8 static const Texture bobomb_seg8_texture_0801EA60[] = {
#include "actors/bobomb/bob-omb_right_side.rgba16.inc.c"
};

// 0x0801FA60
ALIGNED8 static const Texture bobomb_seg8_texture_0801FA60[] = {
#include "actors/bobomb/bob-omb_buddy_left_side.rgba16.inc.c"
};

// 0x08020A60
ALIGNED8 static const Texture bobomb_seg8_texture_08020A60[] = {
#include "actors/bobomb/bob-omb_buddy_right_side.rgba16.inc.c"
};

// 0x08021A60
ALIGNED8 static const Texture bobomb_seg8_texture_08021A60[] = {
#include "actors/bobomb/bob-omb_eyes.rgba16.inc.c"
};

// 0x08022260
ALIGNED8 static const Texture bobomb_seg8_texture_08022260[] = {
#include "actors/bobomb/bob-omb_eyes_blink.rgba16.inc.c"
};

// 0x08022A60
static const Vtx bobomb_seg8_vertex_08022A60[] = {
    {{{   133,    -47,      0}, 0, {   480,      0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   133,     32,      0}, 0, {   480,    990}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   128,     32,     50}, 0, {   990,    990}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   128,    -47,    -49}, 0, {     0,      0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   128,    -47,     50}, 0, {   990,      0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   128,     32,    -49}, 0, {     0,    990}, {0xff, 0xff, 0xff, 0xff}}},
};

// 0x08022AC0 - 0x08022B08
const Gfx bobomb_seg8_dl_08022AC0[] = {
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_DECALRGBA, G_CC_DECALRGBA),
    gsSPClearGeometryMode(G_LIGHTING),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, G_TX_LOADTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, G_TX_RENDERTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, 5, G_TX_NOLOD),
    gsDPSetTileSize(0, 0, 0, (32 - 1) << G_TEXTURE_IMAGE_FRAC, (32 - 1) << G_TEXTURE_IMAGE_FRAC),
    gsSPEndDisplayList(),
};

// 0x08022B08 - 0x08022B58
const Gfx bobomb_seg8_dl_08022B08[] = {
    gsSPVertex(bobomb_seg8_vertex_08022A60, 6, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  3,  1,  0, 0x0),
    gsSP2Triangles( 0,  2,  4, 0x0,  3,  5,  1, 0x0),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPEndDisplayList(),
};

// 0x08022B58 - 0x08022B88
const Gfx bobomb_seg8_dl_08022B58[] = {
    gsSPDisplayList(bobomb_seg8_dl_08022AC0),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, bobomb_seg8_texture_08021A60),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 32 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSPBranchList(bobomb_seg8_dl_08022B08),
};

// 0x08022B88 - 0x08022BB8
const Gfx bobomb_seg8_dl_08022B88[] = {
    gsSPDisplayList(bobomb_seg8_dl_08022AC0),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, bobomb_seg8_texture_08022260),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 32 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSPBranchList(bobomb_seg8_dl_08022B08),
};

// Combined 8-vertex Bob-omb billboard body (1 gsSPVertex load instead of 2)
static const Vtx bobomb_seg8_vertex_body[] = {
{{{     0,     49,      0}, 0, {   990,      0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -49,    -49,      0}, 0, {     0,   2012}, {0xff, 0xff, 0xff, 0xff}}},
    {{{     0,    -49,      0}, 0, {   990,   2012}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -49,     49,      0}, 0, {     0,      0}, {0xff, 0xff, 0xff, 0xff}}},
{{{    49,     49,      0}, 0, {   990,      0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{     0,    -49,      0}, 0, {     0,   2012}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    49,    -49,      0}, 0, {   990,   2012}, {0xff, 0xff, 0xff, 0xff}}},
    {{{     0,     49,      0}, 0, {     0,      0}, {0xff, 0xff, 0xff, 0xff}}},
};

// 0x08022D08 - Black Bob-omb billboard body (inlined, 1 gsSPVertex load)
const Gfx bobomb_seg8_dl_08022D08[] = {
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_DECALRGBA, G_CC_DECALRGBA),
    gsSPClearGeometryMode(G_LIGHTING),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, G_TX_LOADTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, G_TX_RENDERTILE, 0, G_TX_CLAMP, 6, G_TX_NOLOD, G_TX_CLAMP, 5, G_TX_NOLOD),
    gsDPSetTileSize(0, 0, 0, (32 - 1) << G_TEXTURE_IMAGE_FRAC, (64 - 1) << G_TEXTURE_IMAGE_FRAC),
    gsSPVertex(bobomb_seg8_vertex_body, 8, 0),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, bobomb_seg8_texture_0801DA60),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 64 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSP2Triangles( 0,  1,  2, 0x0,  0,  3,  1, 0x0),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, bobomb_seg8_texture_0801EA60),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 64 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSP2Triangles( 4,  5,  6, 0x0,  4,  7,  5, 0x0),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPEndDisplayList(),
};

// 0x08022D78 - Bob-omb Buddy billboard body (inlined, 1 gsSPVertex load)
const Gfx bobomb_seg8_dl_08022D78[] = {
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_DECALRGBA, G_CC_DECALRGBA),
    gsSPClearGeometryMode(G_LIGHTING),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, G_TX_LOADTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, G_TX_RENDERTILE, 0, G_TX_CLAMP, 6, G_TX_NOLOD, G_TX_CLAMP, 5, G_TX_NOLOD),
    gsDPSetTileSize(0, 0, 0, (32 - 1) << G_TEXTURE_IMAGE_FRAC, (64 - 1) << G_TEXTURE_IMAGE_FRAC),
    gsSPVertex(bobomb_seg8_vertex_body, 8, 0),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, bobomb_seg8_texture_0801FA60),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 64 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSP2Triangles( 0,  1,  2, 0x0,  0,  3,  1, 0x0),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, bobomb_seg8_texture_08020A60),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 64 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSP2Triangles( 4,  5,  6, 0x0,  4,  7,  5, 0x0),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPEndDisplayList(),
};

// 0x08022DE8
static const Lights1 bobomb_seg8_lights_08022DE8 = gdSPDefLights1(
    0x3f, 0x26, 0x04,
    0xff, 0x99, 0x12, 0x28, 0x28, 0x28
);

// 0x08022E00
static const Lights1 bobomb_seg8_lights_08022E00 = gdSPDefLights1(
    0x2c, 0x2c, 0x2c,
    0xb2, 0xb2, 0xb2, 0x28, 0x28, 0x28
);

// Unreferenced light group
static const Lights1 bobomb_lights_unused = gdSPDefLights1(
    0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x28, 0x28, 0x28
);

// Optimized 10-vertex / 16-triangle Bob-omb left foot (1 gsSPVertex load)
static const Vtx bobomb_seg8_vertex_08022E30[] = {
    {{{   24,    28,    -2}, 0, {     0,      0}, {0x00, 0x7f, 0x00, 0xff}}},
    {{{   79,    12,    -2}, 0, {     0,      0}, {0x58, 0x5c, 0x00, 0xff}}},
    {{{   25,    12,    33}, 0, {     0,      0}, {0x00, 0x47, 0x69, 0xff}}},
    {{{  -30,    12,    -2}, 0, {     0,      0}, {0xa8, 0x5c, 0x00, 0xff}}},
    {{{   24,    12,   -37}, 0, {     0,      0}, {0x00, 0x47, 0x97, 0xff}}},
    {{{   63,   -14,    23}, 0, {     0,      0}, {0x36, 0xb0, 0x53, 0xff}}},
    {{{  -14,   -14,    23}, 0, {     0,      0}, {0xca, 0xb0, 0x53, 0xff}}},
    {{{  -14,   -14,   -27}, 0, {     0,      0}, {0xca, 0xb0, 0xad, 0xff}}},
    {{{   63,   -14,   -27}, 0, {     0,      0}, {0x36, 0xb0, 0xad, 0xff}}},
    {{{   24,   -30,    -2}, 0, {     0,      0}, {0x00, 0x81, 0x00, 0xff}}},
};

// Optimized 10-vertex / 16-triangle Bob-omb right foot (1 gsSPVertex load)
static const Vtx bobomb_seg8_vertex_08022F70[] = {
    {{{   24,    28,     2}, 0, {     0,      0}, {0x00, 0x7f, 0x00, 0xff}}},
    {{{   78,    12,     2}, 0, {     0,      0}, {0x57, 0x5c, 0x00, 0xff}}},
    {{{   24,    12,    37}, 0, {     0,      0}, {0x00, 0x48, 0x69, 0xff}}},
    {{{  -30,    12,     2}, 0, {     0,      0}, {0xa9, 0x5c, 0x00, 0xff}}},
    {{{   24,    12,   -33}, 0, {     0,      0}, {0x00, 0x48, 0x97, 0xff}}},
    {{{   62,   -13,    27}, 0, {     0,      0}, {0x36, 0xb0, 0x52, 0xff}}},
    {{{  -14,   -13,    27}, 0, {     0,      0}, {0xca, 0xb0, 0x52, 0xff}}},
    {{{  -14,   -13,   -23}, 0, {     0,      0}, {0xca, 0xb0, 0xae, 0xff}}},
    {{{   62,   -13,   -23}, 0, {     0,      0}, {0x36, 0xb0, 0xae, 0xff}}},
    {{{   24,   -29,     2}, 0, {     0,      0}, {0x00, 0x81, 0x00, 0xff}}},
};

// 0x080230B0


// 0x08023190


// 0x08023270 - 0x08023378
const Gfx bobomb_seg8_dl_08023270[] = {
    gsSPLight(&bobomb_seg8_lights_08022DE8.l, 1),
    gsSPLight(&bobomb_seg8_lights_08022DE8.a, 2),
    gsSPVertex(bobomb_seg8_vertex_08022E30, 10, 0),
    gsSP2Triangles( 0,  2,  1, 0x0,  1,  2,  5, 0x0),
    gsSP2Triangles( 2,  6,  5, 0x0,  9,  5,  6, 0x0),
    gsSP2Triangles( 0,  3,  2, 0x0,  2,  3,  6, 0x0),
    gsSP2Triangles( 3,  7,  6, 0x0,  9,  6,  7, 0x0),
    gsSP2Triangles( 0,  4,  3, 0x0,  3,  4,  7, 0x0),
    gsSP2Triangles( 4,  8,  7, 0x0,  9,  7,  8, 0x0),
    gsSP2Triangles( 0,  1,  4, 0x0,  4,  1,  8, 0x0),
    gsSP2Triangles( 1,  5,  8, 0x0,  9,  8,  5, 0x0),
    gsSPEndDisplayList(),
};

// 0x08023378 - 0x08023480
const Gfx bobomb_seg8_dl_08023378[] = {
    gsSPLight(&bobomb_seg8_lights_08022DE8.l, 1),
    gsSPLight(&bobomb_seg8_lights_08022DE8.a, 2),
    gsSPVertex(bobomb_seg8_vertex_08022F70, 10, 0),
    gsSP2Triangles( 0,  2,  1, 0x0,  1,  2,  5, 0x0),
    gsSP2Triangles( 2,  6,  5, 0x0,  9,  5,  6, 0x0),
    gsSP2Triangles( 0,  3,  2, 0x0,  2,  3,  6, 0x0),
    gsSP2Triangles( 3,  7,  6, 0x0,  9,  6,  7, 0x0),
    gsSP2Triangles( 0,  4,  3, 0x0,  3,  4,  7, 0x0),
    gsSP2Triangles( 4,  8,  7, 0x0,  9,  7,  8, 0x0),
    gsSP2Triangles( 0,  1,  4, 0x0,  4,  1,  8, 0x0),
    gsSP2Triangles( 1,  5,  8, 0x0,  9,  8,  5, 0x0),
    gsSPEndDisplayList(),
};

// 0x08023480 - 0x08023528
static const Vtx bobomb_seg8_dl_08023480_vtx32_0[] = {
    {{{     0,   -100,     59}, 0, {     0,      0}, {0x00, 0xfe, 0x7f, 0x00}}},
    {{{   -53,    -99,     28}, 0, {     0,      0}, {0xc1, 0xfe, 0x6d, 0x00}}},
    {{{   -53,   -140,     27}, 0, {     0,      0}, {0xc1, 0xfe, 0x6d, 0x00}}},
    {{{     0,   -141,     58}, 0, {     0,      0}, {0x00, 0xfe, 0x7f, 0xff}}},
    {{{    53,    -99,     28}, 0, {     0,      0}, {0x3f, 0xfe, 0x6d, 0xff}}},
    {{{    53,   -140,     27}, 0, {     0,      0}, {0x3f, 0xfe, 0x6d, 0xff}}},
    {{{   -53,    -99,     28}, 0, {     0,      0}, {0x81, 0x00, 0x00, 0xff}}},
    {{{   -53,    -98,    -32}, 0, {     0,      0}, {0x81, 0x00, 0x00, 0xff}}},
    {{{   -53,   -139,    -33}, 0, {     0,      0}, {0x81, 0x00, 0x00, 0xff}}},
    {{{   -53,   -140,     27}, 0, {     0,      0}, {0x81, 0x00, 0x00, 0xff}}},
    {{{   -53,    -98,    -32}, 0, {     0,      0}, {0xc1, 0x02, 0x93, 0xff}}},
    {{{     0,    -97,    -63}, 0, {     0,      0}, {0xc1, 0x02, 0x93, 0xff}}},
    {{{     0,   -138,    -64}, 0, {     0,      0}, {0xc1, 0x02, 0x93, 0xff}}},
    {{{   -53,   -139,    -33}, 0, {     0,      0}, {0xc1, 0x02, 0x93, 0xff}}},
    {{{    53,    -98,    -32}, 0, {     0,      0}, {0x7f, 0x00, 0x00, 0xff}}},
    {{{    53,    -99,     28}, 0, {     0,      0}, {0x7f, 0x00, 0x00, 0x00}}},
    {{{    53,   -140,     27}, 0, {     0,      0}, {0x7f, 0x00, 0x00, 0x00}}},
    {{{    53,   -139,    -33}, 0, {     0,      0}, {0x7f, 0x00, 0x00, 0xff}}},
    {{{     0,    -97,    -63}, 0, {     0,      0}, {0x3f, 0x02, 0x93, 0xff}}},
    {{{    53,    -98,    -32}, 0, {     0,      0}, {0x3f, 0x02, 0x93, 0xff}}},
    {{{    53,   -139,    -33}, 0, {     0,      0}, {0x3f, 0x02, 0x93, 0xff}}},
    {{{     0,   -138,    -64}, 0, {     0,      0}, {0x3f, 0x02, 0x93, 0xff}}},
    {{{     0,   -138,    -64}, 0, {     0,      0}, {0x00, 0x81, 0xfe, 0xff}}},
    {{{    53,   -139,    -33}, 0, {     0,      0}, {0x00, 0x81, 0xfe, 0xff}}},
    {{{    53,   -140,     27}, 0, {     0,      0}, {0x00, 0x81, 0xfe, 0xff}}},
    {{{     0,   -141,     58}, 0, {     0,      0}, {0x00, 0x81, 0xfe, 0xff}}},
    {{{   -53,   -140,     27}, 0, {     0,      0}, {0x00, 0x81, 0xfe, 0xff}}},
    {{{   -53,   -139,    -33}, 0, {     0,      0}, {0x00, 0x81, 0xfe, 0xff}}},
};

const Gfx bobomb_seg8_dl_08023480[] = {
    gsSPLight(&bobomb_seg8_lights_08022E00.l, 1),
    gsSPLight(&bobomb_seg8_lights_08022E00.a, 2),
    gsSPVertex(&bobomb_seg8_dl_08023480_vtx32_0[0], 28, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  0,  2,  3, 0x0),
    gsSP2Triangles( 4,  0,  3, 0x0,  4,  3,  5, 0x0),
    gsSP2Triangles( 6,  7,  8, 0x0,  6,  8,  9, 0x0),
    gsSP2Triangles(10, 11, 12, 0x0, 10, 12, 13, 0x0),
    gsSP2Triangles(14, 15, 16, 0x0, 14, 16, 17, 0x0),
    gsSP2Triangles(18, 19, 20, 0x0, 18, 20, 21, 0x0),
    gsSP2Triangles(22, 23, 24, 0x0, 22, 24, 25, 0x0),
    gsSP2Triangles(22, 25, 26, 0x0, 22, 26, 27, 0x0),
    gsSPEndDisplayList(),
};
