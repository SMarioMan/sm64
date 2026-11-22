// 0x07015098 - 0x07015198


// 0x07015198 - 0x07015298


// 0x07015298 - 0x07015398
static const Vtx bbh_seg7_dl_07015298_vtx32_0[] = {
    {{{  -306,    819,  -1125}, 0, { -2074,  -1564}, {0xff, 0xff, 0xff, 0xff}}},
    {{{  -204,    819,  -1330}, 0, { -1564,  -2588}, {0xff, 0xff, 0xff, 0xff}}},
    {{{  -306,    819,  -1535}, 0, { -2074,  -3610}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   819,    819,  -1330}, 0, {  3546,  -2588}, {0xff, 0xff, 0xff, 0xff}}},
    {{{  1024,    819,  -1535}, 0, {  4568,  -3610}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   819,    819,   -306}, 0, {  3546,   2520}, {0xff, 0xff, 0xff, 0xff}}},
    {{{  1024,    819,   -101}, 0, {  4568,   3542}, {0xff, 0xff, 0xff, 0xff}}},
    {{{  -204,    819,  -1023}, 0, { -1564,  -1054}, {0xff, 0xff, 0xff, 0xff}}},
    {{{  -716,    819,  -1125}, 0, { -4118,  -1564}, {0xff, 0xff, 0xff, 0xff}}},
    {{{  -306,    819,   -921}, 0, { -2074,   -542}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   102,    819,   -921}, 0, {     0,   -544}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   614,    819,  -1023}, 0, {  2524,  -1054}, {0xff, 0xff, 0xff, 0xff}}},
    {{{  -511,    819,   -511}, 0, { -3096,   1500}, {0xff, 0xff, 0xff, 0xff}}},
    {{{  -716,    819,   -101}, 0, { -4118,   3544}, {0xff, 0xff, 0xff, 0xff}}},
    {{{  -306,    819,   -613}, 0, { -2074,    990}, {0xff, 0xff, 0xff, 0xff}}},
    {{{  -204,    819,   -511}, 0, { -1564,   1500}, {0xff, 0xff, 0xff, 0xff}}},
    {{{  -511,    819,   -204}, 0, { -3096,   3032}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   512,    819,   -613}, 0, {  2012,    990}, {0xff, 0xff, 0xff, 0xff}}},
    {{{  -204,    819,   -204}, 0, { -1564,   3032}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   512,    819,   -306}, 0, {  2012,   2520}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   614,    819,   -818}, 0, {  2524,      0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   102,    819,   -613}, 0, {     0,    990}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   819,    819,   -613}, 0, {  3546,    990}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   819,    819,   -818}, 0, {  3546,      0}, {0xff, 0xff, 0xff, 0xff}}},
};

static const Gfx bbh_seg7_dl_07015298[] = {
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, spooky_09000000),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 32 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSPVertex(&bbh_seg7_dl_07015298_vtx32_0[0], 24, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  2,  1,  3, 0x0),
    gsSP2Triangles( 2,  3,  4, 0x0,  4,  3,  5, 0x0),
    gsSP2Triangles( 4,  5,  6, 0x0,  0,  7,  1, 0x0),
    gsSP2Triangles( 8,  7,  0, 0x0,  8,  9,  7, 0x0),
    gsSP2Triangles( 7,  9, 10, 0x0, 11,  7, 10, 0x0),
    gsSP2Triangles( 8, 12,  9, 0x0,  8, 13, 12, 0x0),
    gsSP2Triangles(12, 14,  9, 0x0, 12, 15, 14, 0x0),
    gsSP2Triangles(13, 16, 12, 0x0, 15, 17, 14, 0x0),
    gsSP2Triangles(13,  6, 18, 0x0, 13, 18, 16, 0x0),
    gsSP2Triangles(15, 18, 19, 0x0,  6, 19, 18, 0x0),
    gsSP2Triangles( 6,  5, 19, 0x0, 15, 19, 17, 0x0),
    gsSP2Triangles(20, 11, 10, 0x0, 21, 20, 10, 0x0),
    gsSP2Triangles(21, 22, 20, 0x0, 22, 23, 20, 0x0),
    gsSPEndDisplayList(),
};

// 0x07015398 - 0x07015408
const Gfx bbh_seg7_dl_07015398[] = {
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_DECALRGBA, G_CC_DECALRGBA),
    gsSPClearGeometryMode(G_LIGHTING | G_CULL_BACK),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, G_TX_LOADTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, G_TX_RENDERTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, 5, G_TX_NOLOD),
    gsDPSetTileSize(0, 0, 0, (32 - 1) << G_TEXTURE_IMAGE_FRAC, (32 - 1) << G_TEXTURE_IMAGE_FRAC),
    gsSPDisplayList(bbh_seg7_dl_07015298),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
    gsSPSetGeometryMode(G_LIGHTING | G_CULL_BACK),
    gsSPEndDisplayList(),
};
