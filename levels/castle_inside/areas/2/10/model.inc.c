// 0x07051370 - 0x07051460


// 0x07051460 - 0x07051560


// 0x07051560 - 0x070515B0


// 0x070515B0 - 0x07051678
static const Vtx inside_castle_seg7_dl_070515B0_vtx32_0[] = {
    {{{  1384,   2765,   7197}, 0, {  2012,    990}, {0xff, 0xff, 0xff, 0xff}}},
    {{{  1384,   2867,   6992}, 0, {     0,      0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{  1384,   2765,   6992}, 0, {     0,    990}, {0xff, 0xff, 0xff, 0xff}}},
    {{{  1384,   2867,   7197}, 0, {  2012,      0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{  -760,   3174,   4792}, 0, {     0,    990}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   352,   3277,   4792}, 0, { 11210,      0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{  -760,   3277,   4792}, 0, {     0,      0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   352,   3174,   4792}, 0, { 11210,    990}, {0xff, 0xff, 0xff, 0xff}}},
    {{{  -809,   3174,   4610}, 0, {  -896,    990}, {0xff, 0xff, 0xff, 0xff}}},
    {{{  -760,   3277,   4792}, 0, {   990,      0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{  -809,   3277,   4610}, 0, {  -896,      0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{  -760,   3174,   4792}, 0, {   990,    990}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   352,   3174,   4792}, 0, {     0,    990}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   401,   3174,   4610}, 0, {  1856,    990}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   401,   3277,   4610}, 0, {  1856,      0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   352,   3277,   4792}, 0, {     0,      0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{ -1992,   2867,   6310}, 0, { -2074,      0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{ -1793,   2867,   6509}, 0, {     0,      0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{ -1793,   2765,   6509}, 0, {     0,    990}, {0xff, 0xff, 0xff, 0xff}}},
    {{{ -1793,   2867,   6603}, 0, {   990,      0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{ -1793,   2765,   6603}, 0, {   990,    990}, {0xff, 0xff, 0xff, 0xff}}},
    {{{ -1992,   2765,   6310}, 0, { -2074,    990}, {0xff, 0xff, 0xff, 0xff}}},
    {{{ -1793,   2765,   6992}, 0, {   990,    990}, {0xff, 0xff, 0xff, 0xff}}},
    {{{ -1793,   2867,   7197}, 0, { -1052,      0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{ -1793,   2765,   7197}, 0, { -1052,    990}, {0xff, 0xff, 0xff, 0xff}}},
    {{{ -1793,   2867,   6992}, 0, {   990,      0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{  1384,   2765,   6603}, 0, {   990,    990}, {0xff, 0xff, 0xff, 0xff}}},
    {{{  1384,   2867,   6603}, 0, {   990,      0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{  1384,   2867,   6509}, 0, {     0,      0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{  1384,   2765,   6509}, 0, {     0,    990}, {0xff, 0xff, 0xff, 0xff}}},
    {{{  1583,   2765,   6310}, 0, { -2074,    990}, {0xff, 0xff, 0xff, 0xff}}},
    {{{  1583,   2867,   6310}, 0, { -2074,      0}, {0xff, 0xff, 0xff, 0xff}}},
};

static const Gfx inside_castle_seg7_dl_070515B0[] = {
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, inside_09008800),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 32 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSPVertex(&inside_castle_seg7_dl_070515B0_vtx32_0[0], 32, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  0,  3,  1, 0x0),
    gsSP2Triangles( 4,  5,  6, 0x0,  4,  7,  5, 0x0),
    gsSP2Triangles( 8,  9, 10, 0x0,  8, 11,  9, 0x0),
    gsSP2Triangles(12, 13, 14, 0x0, 12, 14, 15, 0x0),
    gsSP2Triangles(16, 17, 18, 0x0, 18, 17, 19, 0x0),
    gsSP2Triangles(18, 19, 20, 0x0, 16, 18, 21, 0x0),
    gsSP2Triangles(22, 23, 24, 0x0, 22, 25, 23, 0x0),
    gsSP2Triangles(26, 27, 28, 0x0, 26, 28, 29, 0x0),
    gsSP2Triangles(30, 29, 28, 0x0, 30, 28, 31, 0x0),
    gsSPEndDisplayList(),
};

// 0x07051678 - 0x070516E8
const Gfx inside_castle_seg7_dl_07051678[] = {
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_DECALRGBA, G_CC_DECALRGBA),
    gsSPClearGeometryMode(G_LIGHTING | G_CULL_BACK),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, G_TX_LOADTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, G_TX_RENDERTILE, 0, G_TX_CLAMP, 5, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, 5, G_TX_NOLOD),
    gsDPSetTileSize(0, 0, 0, (32 - 1) << G_TEXTURE_IMAGE_FRAC, (32 - 1) << G_TEXTURE_IMAGE_FRAC),
    gsSPDisplayList(inside_castle_seg7_dl_070515B0),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
    gsSPSetGeometryMode(G_LIGHTING | G_CULL_BACK),
    gsSPEndDisplayList(),
};
