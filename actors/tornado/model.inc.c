// Tornado

// 0x05013128
ALIGNED8 static const Texture tornado_seg5_texture_05013128[] = {
#include "actors/tornado/tornado.ia16.inc.c"
};

// 0x05014128
static const Lights1 tornado_seg5_lights_05014128 = gdSPDefLights1(
    0x3b, 0x34, 0x23,
    0xee, 0xd0, 0x8d, 0x28, 0x28, 0x28
);

// 0x05014140


// 0x05014220


// 0x05014320


// 0x05014400


// 0x05014450 - 0x050145C0
static const Vtx tornado_seg5_dl_05014450_vtx32_0[] = {
    {{{   474,    661,    822}, 0, {   650,   1708}, {0x30, 0xbe, 0x60, 0x64}}},
    {{{     0,    661,    949}, 0, {   480,   1708}, {0x00, 0xb6, 0x67, 0x64}}},
    {{{     0,      0,      0}, 0, {   564,   2012}, {0x00, 0x82, 0x00, 0x64}}},
    {{{     0,   4107,   1938}, 0, {   480,    128}, {0x00, 0xdd, 0x7a, 0x64}}},
    {{{   969,   4107,   1679}, 0, {   650,    128}, {0x46, 0xde, 0x63, 0x64}}},
    {{{   822,    661,    474}, 0, {   820,   1708}, {0x60, 0xc3, 0x37, 0x64}}},
    {{{     0,      0,      0}, 0, {   734,   2012}, {0x00, 0x82, 0x00, 0x64}}},
    {{{  1679,   4107,    969}, 0, {   820,    128}, {0x69, 0xdd, 0x3d, 0x64}}},
    {{{  -474,    661,    822}, 0, {   308,   1708}, {0xc9, 0xc3, 0x60, 0x64}}},
    {{{  -969,   4107,   1679}, 0, {   308,    128}, {0xc3, 0xdd, 0x69, 0x64}}},
    {{{     0,      0,      0}, 0, {   394,   2012}, {0x00, 0x82, 0x00, 0x64}}},
    {{{  1938,   4107,      0}, 0, {   990,    128}, {0x7a, 0xdd, 0x00, 0x64}}},
    {{{   949,    661,      0}, 0, {   990,   1708}, {0x67, 0xb6, 0x00, 0x64}}},
    {{{     0,      0,      0}, 0, {   904,   2012}, {0x00, 0x82, 0x00, 0x64}}},
    {{{   822,    661,   -474}, 0, {  1160,   1708}, {0x60, 0xbe, 0xd0, 0x64}}},
    {{{  1679,   4107,   -969}, 0, {  1160,    128}, {0x63, 0xde, 0xba, 0x64}}},
    {{{     0,      0,      0}, 0, {  1076,   2012}, {0x00, 0x82, 0x00, 0x64}}},
    {{{   474,    661,   -822}, 0, {  1330,   1708}, {0x37, 0xc3, 0xa0, 0x64}}},
    {{{     0,      0,      0}, 0, {  1246,   2012}, {0x00, 0x82, 0x00, 0x64}}},
    {{{   969,   4107,  -1678}, 0, {  1330,    128}, {0x3d, 0xdd, 0x97, 0x64}}},
    {{{     0,   4107,  -1938}, 0, {  1502,    128}, {0x00, 0xdd, 0x86, 0x64}}},
    {{{     0,    661,   -949}, 0, {  1502,   1708}, {0x00, 0xb6, 0x99, 0x64}}},
    {{{     0,      0,      0}, 0, {  1416,   2012}, {0x00, 0x82, 0x00, 0x64}}},
    {{{  -474,    661,   -822}, 0, {  1672,   1708}, {0xd0, 0xbe, 0xa0, 0x64}}},
    {{{  -969,   4107,  -1678}, 0, {  1672,    128}, {0xba, 0xde, 0x9d, 0x64}}},
    {{{     0,      0,      0}, 0, {  1586,   2012}, {0x00, 0x82, 0x00, 0x64}}},
    {{{  -822,    661,   -474}, 0, {  1842,   1708}, {0xa0, 0xc3, 0xc9, 0x64}}},
    {{{     0,      0,      0}, 0, {  1756,   2012}, {0x00, 0x82, 0x00, 0x64}}},
    {{{ -1678,   4107,   -969}, 0, {  1842,    128}, {0x97, 0xdd, 0xc3, 0x64}}},
    {{{ -1938,   4107,      0}, 0, {  2012,    128}, {0x86, 0xdd, 0x00, 0x64}}},
    {{{  -949,    661,      0}, 0, {  2012,   1708}, {0x99, 0xb6, 0x00, 0x64}}},
    {{{     0,      0,      0}, 0, {  1926,   2012}, {0x00, 0x82, 0x00, 0x64}}},
    {{{  -474,    661,    822}, 0, {   308,   1708}, {0xc9, 0xc3, 0x60, 0x64}}},
    {{{  -822,    661,    474}, 0, {   138,   1708}, {0xa0, 0xbe, 0x30, 0x64}}},
    {{{     0,      0,      0}, 0, {   224,   2012}, {0x00, 0x82, 0x00, 0x64}}},
    {{{ -1678,   4107,    969}, 0, {   138,    128}, {0x9d, 0xde, 0x46, 0x64}}},
    {{{  -969,   4107,   1679}, 0, {   308,    128}, {0xc3, 0xdd, 0x69, 0x64}}},
    {{{ -1938,   4107,      0}, 0, {     0,    128}, {0x86, 0xdd, 0x00, 0x64}}},
    {{{  -949,    661,      0}, 0, {     0,   1708}, {0x99, 0xb6, 0x00, 0x64}}},
    {{{     0,      0,      0}, 0, {    54,   2012}, {0x00, 0x82, 0x00, 0x64}}},
};

