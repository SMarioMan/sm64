// Sushi (Shark)

// Could be a duplicate binid of the previous actor, but i'm putting it here for
// macro reasons so I don't have to clutter the macros.inc with a new macro for this
// case.
UNUSED static const u64 sushi_unused_1 = 1;

// 0x05008ED0
ALIGNED8 static const Texture sushi_seg5_texture_05008ED0[] = {
#include "actors/sushi/sushi_snout.rgba16.inc.c"
};

// 0x050096D0
ALIGNED8 static const Texture sushi_seg5_texture_050096D0[] = {
#include "actors/sushi/sushi_eye.rgba16.inc.c"
};

// 0x05009AD0
ALIGNED8 static const Texture sushi_seg5_texture_05009AD0[] = {
#include "actors/sushi/sushi_tooth.rgba16.inc.c"
};

// 0x05009B50


// 0x05009C40


// 0x05009CC0 - 0x05009DD0
static const Vtx sushi_seg5_dl_05009CC0_vtx32_0[] = {
    {{{     0,      4,   -257}, 0, {   528,    804}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   416,      3,   -203}, 0, {   694,    704}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   416,   -104,   -154}, 0, {   694,    616}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   416,      3,    120}, 0, {   694,    114}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   416,    144,     67}, 0, {   694,    210}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   416,    112,   -154}, 0, {   694,    616}, {0xff, 0xff, 0xff, 0xff}}},
    {{{     0,    197,   -187}, 0, {   528,    676}, {0xff, 0xff, 0xff, 0xff}}},
    {{{     0,      4,    161}, 0, {   528,     40}, {0xff, 0xff, 0xff, 0xff}}},
    {{{     0,    208,     90}, 0, {   528,    170}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   416,   -136,     67}, 0, {   694,    210}, {0xff, 0xff, 0xff, 0xff}}},
    {{{     0,   -188,   -187}, 0, {   528,    676}, {0xff, 0xff, 0xff, 0xff}}},
    {{{     0,   -199,     90}, 0, {   528,    170}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -82,   -178,     76}, 0, {   494,    194}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -82,      4,    140}, 0, {   494,     78}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -82,    188,     76}, 0, {   494,    194}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -82,   -169,   -172}, 0, {   494,    650}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -82,      4,   -237}, 0, {   494,    768}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -82,    178,   -172}, 0, {   494,    650}, {0xff, 0xff, 0xff, 0xff}}},
};

const Gfx sushi_seg5_dl_05009CC0[] = {
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, sushi_seg5_texture_05008ED0),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 32 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSPVertex(&sushi_seg5_dl_05009CC0_vtx32_0[0], 18, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  2,  1,  3, 0x0),
    gsSP2Triangles( 1,  4,  3, 0x0,  5,  1,  0, 0x0),
    gsSP2Triangles( 1,  5,  4, 0x0,  4,  5,  6, 0x0),
    gsSP2Triangles( 5,  0,  6, 0x0,  7,  3,  4, 0x0),
    gsSP2Triangles( 6,  8,  4, 0x0,  4,  8,  7, 0x0),
    gsSP2Triangles( 2,  3,  9, 0x0,  9,  3,  7, 0x0),
    gsSP2Triangles(10,  2,  9, 0x0,  2, 10,  0, 0x0),
    gsSP2Triangles( 9, 11, 10, 0x0,  7, 11,  9, 0x0),
    gsSP2Triangles( 7, 12, 11, 0x0, 11, 12, 10, 0x0),
    gsSP2Triangles( 7, 13, 12, 0x0, 14, 13,  7, 0x0),
    gsSP2Triangles( 8, 14,  7, 0x0,  6, 14,  8, 0x0),
    gsSP2Triangles(10, 15,  0, 0x0, 12, 15, 10, 0x0),
    gsSP2Triangles(15, 16,  0, 0x0,  0, 16, 17, 0x0),
    gsSP2Triangles( 0, 17,  6, 0x0,  6, 17, 14, 0x0),
    gsSPEndDisplayList(),
};

// 0x05009DD0 - 0x05009E40
const Gfx sushi_seg5_dl_05009DD0[] = {
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_DECALRGB, G_CC_DECALRGB),
    gsSPClearGeometryMode(G_LIGHTING),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, G_TX_LOADTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, G_TX_RENDERTILE, 0, G_TX_CLAMP, 5, G_TX_NOLOD, G_TX_CLAMP, 5, G_TX_NOLOD),
    gsDPSetTileSize(0, 0, 0, (32 - 1) << G_TEXTURE_IMAGE_FRAC, (32 - 1) << G_TEXTURE_IMAGE_FRAC),
    gsSPDisplayList(sushi_seg5_dl_05009CC0),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPEndDisplayList(),
};

