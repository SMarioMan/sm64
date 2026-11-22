// 0x0701F288 - 0x0701F388


// 0x0701F388 - 0x0701F488


// 0x0701F488 - 0x0701F558


// 0x0701F558 - 0x0701F690
static const Vtx hmc_seg7_dl_0701F558_vtx32_0[] = {
    {{{ -4044,   -695,   5606}, 0, { -5140,    990}, {0xcd, 0xc4, 0x97, 0xff}}},
    {{{ -5580,  -5201,   5094}, 0, { -8206,   -134}, {0xcd, 0xc4, 0x97, 0xff}}},
    {{{ -4556,   -695,   5606}, 0, { -6162,    990}, {0xcd, 0xc4, 0x97, 0xff}}},
    {{{ -5580,  -5201,   5606}, 0, { -8206,   -134}, {0xcd, 0xc4, 0x97, 0xff}}},
    {{{ -4556,   -695,   6118}, 0, { -6162,    990}, {0xcd, 0xc4, 0x97, 0xff}}},
    {{{ -5068,  -5201,   5094}, 0, { -7184,   -134}, {0xcd, 0xc4, 0x97, 0xff}}},
    {{{ -5068,  -5201,   5606}, 0, { -7184,   -134}, {0xcd, 0xc4, 0x97, 0xff}}},
    {{{ -4044,   -695,   6118}, 0, { -5140,    990}, {0xcd, 0xc4, 0x97, 0xff}}},
    {{{ -5580,   -695,   4070}, 0, {     0,    990}, {0xcd, 0xc4, 0x97, 0xff}}},
    {{{ -6092,  -5201,   3558}, 0, { -1052,   -134}, {0xcd, 0xc4, 0x97, 0xff}}},
    {{{ -5068,   -695,   4070}, 0, {   990,    990}, {0xcd, 0xc4, 0x97, 0xff}}},
    {{{ -6604,  -5201,   3558}, 0, { -2074,   -134}, {0xcd, 0xc4, 0x97, 0xff}}},
    {{{ -5580,   -695,   3558}, 0, {     0,    990}, {0xcd, 0xc4, 0x97, 0xff}}},
    {{{ -6604,  -5201,   3046}, 0, { -2074,   -134}, {0xcd, 0xc4, 0x97, 0xff}}},
    {{{ -6092,  -5201,   3046}, 0, { -1052,   -134}, {0xcd, 0xc4, 0x97, 0xff}}},
    {{{ -5068,   -695,   3558}, 0, {   990,    990}, {0xcd, 0xc4, 0x97, 0xff}}},
    {{{  -972,   -695,   4070}, 0, {   990,    990}, {0xcd, 0xc4, 0x97, 0xff}}},
    {{{ -1996,  -5201,   3558}, 0, { -1052,   -134}, {0xcd, 0xc4, 0x97, 0xff}}},
    {{{ -2508,  -5201,   3558}, 0, { -2074,   -134}, {0xcd, 0xc4, 0x97, 0xff}}},
    {{{ -1484,   -695,   4070}, 0, {     0,    990}, {0xcd, 0xc4, 0x97, 0xff}}},
    {{{ -2508,  -5201,   4070}, 0, { -2074,   -134}, {0xcd, 0xc4, 0x97, 0xff}}},
    {{{ -1484,   -695,   4582}, 0, {     0,    990}, {0xcd, 0xc4, 0x97, 0xff}}},
    {{{ -1996,  -5201,   4070}, 0, { -1052,   -134}, {0xcd, 0xc4, 0x97, 0xff}}},
    {{{  -972,   -695,   4582}, 0, {   990,    990}, {0xcd, 0xc4, 0x97, 0xff}}},
    {{{ -3020,   -695,   2022}, 0, { -3096,    990}, {0xcd, 0xc4, 0x97, 0xff}}},
    {{{ -4044,  -5201,   1510}, 0, { -5140,   -134}, {0xcd, 0xc4, 0x97, 0xff}}},
    {{{ -3532,  -5201,   1510}, 0, { -4118,   -134}, {0xcd, 0xc4, 0x97, 0xff}}},
    {{{ -3020,   -695,   1510}, 0, { -3096,    990}, {0xcd, 0xc4, 0x97, 0xff}}},
    {{{ -4044,  -5201,    998}, 0, { -5140,   -134}, {0xcd, 0xc4, 0x97, 0xff}}},
    {{{ -2508,   -695,   1510}, 0, { -2074,    990}, {0xcd, 0xc4, 0x97, 0xff}}},
    {{{ -3532,  -5201,    998}, 0, { -4118,   -134}, {0xcd, 0xc4, 0x97, 0xff}}},
    {{{ -2508,   -695,   2022}, 0, { -2074,    990}, {0xcd, 0xc4, 0x97, 0xff}}},
};

static const Gfx hmc_seg7_dl_0701F558[] = {
    gsDPSetTextureImage(G_IM_FMT_IA, G_IM_SIZ_16b, 1, cave_0900B800),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 32 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSPVertex(&hmc_seg7_dl_0701F558_vtx32_0[0], 32, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  2,  1,  3, 0x0),
    gsSP2Triangles( 2,  3,  4, 0x0,  0,  5,  1, 0x0),
    gsSP2Triangles( 4,  3,  6, 0x0,  4,  6,  7, 0x0),
    gsSP2Triangles( 7,  5,  0, 0x0,  7,  6,  5, 0x0),
    gsSP2Triangles( 8,  9, 10, 0x0,  8, 11,  9, 0x0),
    gsSP2Triangles(12, 11,  8, 0x0, 12, 13, 11, 0x0),
    gsSP2Triangles(10,  9, 14, 0x0, 10, 14, 15, 0x0),
    gsSP2Triangles(15, 14, 13, 0x0, 15, 13, 12, 0x0),
    gsSP2Triangles(16, 17, 18, 0x0, 16, 18, 19, 0x0),
    gsSP2Triangles(19, 18, 20, 0x0, 19, 20, 21, 0x0),
    gsSP2Triangles(21, 20, 22, 0x0, 21, 22, 23, 0x0),
    gsSP2Triangles(23, 17, 16, 0x0, 23, 22, 17, 0x0),
    gsSP2Triangles(24, 25, 26, 0x0, 27, 25, 24, 0x0),
    gsSP2Triangles(27, 28, 25, 0x0, 29, 28, 27, 0x0),
    gsSP2Triangles(29, 30, 28, 0x0, 31, 26, 30, 0x0),
    gsSP2Triangles(24, 26, 31, 0x0, 31, 30, 29, 0x0),
    gsSPEndDisplayList(),
};

// 0x0701F690 - 0x0701F700
const Gfx hmc_seg7_dl_0701F690[] = {
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_MODULATEIA, G_CC_MODULATEIA),
    gsSPClearGeometryMode(G_LIGHTING | G_CULL_BACK),
    gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_16b, 0, 0, G_TX_LOADTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_16b, 8, 0, G_TX_RENDERTILE, 0, G_TX_CLAMP, 5, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, 5, G_TX_NOLOD),
    gsDPSetTileSize(0, 0, 0, (32 - 1) << G_TEXTURE_IMAGE_FRAC, (32 - 1) << G_TEXTURE_IMAGE_FRAC),
    gsSPDisplayList(hmc_seg7_dl_0701F558),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
    gsSPSetGeometryMode(G_LIGHTING | G_CULL_BACK),
    gsSPEndDisplayList(),
};
