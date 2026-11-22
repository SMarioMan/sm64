// Cannon Base

// 0x08004988
static const Lights1 cannon_base_seg8_lights_08004988 = gdSPDefLights1(
    0x4c, 0x4c, 0x4c,
    0xff, 0xff, 0xff, 0x28, 0x28, 0x28
);

// 0x080049A0
static const Lights1 cannon_base_seg8_lights_080049A0 = gdSPDefLights1(
    0x0e, 0x10, 0x4c,
    0x30, 0x37, 0xff, 0x28, 0x28, 0x28
);

// 0x080049B8
ALIGNED8 static const Texture cannon_base_seg8_texture_080049B8[] = {
#include "actors/cannon_base/cannon_base.rgba16.inc.c"
};

// 0x080051B8
static const Vtx cannon_base_seg8_vertex_080051B8[] = {
    {{{   102,   -101,     51}, 0, {     0,   1758}, {0x7f, 0x00, 0x00, 0xff}}},
    {{{   102,   -101,    -50}, 0, {   990,   1758}, {0x7f, 0x00, 0x00, 0xff}}},
    {{{   102,     51,    -50}, 0, {   990,    228}, {0x7f, 0x00, 0x00, 0xff}}},
    {{{   102,     77,     26}, 0, {   224,    -28}, {0x7f, 0x00, 0x00, 0xff}}},
    {{{   102,     51,     51}, 0, {     0,    228}, {0x7f, 0x00, 0x00, 0xff}}},
    {{{   102,     77,    -25}, 0, {   734,    -28}, {0x7f, 0x00, 0x00, 0xff}}},
    {{{  -101,     51,    -50}, 0, {     0,    224}, {0x81, 0x00, 0x00, 0xff}}},
    {{{  -101,     77,     26}, 0, {   734,      0}, {0x81, 0x00, 0x00, 0xff}}},
    {{{  -101,     77,    -25}, 0, {   224,      0}, {0x81, 0x00, 0x00, 0xff}}},
    {{{  -101,   -101,    -50}, 0, {     0,   1754}, {0x81, 0x00, 0x00, 0xff}}},
    {{{  -101,   -101,     51}, 0, {   990,   1754}, {0x81, 0x00, 0x00, 0xff}}},
    {{{  -101,     51,     51}, 0, {   990,    224}, {0x81, 0x00, 0x00, 0xff}}},
};

// 0x08005278


// 0x08005378


// 0x08005468


// 0x08005558


// 0x08005658 - 0x080056D0
const Gfx cannon_base_seg8_dl_08005658[] = {
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, cannon_base_seg8_texture_080049B8),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 32 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSPLight(&cannon_base_seg8_lights_08004988.l, 1),
    gsSPLight(&cannon_base_seg8_lights_08004988.a, 2),
    gsSPVertex(cannon_base_seg8_vertex_080051B8, 12, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  0,  3,  4, 0x0),
    gsSP2Triangles( 0,  2,  5, 0x0,  0,  5,  3, 0x0),
    gsSP2Triangles( 6,  7,  8, 0x0,  6,  9, 10, 0x0),
    gsSP2Triangles( 6, 10, 11, 0x0,  6, 11,  7, 0x0),
    gsSPEndDisplayList(),
};