// 0x05009E40
static const Vtx sushi_seg5_vertex_05009E40[] = {
    {{{     0,    112,   -154}, 0, {   694,    616}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -82,    122,     52}, 0, {   660,    238}, {0xff, 0xff, 0xff, 0xff}}},
    {{{     0,    144,     67}, 0, {   694,    210}, {0xff, 0xff, 0xff, 0xff}}},
    {{{     0,   -104,   -154}, 0, {   694,    616}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -84,    -86,   -138}, 0, {   660,    586}, {0xff, 0xff, 0xff, 0xff}}},
    {{{     0,      3,   -203}, 0, {   694,    704}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -83,      4,   -181}, 0, {   660,    664}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -82,     95,   -138}, 0, {   660,    586}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   494,      0,    -79}, 0, {   890,    478}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   495,     45,     66}, 0, {   890,    212}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   494,    -44,     66}, 0, {   890,    212}, {0xff, 0xff, 0xff, 0xff}}},
    {{{     0,      3,    120}, 0, {   694,    114}, {0xff, 0xff, 0xff, 0xff}}},
    {{{     0,   -136,     67}, 0, {   694,    210}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -84,   -113,     52}, 0, {   660,    238}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -83,      4,     97}, 0, {   660,    156}, {0xff, 0xff, 0xff, 0xff}}},
};

// 0x05009F30 - 0x0500A008
const Gfx sushi_seg5_dl_05009F30[] = {
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, sushi_seg5_texture_05008ED0),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 32 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSPVertex(sushi_seg5_vertex_05009E40, 15, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  3,  4,  5, 0x0),
    gsSP2Triangles( 4,  6,  5, 0x0,  5,  7,  0, 0x0),
    gsSP2Triangles( 8,  3,  5, 0x0,  5,  6,  7, 0x0),
    gsSP2Triangles( 8,  5,  0, 0x0,  0,  7,  1, 0x0),
    gsSP2Triangles( 8,  9, 10, 0x0,  8,  0,  9, 0x0),
    gsSP2Triangles( 3,  8, 10, 0x0,  0,  2,  9, 0x0),
    gsSP2Triangles( 9,  2, 11, 0x0, 10,  9, 11, 0x0),
    gsSP2Triangles( 3, 10, 12, 0x0, 11, 12, 10, 0x0),
    gsSP2Triangles( 2,  1, 11, 0x0, 13,  4,  3, 0x0),
    gsSP2Triangles(11, 13, 12, 0x0,  1, 14, 11, 0x0),
    gsSP2Triangles(11, 14, 13, 0x0, 12, 13,  3, 0x0),
    gsSPEndDisplayList(),
};

// 0x0500A008 - 0x0500A078
const Gfx sushi_seg5_dl_0500A008[] = {
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_DECALRGB, G_CC_DECALRGB),
    gsSPClearGeometryMode(G_LIGHTING),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, G_TX_LOADTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, G_TX_RENDERTILE, 0, G_TX_CLAMP, 5, G_TX_NOLOD, G_TX_CLAMP, 5, G_TX_NOLOD),
    gsDPSetTileSize(0, 0, 0, (32 - 1) << G_TEXTURE_IMAGE_FRAC, (32 - 1) << G_TEXTURE_IMAGE_FRAC),
    gsSPDisplayList(sushi_seg5_dl_05009F30),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPEndDisplayList(),
};

// 0x0500A078
static const Vtx sushi_seg5_vertex_0500A078[] = {
    {{{     6,    -34,     71}, 0, {   890,    204}, {0xff, 0xff, 0xff, 0xff}}},
    {{{     5,      0,    -89}, 0, {   890,    498}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   241,    -41,      7}, 0, {   984,    320}, {0xff, 0xff, 0xff, 0xff}}},
    {{{     5,     35,     71}, 0, {   890,    204}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   239,     54,      7}, 0, {   984,    320}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   423,     11,   -362}, 0, {  1056,    994}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   462,     12,    649}, 0, {  1072,   -852}, {0xff, 0xff, 0xff, 0xff}}},
};

// 0x0500A0E8 - 0x0500A160
const Gfx sushi_seg5_dl_0500A0E8[] = {
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, sushi_seg5_texture_05008ED0),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 32 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSPVertex(sushi_seg5_vertex_0500A078, 7, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  1,  3,  4, 0x0),
    gsSP2Triangles( 1,  0,  3, 0x0,  1,  4,  5, 0x0),
    gsSP2Triangles( 1,  5,  2, 0x0,  2,  6,  0, 0x0),
    gsSP2Triangles( 6,  3,  0, 0x0,  6,  4,  3, 0x0),
    gsSP2Triangles( 5,  4,  2, 0x0,  4,  6,  2, 0x0),
    gsSPEndDisplayList(),
};

