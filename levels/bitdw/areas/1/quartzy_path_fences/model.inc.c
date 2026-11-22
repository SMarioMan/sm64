// 0x07004390 - 0x07004480


// 0x07004480 - 0x07004530


// 0x07004530 - 0x070045C0
static const Vtx bitdw_seg7_dl_07004530_vtx32_0[] = {
    {{{   979,    307,  -1022}, 0, {  7430,    990}, {0xaf, 0xce, 0x16, 0xff}}},
    {{{   253,    255,  -1018}, 0, {   240,    -14}, {0xaf, 0xce, 0x16, 0xff}}},
    {{{   258,    153,  -1027}, 0, {    70,    990}, {0xaf, 0xce, 0x16, 0xff}}},
    {{{   979,    410,  -1023}, 0, {  7644,    -10}, {0xaf, 0xce, 0x16, 0xff}}},
    {{{    49,    205,  -1632}, 0, {   172,    990}, {0xaf, 0xce, 0x16, 0xff}}},
    {{{   979,    307,  -1637}, 0, {  9510,    990}, {0xaf, 0xce, 0x16, 0xff}}},
    {{{   979,    410,  -1637}, 0, {  9510,      0}, {0xaf, 0xce, 0x16, 0xff}}},
    {{{    49,    307,  -1632}, 0, {   238,    -30}, {0xaf, 0xce, 0x16, 0xff}}},
    {{{    49,    205,  -1632}, 0, { 20784,    990}, {0xaf, 0xce, 0x16, 0xff}}},
    {{{    49,    307,  -1632}, 0, { 20784,      0}, {0xaf, 0xce, 0x16, 0xff}}},
    {{{  -874,    102,    214}, 0, {   172,      0}, {0xaf, 0xce, 0x16, 0xff}}},
    {{{  -869,      0,    205}, 0, {   172,    990}, {0xaf, 0xce, 0x16, 0xff}}},
    {{{  -874,    102,    214}, 0, { 17900,     -6}, {0xaf, 0xce, 0x16, 0xff}}},
    {{{   -44,   -413,   1770}, 0, {  -438,      0}, {0xaf, 0xce, 0x16, 0xff}}},
    {{{   -50,   -511,   1741}, 0, {  -438,    990}, {0xaf, 0xce, 0x16, 0xff}}},
    {{{  -869,      0,    205}, 0, { 17670,    990}, {0xaf, 0xce, 0x16, 0xff}}},
    {{{    33,   -135,    544}, 0, {  -438,      0}, {0xaf, 0xce, 0x16, 0xff}}},
    {{{  -255,      0,      0}, 0, {  5772,    990}, {0xaf, 0xce, 0x16, 0xff}}},
    {{{  -258,    102,      8}, 0, {  6092,     20}, {0xaf, 0xce, 0x16, 0xff}}},
    {{{    21,   -230,    508}, 0, {  -438,    990}, {0xaf, 0xce, 0x16, 0xff}}},
    {{{   258,    153,  -1027}, 0, { 11336,    990}, {0xaf, 0xce, 0x16, 0xff}}},
    {{{   253,    255,  -1018}, 0, { 11370,      0}, {0xaf, 0xce, 0x16, 0xff}}},
    {{{  -258,    102,      8}, 0, {  -186,    -30}, {0xaf, 0xce, 0x16, 0xff}}},
    {{{  -255,      0,      0}, 0, {  -234,    990}, {0xaf, 0xce, 0x16, 0xff}}},
};

static const Gfx bitdw_seg7_dl_07004530[] = {
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, sky_09005000),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 32 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSPVertex(&bitdw_seg7_dl_07004530_vtx32_0[0], 24, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  0,  3,  1, 0x0),
    gsSP2Triangles( 4,  5,  6, 0x0,  6,  7,  4, 0x0),
    gsSP2Triangles( 8,  9, 10, 0x0,  8, 10, 11, 0x0),
    gsSP2Triangles(12, 13, 14, 0x0, 15, 12, 14, 0x0),
    gsSP2Triangles(16, 17, 18, 0x0, 16, 19, 17, 0x0),
    gsSP2Triangles(20, 21, 22, 0x0, 20, 22, 23, 0x0),
    gsSPEndDisplayList(),
};

// 0x070045C0 - 0x07004630
const Gfx bitdw_seg7_dl_070045C0[] = {
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_MODULATERGBA, G_CC_MODULATERGBA),
    gsSPClearGeometryMode(G_LIGHTING | G_CULL_BACK),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, G_TX_LOADTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, G_TX_RENDERTILE, 0, G_TX_CLAMP, 5, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, 5, G_TX_NOLOD),
    gsDPSetTileSize(0, 0, 0, (32 - 1) << G_TEXTURE_IMAGE_FRAC, (32 - 1) << G_TEXTURE_IMAGE_FRAC),
    gsSPDisplayList(bitdw_seg7_dl_07004530),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
    gsSPSetGeometryMode(G_LIGHTING | G_CULL_BACK),
    gsSPEndDisplayList(),
};
