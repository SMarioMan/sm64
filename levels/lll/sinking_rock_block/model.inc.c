// 0x0701A670 - 0x0701A688
static const Lights1 lll_seg7_lights_0701A670 = gdSPDefLights1(
    0x3f, 0x3f, 0x3f,
    0xfe, 0xff, 0xff, 0x28, 0x28, 0x28
);

// 0x0701A688 - 0x0701A778


// 0x0701A778 - 0x0701A7E8


// 0x0701A7E8 - 0x0701A878
static const Vtx lll_seg7_dl_0701A7E8_vtx32_0[] = {
    {{{  -127,      0,    256}, 0, {  1910,   3134}, {0x81, 0x00, 0x00, 0xff}}},
    {{{  -127,    154,    256}, 0, {  2524,   2520}, {0x81, 0x00, 0x00, 0xff}}},
    {{{  -127,    154,   -255}, 0, {   480,    478}, {0x81, 0x00, 0x00, 0xff}}},
    {{{  -127,      0,   -255}, 0, {  -132,   1090}, {0x81, 0x00, 0x00, 0xff}}},
    {{{   128,    154,    256}, 0, {  -542,   3542}, {0x00, 0x7f, 0x00, 0xff}}},
    {{{   128,    154,   -255}, 0, {  1502,   1498}, {0x00, 0x7f, 0x00, 0xff}}},
    {{{  -127,    154,   -255}, 0, {   478,    478}, {0x00, 0x7f, 0x00, 0xff}}},
    {{{  -127,    154,    256}, 0, { -1564,   2520}, {0x00, 0x7f, 0x00, 0xff}}},
    {{{   128,      0,   -255}, 0, {  1910,   3134}, {0x7f, 0x00, 0x00, 0xff}}},
    {{{   128,    154,   -255}, 0, {  2522,   2520}, {0x7f, 0x00, 0x00, 0xff}}},
    {{{   128,    154,    256}, 0, {   478,    478}, {0x7f, 0x00, 0x00, 0xff}}},
    {{{   128,      0,    256}, 0, {  -132,   1090}, {0x7f, 0x00, 0x00, 0xff}}},
    {{{  -127,      0,   -255}, 0, {   888,   2112}, {0x00, 0x00, 0x81, 0xff}}},
    {{{   128,    154,   -255}, 0, {   480,    480}, {0x00, 0x00, 0x81, 0xff}}},
    {{{   128,      0,   -255}, 0, {  -132,   1090}, {0x00, 0x00, 0x81, 0xff}}},
    {{{  -127,    154,   -255}, 0, {  1502,   1500}, {0x00, 0x00, 0x81, 0xff}}},
    {{{   128,      0,    256}, 0, {   888,   2112}, {0x00, 0x00, 0x7f, 0xff}}},
    {{{  -127,    154,    256}, 0, {   478,    478}, {0x00, 0x00, 0x7f, 0xff}}},
    {{{  -127,      0,    256}, 0, {  -132,   1090}, {0x00, 0x00, 0x7f, 0xff}}},
    {{{   128,    154,    256}, 0, {  1500,   1498}, {0x00, 0x00, 0x7f, 0xff}}},
};

static const Gfx lll_seg7_dl_0701A7E8[] = {
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, fire_09002000),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 32 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSPLight(&lll_seg7_lights_0701A670.l, 1),
    gsSPLight(&lll_seg7_lights_0701A670.a, 2),
    gsSPVertex(&lll_seg7_dl_0701A7E8_vtx32_0[0], 20, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  0,  2,  3, 0x0),
    gsSP2Triangles( 4,  5,  6, 0x0,  4,  6,  7, 0x0),
    gsSP2Triangles( 8,  9, 10, 0x0,  8, 10, 11, 0x0),
    gsSP2Triangles(12, 13, 14, 0x0, 12, 15, 13, 0x0),
    gsSP2Triangles(16, 17, 18, 0x0, 16, 19, 17, 0x0),
    gsSPEndDisplayList(),
};

// 0x0701A878 - 0x0701A8E8
const Gfx lll_seg7_dl_0701A878[] = {
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_MODULATERGB, G_CC_MODULATERGB),
    gsSPClearGeometryMode(G_SHADING_SMOOTH),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, G_TX_LOADTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, G_TX_RENDERTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, 5, G_TX_NOLOD),
    gsDPSetTileSize(0, 0, 0, (32 - 1) << G_TEXTURE_IMAGE_FRAC, (32 - 1) << G_TEXTURE_IMAGE_FRAC),
    gsSPDisplayList(lll_seg7_dl_0701A7E8),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
    gsSPSetGeometryMode(G_SHADING_SMOOTH),
    gsSPEndDisplayList(),
};