// 0x0500A160 - 0x0500A1D0
const Gfx sushi_seg5_dl_0500A160[] = {
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_DECALRGB, G_CC_DECALRGB),
    gsSPClearGeometryMode(G_LIGHTING),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, G_TX_LOADTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, G_TX_RENDERTILE, 0, G_TX_CLAMP, 5, G_TX_NOLOD, G_TX_CLAMP, 5, G_TX_NOLOD),
    gsDPSetTileSize(0, 0, 0, (32 - 1) << G_TEXTURE_IMAGE_FRAC, (32 - 1) << G_TEXTURE_IMAGE_FRAC),
    gsSPDisplayList(sushi_seg5_dl_0500A0E8),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPEndDisplayList(),
};

// 0x0500A1D0


// 0x0500A2C0


// 0x0500A3C0


// 0x0500A4A0


// 0x0500A540
static const Vtx sushi_seg5_vertex_0500A540[] = {
    {{{  -221,    231,   -200}, 0, {     0,      0}, {0xff, 0x00, 0x00, 0xff}}},
    {{{  -477,     -3,   -355}, 0, {     0,      0}, {0xff, 0x00, 0x00, 0xff}}},
    {{{  -221,   -239,   -200}, 0, {     0,      0}, {0xff, 0x00, 0x00, 0xff}}},
    {{{  -547,     -3,   -300}, 0, {     0,      0}, {0xff, 0x00, 0x00, 0xff}}},
};

// 0x0500A580 - 0x0500A748
static const Vtx sushi_seg5_dl_0500A580_vtx32_0[] = {
    {{{   201,   -199,     90}, 0, {   528,    170}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   201,   -188,   -187}, 0, {   528,    676}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   201,      4,   -257}, 0, {   528,    804}, {0xff, 0xff, 0xff, 0xff}}},
    {{{  -221,   -239,   -200}, 0, {   358,    700}, {0xff, 0xff, 0xff, 0xff}}},
    {{{  -221,     -3,   -300}, 0, {   358,    882}, {0xff, 0xff, 0xff, 0xff}}},
    {{{  -477,     -3,   -355}, 0, {   256,    982}, {0xff, 0xff, 0xff, 0xff}}},
    {{{  -221,    231,   -200}, 0, {   358,    700}, {0xff, 0xff, 0xff, 0xff}}},
    {{{  -221,   -239,    121}, 0, {   358,    112}, {0xff, 0xff, 0xff, 0xff}}},
    {{{  -645,   -214,    120}, 0, {   188,    114}, {0xff, 0xff, 0xff, 0xff}}},
    {{{  -645,   -166,   -144}, 0, {   188,    598}, {0xff, 0xff, 0xff, 0xff}}},
    {{{  -547,     -3,   -300}, 0, {   228,    882}, {0xff, 0xff, 0xff, 0xff}}},
    {{{  -645,    159,   -144}, 0, {   190,    598}, {0xff, 0xff, 0xff, 0xff}}},
    {{{  -645,    207,    120}, 0, {   190,    114}, {0xff, 0xff, 0xff, 0xff}}},
    {{{  -863,     -3,   -194}, 0, {   102,    688}, {0xff, 0xff, 0xff, 0xff}}},
    {{{ -1181,     -3,     26}, 0, {   -24,    286}, {0xff, 0xff, 0xff, 0xff}}},
    {{{ -1174,     57,     95}, 0, {   -22,    160}, {0xff, 0xff, 0xff, 0xff}}},
    {{{ -1174,    -64,     95}, 0, {   -22,    160}, {0xff, 0xff, 0xff, 0xff}}},
    {{{  -645,     -3,    185}, 0, {   190,     -4}, {0xff, 0xff, 0xff, 0xff}}},
    {{{  -221,    231,    121}, 0, {   358,    112}, {0xff, 0xff, 0xff, 0xff}}},
    {{{  -221,     -4,    184}, 0, {   358,     -4}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   201,    208,     90}, 0, {   528,    170}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   201,    197,   -187}, 0, {   528,    676}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   201,      4,    161}, 0, {   528,     40}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   226,   -558,   -378}, 0, {   538,   1024}, {0xff, 0xff, 0xff, 0xff}}},
    {{{  -206,   -223,   -158}, 0, {   364,    624}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    30,   -123,   -199}, 0, {   460,    698}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   100,   -175,   -123}, 0, {   486,    558}, {0xff, 0xff, 0xff, 0xff}}},
    {{{  -191,     -4,    172}, 0, {   370,     18}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   266,      4,    552}, 0, {   554,   -674}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   181,     73,    120}, 0, {   520,    114}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   183,    -67,    120}, 0, {   520,    114}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   106,    176,   -124}, 0, {   490,    562}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    32,    124,   -201}, 0, {   460,    700}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   212,    569,   -380}, 0, {   532,   1026}, {0xff, 0xff, 0xff, 0xff}}},
    {{{  -208,    212,   -160}, 0, {   364,    626}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   212,    569,   -380}, 0, {   452,    396}, {0xff, 0xff, 0xff, 0xff}}},
    {{{  -208,    212,   -160}, 0, {   340,    640}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   106,    176,   -124}, 0, {   460,    652}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   226,   -558,   -378}, 0, {   728,    330}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   100,   -175,   -123}, 0, {   524,    612}, {0xff, 0xff, 0xff, 0xff}}},
    {{{  -206,   -223,   -158}, 0, {   728,    548}, {0xff, 0xff, 0xff, 0xff}}},
};