// 0x080056D0 - 0x080057F8
static const Vtx cannon_base_seg8_dl_080056D0_vtx32_0[] = {
    {{{   -60,   -101,     51}, 0, {     0,      0}, {0x00, 0x7f, 0x00, 0xff}}},
    {{{    61,   -101,     51}, 0, {     0,      0}, {0x00, 0x7f, 0x00, 0xff}}},
    {{{    61,   -101,    -50}, 0, {     0,      0}, {0x00, 0x7f, 0x00, 0xff}}},
    {{{   -60,   -101,    -50}, 0, {     0,      0}, {0x00, 0x7f, 0x00, 0xff}}},
    {{{   102,   -101,    -50}, 0, {     0,      0}, {0x00, 0x00, 0x81, 0xff}}},
    {{{    61,     51,    -50}, 0, {     0,      0}, {0x00, 0x00, 0x81, 0xff}}},
    {{{   102,     51,    -50}, 0, {     0,      0}, {0x00, 0x00, 0x81, 0xff}}},
    {{{    61,   -101,    -50}, 0, {     0,      0}, {0x00, 0x00, 0x81, 0xff}}},
    {{{    61,     51,    -50}, 0, {     0,      0}, {0x81, 0x00, 0x00, 0xff}}},
    {{{    61,   -101,    -50}, 0, {     0,      0}, {0x81, 0x00, 0x00, 0xff}}},
    {{{    61,   -101,     51}, 0, {     0,      0}, {0x81, 0x00, 0x00, 0xff}}},
    {{{    61,     51,     51}, 0, {     0,      0}, {0x81, 0x00, 0x00, 0xff}}},
    {{{    61,     77,     26}, 0, {     0,      0}, {0x81, 0x00, 0x00, 0xff}}},
    {{{    61,     77,    -25}, 0, {     0,      0}, {0x81, 0x00, 0x00, 0xff}}},
    {{{   102,     51,    -50}, 0, {     0,      0}, {0x00, 0x58, 0xa5, 0xff}}},
    {{{    61,     51,    -50}, 0, {     0,      0}, {0x00, 0x58, 0xa5, 0xff}}},
    {{{    61,     77,    -25}, 0, {     0,      0}, {0x00, 0x58, 0xa5, 0xff}}},
    {{{   102,     77,    -25}, 0, {     0,      0}, {0x00, 0x58, 0xa5, 0xff}}},
    {{{   102,     77,    -25}, 0, {     0,      0}, {0x00, 0x7f, 0x00, 0xff}}},
    {{{    61,     77,    -25}, 0, {     0,      0}, {0x00, 0x7f, 0x00, 0xff}}},
    {{{    61,     77,     26}, 0, {     0,      0}, {0x00, 0x7f, 0x00, 0xff}}},
    {{{   102,     77,     26}, 0, {     0,      0}, {0x00, 0x7f, 0x00, 0xff}}},
    {{{   102,     77,     26}, 0, {     0,      0}, {0x00, 0x58, 0x5b, 0xff}}},
    {{{    61,     77,     26}, 0, {     0,      0}, {0x00, 0x58, 0x5b, 0xff}}},
    {{{    61,     51,     51}, 0, {     0,      0}, {0x00, 0x58, 0x5b, 0xff}}},
    {{{   102,     51,     51}, 0, {     0,      0}, {0x00, 0x58, 0x5b, 0xff}}},
    {{{   102,     51,     51}, 0, {     0,      0}, {0x00, 0x00, 0x7f, 0xff}}},
    {{{    61,     51,     51}, 0, {     0,      0}, {0x00, 0x00, 0x7f, 0xff}}},
    {{{    61,   -101,     51}, 0, {     0,      0}, {0x00, 0x00, 0x7f, 0xff}}},
    {{{   102,   -101,     51}, 0, {     0,      0}, {0x00, 0x00, 0x7f, 0xff}}},
    {{{  -101,     77,    -25}, 0, {     0,      0}, {0x00, 0x58, 0xa5, 0xff}}},
    {{{   -60,     51,    -50}, 0, {     0,      0}, {0x00, 0x58, 0xa5, 0xff}}},
    {{{  -101,     51,    -50}, 0, {     0,      0}, {0x00, 0x58, 0xa5, 0xff}}},
    {{{   -60,     77,    -25}, 0, {     0,      0}, {0x00, 0x58, 0xa5, 0xff}}},
    {{{  -101,     51,    -50}, 0, {     0,      0}, {0x00, 0x00, 0x81, 0xff}}},
    {{{   -60,   -101,    -50}, 0, {     0,      0}, {0x00, 0x00, 0x81, 0xff}}},
    {{{  -101,   -101,    -50}, 0, {     0,      0}, {0x00, 0x00, 0x81, 0xff}}},
    {{{   -60,     51,    -50}, 0, {     0,      0}, {0x00, 0x00, 0x81, 0xff}}},
    {{{   -60,   -101,     51}, 0, {     0,      0}, {0x7f, 0x00, 0x00, 0xff}}},
    {{{   -60,   -101,    -50}, 0, {     0,      0}, {0x7f, 0x00, 0x00, 0xff}}},
    {{{   -60,     51,    -50}, 0, {     0,      0}, {0x7f, 0x00, 0x00, 0xff}}},
    {{{   -60,     77,    -25}, 0, {     0,      0}, {0x7f, 0x00, 0x00, 0xff}}},
    {{{   -60,     77,     26}, 0, {     0,      0}, {0x7f, 0x00, 0x00, 0xff}}},
    {{{   -60,     51,     51}, 0, {     0,      0}, {0x7f, 0x00, 0x00, 0xff}}},
    {{{  -101,   -101,     51}, 0, {     0,      0}, {0x00, 0x00, 0x7f, 0xff}}},
    {{{   -60,     51,     51}, 0, {     0,      0}, {0x00, 0x00, 0x7f, 0xff}}},
    {{{  -101,     51,     51}, 0, {     0,      0}, {0x00, 0x00, 0x7f, 0xff}}},
    {{{   -60,   -101,     51}, 0, {     0,      0}, {0x00, 0x00, 0x7f, 0xff}}},
    {{{  -101,     51,     51}, 0, {     0,      0}, {0x00, 0x58, 0x5b, 0xff}}},
    {{{   -60,     51,     51}, 0, {     0,      0}, {0x00, 0x58, 0x5b, 0xff}}},
    {{{   -60,     77,     26}, 0, {     0,      0}, {0x00, 0x58, 0x5b, 0xff}}},
    {{{  -101,     77,     26}, 0, {     0,      0}, {0x00, 0x58, 0x5b, 0xff}}},
    {{{  -101,     77,     26}, 0, {     0,      0}, {0x00, 0x7f, 0x00, 0xff}}},
    {{{   -60,     77,     26}, 0, {     0,      0}, {0x00, 0x7f, 0x00, 0xff}}},
    {{{   -60,     77,    -25}, 0, {     0,      0}, {0x00, 0x7f, 0x00, 0xff}}},
    {{{  -101,     77,    -25}, 0, {     0,      0}, {0x00, 0x7f, 0x00, 0xff}}},
};

