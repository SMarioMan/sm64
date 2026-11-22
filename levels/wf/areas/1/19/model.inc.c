// 0x0700D0A8 - 0x0700D0C0
static const Lights1 wf_seg7_lights_0700D0A8 = gdSPDefLights1(
    0x66, 0x66, 0x66,
    0xff, 0xff, 0xff, 0x28, 0x28, 0x28
);

// 0x0700D0C0 - 0x0700D1B0


// 0x0700D1B0 - 0x0700D260


// 0x0700D260 - 0x0700D300
static const Vtx wf_seg7_dl_0700D260_vtx32_0[] = {
    {{{  -613,      0,  -2175}, 0, {-20266,   -542}, {0x81, 0x00, 0x00, 0xff}}},
    {{{  -613,   -383,      0}, 0, {-13316,    990}, {0x81, 0x00, 0x00, 0xff}}},
    {{{  -613,      0,      0}, 0, {-13316,   -542}, {0x81, 0x00, 0x00, 0xff}}},
    {{{  -613,   -383,  -2175}, 0, {-20266,    990}, {0x81, 0x00, 0x00, 0xff}}},
    {{{   154,   -383,   2432}, 0, { -3096,    990}, {0x81, 0x00, 0x00, 0xff}}},
    {{{   154,    640,   2432}, 0, { -3096,  -2002}, {0x81, 0x00, 0x00, 0xff}}},
    {{{   154,      0,      0}, 0, {-13316,   -542}, {0x81, 0x00, 0x00, 0xff}}},
    {{{   154,   -383,      0}, 0, {-13316,    990}, {0x81, 0x00, 0x00, 0xff}}},
    {{{   614,    640,   2432}, 0, {     0,      0}, {0x00, 0x7a, 0xe0, 0xff}}},
    {{{   614,      0,      0}, 0, {     0, -10252}, {0x00, 0x7a, 0xe0, 0xff}}},
    {{{   154,      0,      0}, 0, { -1870, -10252}, {0x00, 0x7a, 0xe0, 0xff}}},
    {{{   154,    640,   2432}, 0, { -1870,      0}, {0x00, 0x7a, 0xe0, 0xff}}},
    {{{   154,   -383,      0}, 0, {  3034,    990}, {0x00, 0x00, 0x7f, 0xff}}},
    {{{   154,      0,      0}, 0, {  3034,   -542}, {0x00, 0x00, 0x7f, 0xff}}},
    {{{  -613,      0,      0}, 0, {   172,   -542}, {0x00, 0x00, 0x7f, 0xff}}},
    {{{  -613,   -383,      0}, 0, {   172,    990}, {0x00, 0x00, 0x7f, 0xff}}},
    {{{   614,      0,  -2175}, 0, { -3914,   -542}, {0x00, 0x00, 0x81, 0xff}}},
    {{{  -613,   -383,  -2175}, 0, {   990,    990}, {0x00, 0x00, 0x81, 0xff}}},
    {{{  -613,      0,  -2175}, 0, {   990,   -542}, {0x00, 0x00, 0x81, 0xff}}},
    {{{   614,   -383,  -2175}, 0, { -3914,    990}, {0x00, 0x00, 0x81, 0xff}}},
    {{{  -613,      0,  -2175}, 0, { -3914,  -6164}, {0x00, 0x7f, 0x00, 0xff}}},
    {{{  -613,      0,      0}, 0, { -3914,    990}, {0x00, 0x7f, 0x00, 0xff}}},
    {{{   614,      0,      0}, 0, {   990,    990}, {0x00, 0x7f, 0x00, 0xff}}},
    {{{   614,      0,  -2175}, 0, {   990,  -6164}, {0x00, 0x7f, 0x00, 0xff}}},
};

static const Gfx wf_seg7_dl_0700D260[] = {
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, grass_09008000),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 32 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSPLight(&wf_seg7_lights_0700D0A8.l, 1),
    gsSPLight(&wf_seg7_lights_0700D0A8.a, 2),
    gsSPVertex(&wf_seg7_dl_0700D260_vtx32_0[0], 24, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  0,  3,  1, 0x0),
    gsSP2Triangles( 4,  5,  6, 0x0,  7,  4,  6, 0x0),
    gsSP2Triangles( 8,  9, 10, 0x0,  8, 10, 11, 0x0),
    gsSP2Triangles(12, 13, 14, 0x0, 15, 12, 14, 0x0),
    gsSP2Triangles(16, 17, 18, 0x0, 16, 19, 17, 0x0),
    gsSP2Triangles(20, 21, 22, 0x0, 20, 22, 23, 0x0),
    gsSPEndDisplayList(),
};

// 0x0700D300 - 0x0700D370
const Gfx wf_seg7_dl_0700D300[] = {
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_MODULATERGB, G_CC_MODULATERGB),
    gsSPClearGeometryMode(G_SHADING_SMOOTH),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, G_TX_LOADTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, G_TX_RENDERTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, 5, G_TX_NOLOD),
    gsDPSetTileSize(0, 0, 0, (32 - 1) << G_TEXTURE_IMAGE_FRAC, (32 - 1) << G_TEXTURE_IMAGE_FRAC),
    gsSPDisplayList(wf_seg7_dl_0700D260),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
    gsSPSetGeometryMode(G_SHADING_SMOOTH),
    gsSPEndDisplayList(),
};