const Gfx sushi_seg5_dl_0500A580[] = {
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, sushi_seg5_texture_05008ED0),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 32 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSPVertex(&sushi_seg5_dl_0500A580_vtx32_0[0], 31, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  1,  3,  2, 0x0),
    gsSP2Triangles( 1,  0,  3, 0x0,  4,  2,  3, 0x0),
    gsSP2Triangles( 5,  4,  3, 0x0,  6,  4,  5, 0x0),
    gsSP2Triangles( 2,  4,  6, 0x0,  7,  3,  0, 0x0),
    gsSP2Triangles( 3,  7,  8, 0x0,  8,  9,  3, 0x0),
    gsSP2Triangles( 9, 10,  3, 0x0,  6, 10, 11, 0x0),
    gsSP2Triangles( 6, 11, 12, 0x0, 11, 10, 13, 0x0),
    gsSP2Triangles( 9, 13, 10, 0x0, 13, 14, 11, 0x0),
    gsSP2Triangles(13,  9, 14, 0x0, 12, 11, 15, 0x0),
    gsSP2Triangles(14, 15, 11, 0x0, 14,  9, 16, 0x0),
    gsSP2Triangles(16,  9,  8, 0x0, 14, 16, 15, 0x0),
    gsSP2Triangles( 8, 17, 16, 0x0, 16, 17, 15, 0x0),
    gsSP2Triangles(15, 17, 12, 0x0,  7, 17,  8, 0x0),
    gsSP2Triangles(17, 18, 12, 0x0, 12, 18,  6, 0x0),
    gsSP2Triangles(17,  7, 19, 0x0, 19, 18, 17, 0x0),
    gsSP2Triangles(20,  6, 18, 0x0,  2,  6, 21, 0x0),
    gsSP2Triangles( 6, 20, 21, 0x0,  2, 21, 20, 0x0),
    gsSP2Triangles(20, 22,  2, 0x0, 22, 20, 18, 0x0),
    gsSP2Triangles(18, 19, 22, 0x0,  7, 22, 19, 0x0),
    gsSP2Triangles( 7,  0, 22, 0x0,  2, 22,  0, 0x0),
    gsSP2Triangles(23, 24, 25, 0x0, 25, 26, 23, 0x0),
    gsSP2Triangles(27, 28, 29, 0x0, 27, 30, 28, 0x0),
    gsSP1Triangle(29, 28, 30, 0x0),
    gsSPVertex(&sushi_seg5_dl_0500A580_vtx32_0[31], 10, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  2,  1,  3, 0x0),
    gsSP2Triangles( 4,  5,  6, 0x0,  7,  8,  9, 0x0),
    gsSPEndDisplayList(),
};

// 0x0500A748 - 0x0500A768
const Gfx sushi_seg5_dl_0500A748[] = {
    gsSPVertex(sushi_seg5_vertex_0500A540, 4, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  0,  2,  3, 0x0),
    gsSPEndDisplayList(),
};

