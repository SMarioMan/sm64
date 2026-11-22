// 0x07012318 - 0x07012330
static const Lights1 bbh_seg7_lights_07012318 = gdSPDefLights1(
    0x66, 0x66, 0x66,
    0xff, 0xff, 0xff, 0x28, 0x28, 0x28
);

// 0x07012330 - 0x07012430


// 0x07012430 - 0x07012470


// 0x07012470 - 0x07012510
static const Vtx bbh_seg7_dl_07012470_vtx32_0[] = {
    {{{ -1100,   1382,   1075}, 0, {   308,   2012}, {0x00, 0x00, 0x7f, 0xff}}},
    {{{ -1100,   1178,   1075}, 0, {   308,    152}, {0x00, 0x00, 0x7f, 0xff}}},
    {{{ -1074,   1152,   1075}, 0, {   138,      0}, {0x00, 0x00, 0x7f, 0xff}}},
    {{{ -1049,   1178,   1075}, 0, {     0,    152}, {0x00, 0x00, 0x7f, 0xff}}},
    {{{ -1049,   1382,   1075}, 0, {     0,   2012}, {0x00, 0x00, 0x7f, 0xff}}},
    {{{ -1100,   1126,   1075}, 0, {     0,    152}, {0x00, 0x00, 0x7f, 0xff}}},
    {{{ -1049,   1126,   1075}, 0, {   308,    152}, {0x00, 0x00, 0x7f, 0xff}}},
    {{{ -1049,    922,   1075}, 0, {   308,   2012}, {0x00, 0x00, 0x7f, 0xff}}},
    {{{ -1100,    922,   1075}, 0, {     0,   2012}, {0x00, 0x00, 0x7f, 0xff}}},
    {{{ -1279,   1178,   1075}, 0, {     0,   2012}, {0x00, 0x00, 0x7f, 0xff}}},
    {{{ -1100,   1126,   1075}, 0, {   308,    224}, {0x00, 0x00, 0x7f, 0xff}}},
    {{{ -1279,   1126,   1075}, 0, {   308,   2012}, {0x00, 0x00, 0x7f, 0xff}}},
    {{{ -1100,   1178,   1075}, 0, {     0,    224}, {0x00, 0x00, 0x7f, 0xff}}},
    {{{ -1049,   1178,   1075}, 0, {   308,    224}, {0x00, 0x00, 0x7f, 0xff}}},
    {{{ -1049,   1126,   1075}, 0, {     0,    224}, {0x00, 0x00, 0x7f, 0xff}}},
    {{{  -869,   1126,   1075}, 0, {     0,   2012}, {0x00, 0x00, 0x7f, 0xff}}},
    {{{  -869,   1178,   1075}, 0, {   308,   2012}, {0x00, 0x00, 0x7f, 0xff}}},
};

static const Gfx bbh_seg7_dl_07012470[] = {
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, bbh_seg7_texture_07000000),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 64 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSPLight(&bbh_seg7_lights_07012318.l, 1),
    gsSPLight(&bbh_seg7_lights_07012318.a, 2),
    gsSPVertex(&bbh_seg7_dl_07012470_vtx32_0[0], 17, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  0,  2,  3, 0x0),
    gsSP2Triangles( 0,  3,  4, 0x0,  5,  6,  2, 0x0),
    gsSP2Triangles( 5,  7,  6, 0x0,  5,  8,  7, 0x0),
    gsSP2Triangles( 9, 10,  2, 0x0,  9, 11, 10, 0x0),
    gsSP2Triangles( 9,  2, 12, 0x0, 13,  2, 14, 0x0),
    gsSP2Triangles(13, 14, 15, 0x0, 13, 15, 16, 0x0),
    gsSPEndDisplayList(),
};

// 0x07012510 - 0x07012580
const Gfx bbh_seg7_dl_07012510[] = {
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_MODULATERGB, G_CC_MODULATERGB),
    gsSPClearGeometryMode(G_CULL_BACK | G_SHADING_SMOOTH),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, G_TX_LOADTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, G_TX_RENDERTILE, 0, G_TX_CLAMP, 6, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, 5, G_TX_NOLOD),
    gsDPSetTileSize(0, 0, 0, (32 - 1) << G_TEXTURE_IMAGE_FRAC, (64 - 1) << G_TEXTURE_IMAGE_FRAC),
    gsSPDisplayList(bbh_seg7_dl_07012470),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
    gsSPSetGeometryMode(G_CULL_BACK | G_SHADING_SMOOTH),
    gsSPEndDisplayList(),
};