const Gfx tornado_seg5_dl_05014450[] = {
    gsDPSetTextureImage(G_IM_FMT_IA, G_IM_SIZ_16b, 1, tornado_seg5_texture_05013128),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 64 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSPLight(&tornado_seg5_lights_05014128.l, 1),
    gsSPLight(&tornado_seg5_lights_05014128.a, 2),
    gsSPVertex(&tornado_seg5_dl_05014450_vtx32_0[0], 32, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  0,  3,  1, 0x0),
    gsSP2Triangles( 0,  4,  3, 0x0,  5,  4,  0, 0x0),
    gsSP2Triangles( 5,  0,  6, 0x0,  5,  7,  4, 0x0),
    gsSP2Triangles( 1,  3,  8, 0x0,  3,  9,  8, 0x0),
    gsSP2Triangles( 1,  8, 10, 0x0, 11,  7,  5, 0x0),
    gsSP2Triangles(12, 11,  5, 0x0, 12,  5, 13, 0x0),
    gsSP2Triangles(14, 11, 12, 0x0, 14, 15, 11, 0x0),
    gsSP2Triangles(14, 12, 16, 0x0, 17, 15, 14, 0x0),
    gsSP2Triangles(17, 14, 18, 0x0, 17, 19, 15, 0x0),
    gsSP2Triangles(20, 19, 17, 0x0, 21, 20, 17, 0x0),
    gsSP2Triangles(21, 17, 22, 0x0, 23, 20, 21, 0x0),
    gsSP2Triangles(23, 24, 20, 0x0, 23, 21, 25, 0x0),
    gsSP2Triangles(26, 24, 23, 0x0, 26, 23, 27, 0x0),
    gsSP2Triangles(26, 28, 24, 0x0, 29, 28, 26, 0x0),
    gsSP2Triangles(30, 29, 26, 0x0, 30, 26, 31, 0x0),
    gsSPVertex(&tornado_seg5_dl_05014450_vtx32_0[32], 8, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  0,  3,  1, 0x0),
    gsSP2Triangles( 0,  4,  3, 0x0,  1,  3,  5, 0x0),
    gsSP2Triangles( 1,  5,  6, 0x0,  1,  6,  7, 0x0),
    gsSPEndDisplayList(),
};

// 0x050145C0 - 0x05014630
const Gfx tornado_seg5_dl_050145C0[] = {
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_MODULATEIA, G_CC_MODULATEIA),
    gsSPClearGeometryMode(G_CULL_BACK),
    gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_16b, 0, 0, G_TX_LOADTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_16b, 8, 0, G_TX_RENDERTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, 5, G_TX_NOLOD),
    gsDPSetTileSize(0, 0, 0, (32 - 1) << G_TEXTURE_IMAGE_FRAC, (64 - 1) << G_TEXTURE_IMAGE_FRAC),
    gsSPDisplayList(tornado_seg5_dl_05014450),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
    gsSPSetGeometryMode(G_CULL_BACK),
    gsSPEndDisplayList(),
};