// 0x0500A768 - 0x0500A7E0
const Gfx sushi_seg5_dl_0500A768[] = {
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_DECALRGB, G_CC_DECALRGB),
    gsSPClearGeometryMode(G_LIGHTING),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, G_TX_LOADTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, G_TX_RENDERTILE, 0, G_TX_CLAMP, 5, G_TX_NOLOD, G_TX_CLAMP, 5, G_TX_NOLOD),
    gsDPSetTileSize(0, 0, 0, (32 - 1) << G_TEXTURE_IMAGE_FRAC, (32 - 1) << G_TEXTURE_IMAGE_FRAC),
    gsSPDisplayList(sushi_seg5_dl_0500A580),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
    gsSPDisplayList(sushi_seg5_dl_0500A748),
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPEndDisplayList(),
};

// 0x0500A7E0
static const Vtx sushi_seg5_vertex_0500A7E0[] = {
    {{{  -645,    221,    120}, 0, {   -24,  -2137}, {0xff, 0xff, 0xff, 0xff}}},
    {{{  -221,    246,    121}, 0, {  1672,   -830}, {0xff, 0xff, 0xff, 0xff}}},
    {{{  -221,    246,   -200}, 0, {   678,    847}, {0xff, 0xff, 0xff, 0xff}}},
    {{{  -645,    173,   -144}, 0, {  -906,   -738}, {0xff, 0xff, 0xff, 0xff}}},
    {{{  -645,   -220,    120}, 0, {   -24,  -2137}, {0xff, 0xff, 0xff, 0xff}}},
    {{{  -645,   -172,   -144}, 0, {  -906,   -738}, {0xff, 0xff, 0xff, 0xff}}},
    {{{  -221,   -245,   -200}, 0, {   678,    847}, {0xff, 0xff, 0xff, 0xff}}},
    {{{  -221,   -245,    121}, 0, {  1672,   -830}, {0xff, 0xff, 0xff, 0xff}}},
};

// 0x0500A860 - 0x0500A8A8
const Gfx sushi_seg5_dl_0500A860[] = {
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, sushi_seg5_texture_050096D0),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 16 * 32 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSPVertex(sushi_seg5_vertex_0500A7E0, 8, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  2,  3,  0, 0x0),
    gsSP2Triangles( 4,  5,  6, 0x0,  6,  7,  4, 0x0),
    gsSPEndDisplayList(),
};

// 0x0500A8A8 - 0x0500A918
const Gfx sushi_seg5_dl_0500A8A8[] = {
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_DECALRGBA, G_CC_DECALRGBA),
    gsSPClearGeometryMode(G_LIGHTING),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, G_TX_LOADTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, G_TX_RENDERTILE, 0, G_TX_CLAMP, 4, G_TX_NOLOD, G_TX_CLAMP, 5, G_TX_NOLOD),
    gsDPSetTileSize(0, 0, 0, (32 - 1) << G_TEXTURE_IMAGE_FRAC, (16 - 1) << G_TEXTURE_IMAGE_FRAC),
    gsSPDisplayList(sushi_seg5_dl_0500A860),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPEndDisplayList(),
};

// 0x0500A918
static const Vtx sushi_seg5_vertex_0500A918[] = {
    {{{  -505,      0,   -304}, 0, {   -32,      2}, {0xff, 0xff, 0xff, 0xff}}},
    {{{  -221,    231,   -200}, 0, {  1592,    -14}, {0xff, 0xff, 0xff, 0xff}}},
    {{{  -477,     -3,   -355}, 0, {     0,    166}, {0xff, 0xff, 0xff, 0xff}}},
    {{{  -221,   -239,   -200}, 0, {  1592,    -14}, {0xff, 0xff, 0xff, 0xff}}},
};

// 0x0500A958 - 0x0500A990
const Gfx sushi_seg5_dl_0500A958[] = {
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, sushi_seg5_texture_05009AD0),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 8 * 8 - 1, CALC_DXT(8, G_IM_SIZ_16b_BYTES)),
    gsSPVertex(sushi_seg5_vertex_0500A918, 4, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  3,  0,  2, 0x0),
    gsSPEndDisplayList(),
};

// 0x0500A990 - 0x0500AA00
const Gfx sushi_seg5_dl_0500A990[] = {
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_DECALRGBA, G_CC_DECALRGBA),
    gsSPClearGeometryMode(G_LIGHTING | G_CULL_BACK),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, G_TX_LOADTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 2, 0, G_TX_RENDERTILE, 0, G_TX_CLAMP, 3, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, 3, G_TX_NOLOD),
    gsDPSetTileSize(0, 0, 0, (8 - 1) << G_TEXTURE_IMAGE_FRAC, (8 - 1) << G_TEXTURE_IMAGE_FRAC),
    gsSPDisplayList(sushi_seg5_dl_0500A958),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
    gsSPSetGeometryMode(G_LIGHTING | G_CULL_BACK),
    gsSPEndDisplayList(),
};