const Gfx cannon_base_seg8_dl_080056D0[] = {
    gsSPLight(&cannon_base_seg8_lights_080049A0.l, 1),
    gsSPLight(&cannon_base_seg8_lights_080049A0.a, 2),
    gsSPVertex(&cannon_base_seg8_dl_080056D0_vtx32_0[0], 30, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  0,  2,  3, 0x0),
    gsSP2Triangles( 4,  5,  6, 0x0,  4,  7,  5, 0x0),
    gsSP2Triangles( 8,  9, 10, 0x0,  8, 10, 11, 0x0),
    gsSP2Triangles( 8, 11, 12, 0x0,  8, 12, 13, 0x0),
    gsSP2Triangles(14, 15, 16, 0x0, 14, 16, 17, 0x0),
    gsSP2Triangles(18, 19, 20, 0x0, 18, 20, 21, 0x0),
    gsSP2Triangles(22, 23, 24, 0x0, 22, 24, 25, 0x0),
    gsSP2Triangles(26, 27, 28, 0x0, 26, 28, 29, 0x0),
    gsSPVertex(&cannon_base_seg8_dl_080056D0_vtx32_0[30], 26, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  0,  3,  1, 0x0),
    gsSP2Triangles( 4,  5,  6, 0x0,  4,  7,  5, 0x0),
    gsSP2Triangles( 8,  9, 10, 0x0,  8, 10, 11, 0x0),
    gsSP2Triangles( 8, 11, 12, 0x0,  8, 12, 13, 0x0),
    gsSP2Triangles(14, 15, 16, 0x0, 14, 17, 15, 0x0),
    gsSP2Triangles(18, 19, 20, 0x0, 18, 20, 21, 0x0),
    gsSP2Triangles(22, 23, 24, 0x0, 22, 24, 25, 0x0),
    gsSPEndDisplayList(),
};

// 0x080057F8 - 0x08005870
const Gfx cannon_base_seg8_dl_080057F8[] = {
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_MODULATERGB, G_CC_MODULATERGB),
    gsSPClearGeometryMode(G_SHADING_SMOOTH),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, G_TX_LOADTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, G_TX_RENDERTILE, 0, G_TX_CLAMP, 5, G_TX_NOLOD, G_TX_CLAMP, 5, G_TX_NOLOD),
    gsDPSetTileSize(0, 0, 0, (32 - 1) << G_TEXTURE_IMAGE_FRAC, (32 - 1) << G_TEXTURE_IMAGE_FRAC),
    gsSPDisplayList(cannon_base_seg8_dl_08005658),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
    gsSPDisplayList(cannon_base_seg8_dl_080056D0),
    gsSPSetGeometryMode(G_SHADING_SMOOTH),
    gsSPEndDisplayList(),
};
