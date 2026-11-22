// Whirlpool

// 0x05012848
ALIGNED8 static const Texture whirlpool_seg5_texture_05012848[] = {
#include "actors/whirlpool/whirlpool.ia16.inc.c"
};

// 0x05013848


// 0x05013928


// 0x05013A28


// 0x05013B08


// 0x05013B58 - 0x05013CB8
static const Vtx whirlpool_seg5_dl_05013B58_vtx32_0[] = {
    {{{    93,    129,    161}, 0, {   650,   1708}, {0xff, 0xff, 0xff, 0xff}}},
    {{{     0,    129,    185}, 0, {   480,   1708}, {0xff, 0xff, 0xff, 0xff}}},
    {{{     0,      0,      0}, 0, {   564,   2012}, {0xff, 0xff, 0xff, 0xff}}},
    {{{     0,    802,    379}, 0, {   480,    128}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   189,    802,    328}, 0, {   650,    128}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   161,    129,     93}, 0, {   820,   1708}, {0xff, 0xff, 0xff, 0xff}}},
    {{{     0,      0,      0}, 0, {   734,   2012}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   328,    802,    189}, 0, {   820,    128}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -92,    129,    161}, 0, {   308,   1708}, {0xff, 0xff, 0xff, 0xff}}},
    {{{  -188,    802,    328}, 0, {   308,    128}, {0xff, 0xff, 0xff, 0xff}}},
    {{{     0,      0,      0}, 0, {   394,   2012}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   379,    802,      0}, 0, {   990,    128}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   185,    129,      0}, 0, {   990,   1708}, {0xff, 0xff, 0xff, 0xff}}},
    {{{     0,      0,      0}, 0, {   904,   2012}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   161,    129,    -92}, 0, {  1160,   1708}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   328,    802,   -188}, 0, {  1160,    128}, {0xff, 0xff, 0xff, 0xff}}},
    {{{     0,      0,      0}, 0, {  1076,   2012}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    93,    129,   -160}, 0, {  1330,   1708}, {0xff, 0xff, 0xff, 0xff}}},
    {{{     0,      0,      0}, 0, {  1246,   2012}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   189,    802,   -327}, 0, {  1330,    128}, {0xff, 0xff, 0xff, 0xff}}},
    {{{     0,    802,   -378}, 0, {  1502,    128}, {0xff, 0xff, 0xff, 0xff}}},
    {{{     0,    129,   -184}, 0, {  1502,   1708}, {0xff, 0xff, 0xff, 0xff}}},
    {{{     0,      0,      0}, 0, {  1416,   2012}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -92,    129,   -160}, 0, {  1672,   1708}, {0xff, 0xff, 0xff, 0xff}}},
    {{{  -188,    802,   -327}, 0, {  1672,    128}, {0xff, 0xff, 0xff, 0xff}}},
    {{{     0,      0,      0}, 0, {  1586,   2012}, {0xff, 0xff, 0xff, 0xff}}},
    {{{  -160,    129,    -92}, 0, {  1842,   1708}, {0xff, 0xff, 0xff, 0xff}}},
    {{{     0,      0,      0}, 0, {  1756,   2012}, {0xff, 0xff, 0xff, 0xff}}},
    {{{  -327,    802,   -188}, 0, {  1842,    128}, {0xff, 0xff, 0xff, 0xff}}},
    {{{  -378,    802,      0}, 0, {  2012,    128}, {0xff, 0xff, 0xff, 0xff}}},
    {{{  -184,    129,      0}, 0, {  2012,   1708}, {0xff, 0xff, 0xff, 0xff}}},
    {{{     0,      0,      0}, 0, {  1926,   2012}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -92,    129,    161}, 0, {   308,   1708}, {0xff, 0xff, 0xff, 0xff}}},
    {{{  -160,    129,     93}, 0, {   138,   1708}, {0xff, 0xff, 0xff, 0xff}}},
    {{{     0,      0,      0}, 0, {   224,   2012}, {0xff, 0xff, 0xff, 0xff}}},
    {{{  -327,    802,    189}, 0, {   138,    128}, {0xff, 0xff, 0xff, 0xff}}},
    {{{  -188,    802,    328}, 0, {   308,    128}, {0xff, 0xff, 0xff, 0xff}}},
    {{{  -378,    802,      0}, 0, {     0,    128}, {0xff, 0xff, 0xff, 0xff}}},
    {{{  -184,    129,      0}, 0, {     0,   1708}, {0xff, 0xff, 0xff, 0xff}}},
    {{{     0,      0,      0}, 0, {    54,   2012}, {0xff, 0xff, 0xff, 0xff}}},
};

const Gfx whirlpool_seg5_dl_05013B58[] = {
    gsDPSetTextureImage(G_IM_FMT_IA, G_IM_SIZ_16b, 1, whirlpool_seg5_texture_05012848),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 64 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSPVertex(&whirlpool_seg5_dl_05013B58_vtx32_0[0], 32, 0),
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
    gsSPVertex(&whirlpool_seg5_dl_05013B58_vtx32_0[32], 8, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  0,  3,  1, 0x0),
    gsSP2Triangles( 0,  4,  3, 0x0,  1,  3,  5, 0x0),
    gsSP2Triangles( 1,  5,  6, 0x0,  1,  6,  7, 0x0),
    gsSPEndDisplayList(),
};

// 0x05013CB8 - 0x05013D28
const Gfx whirlpool_seg5_dl_05013CB8[] = {
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_MODULATEIA, G_CC_MODULATEIA),
    gsSPClearGeometryMode(G_LIGHTING | G_CULL_BACK),
    gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_16b, 0, 0, G_TX_LOADTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_16b, 8, 0, G_TX_RENDERTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, 5, G_TX_NOLOD),
    gsDPSetTileSize(0, 0, 0, (32 - 1) << G_TEXTURE_IMAGE_FRAC, (64 - 1) << G_TEXTURE_IMAGE_FRAC),
    gsSPDisplayList(whirlpool_seg5_dl_05013B58),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
    gsSPSetGeometryMode(G_LIGHTING | G_CULL_BACK),
    gsSPEndDisplayList(),
};
