// 0x070079D0 - 0x07007AB0


// 0x07007AB0 - 0x07007B80


// 0x07007B80 - 0x07007C20
static const Vtx thi_seg7_dl_07007B80_vtx32_0[] = {
    {{{  -101,   2458,    102}, 0, {   376,    990}, {0xff, 0xff, 0xff, 0x80}}},
    {{{   102,   3072,    102}, 0, {     0,    744}, {0xff, 0xff, 0xff, 0x80}}},
    {{{   102,   2458,    102}, 0, {     0,    990}, {0xff, 0xff, 0xff, 0x80}}},
    {{{  -101,   3072,    102}, 0, {   376,    744}, {0xff, 0xff, 0xff, 0x80}}},
    {{{   614,   1024,   2048}, 0, {   274,    662}, {0xff, 0xff, 0xff, 0x80}}},
    {{{   614,   1229,   2048}, 0, {    70,    662}, {0xff, 0xff, 0xff, 0x80}}},
    {{{   717,   1331,   1229}, 0, {     0,    990}, {0xff, 0xff, 0xff, 0x80}}},
    {{{   717,    922,   1229}, 0, {   376,    990}, {0xff, 0xff, 0xff, 0x80}}},
    {{{   614,   1229,   2048}, 0, {    70,    716}, {0xff, 0xff, 0xff, 0x80}}},
    {{{   410,   1229,   2048}, 0, {   274,    716}, {0xff, 0xff, 0xff, 0x80}}},
    {{{   307,   1331,   1229}, 0, {   376,    990}, {0xff, 0xff, 0xff, 0x80}}},
    {{{   307,   1331,   1229}, 0, {     0,    990}, {0xff, 0xff, 0xff, 0x80}}},
    {{{   410,   1024,   2048}, 0, {   274,    662}, {0xff, 0xff, 0xff, 0x80}}},
    {{{   307,    922,   1229}, 0, {   376,    990}, {0xff, 0xff, 0xff, 0x80}}},
    {{{   410,   1229,   2048}, 0, {    70,    662}, {0xff, 0xff, 0xff, 0x80}}},
    {{{   102,   2458,    102}, 0, {   376,    990}, {0xff, 0xff, 0xff, 0x80}}},
    {{{   102,   3072,   -101}, 0, {    70,    762}, {0xff, 0xff, 0xff, 0x80}}},
    {{{   102,   2458,   -101}, 0, {     0,    990}, {0xff, 0xff, 0xff, 0x80}}},
    {{{   102,   3072,    102}, 0, {   274,    762}, {0xff, 0xff, 0xff, 0x80}}},
    {{{   102,   3072,   -101}, 0, {     0,    744}, {0xff, 0xff, 0xff, 0x80}}},
    {{{  -101,   3072,   -101}, 0, {   376,    744}, {0xff, 0xff, 0xff, 0x80}}},
    {{{  -101,   2458,   -101}, 0, {   376,    990}, {0xff, 0xff, 0xff, 0x80}}},
    {{{  -101,   3072,   -101}, 0, {   274,    762}, {0xff, 0xff, 0xff, 0x80}}},
    {{{  -101,   3072,    102}, 0, {    70,    762}, {0xff, 0xff, 0xff, 0x80}}},
    {{{  -101,   2458,    102}, 0, {     0,    990}, {0xff, 0xff, 0xff, 0x80}}},
};

static const Gfx thi_seg7_dl_07007B80[] = {
    gsDPSetTextureImage(G_IM_FMT_IA, G_IM_SIZ_16b, 1, grass_0900B800),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 32 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSPVertex(&thi_seg7_dl_07007B80_vtx32_0[0], 25, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  0,  3,  1, 0x0),
    gsSP2Triangles( 4,  5,  6, 0x0,  7,  4,  6, 0x0),
    gsSP2Triangles( 6,  8,  9, 0x0,  6,  9, 10, 0x0),
    gsSP2Triangles(11, 12, 13, 0x0, 11, 14, 12, 0x0),
    gsSP2Triangles(15, 16, 17, 0x0, 15, 18, 16, 0x0),
    gsSP2Triangles(17, 19, 20, 0x0, 17, 20, 21, 0x0),
    gsSP2Triangles(21, 22, 23, 0x0, 21, 23, 24, 0x0),
    gsSPEndDisplayList(),
};

// 0x07007C20 - 0x07007C90
const Gfx thi_seg7_dl_07007C20[] = {
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_MODULATEIA, G_CC_MODULATEIA),
    gsSPClearGeometryMode(G_LIGHTING | G_CULL_BACK),
    gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_16b, 0, 0, G_TX_LOADTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_16b, 8, 0, G_TX_RENDERTILE, 0, G_TX_CLAMP, 5, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, 5, G_TX_NOLOD),
    gsDPSetTileSize(0, 0, 0, (32 - 1) << G_TEXTURE_IMAGE_FRAC, (32 - 1) << G_TEXTURE_IMAGE_FRAC),
    gsSPDisplayList(thi_seg7_dl_07007B80),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
    gsSPSetGeometryMode(G_LIGHTING | G_CULL_BACK),
    gsSPEndDisplayList(),
};
