// 0x07002800 - 0x070028F0


// 0x070028F0 - 0x070029E0


// 0x070029E0 - 0x07002A60


// 0x07002A60 - 0x07002B60


// 0x07002B60 - 0x07002C60


// 0x07002C60 - 0x07002D60


// 0x07002D60 - 0x07002DA0


// 0x07002DA0 - 0x07002E68
static const Vtx jrb_seg7_dl_07002DA0_vtx32_0[] = {
    {{{  2813,   1536,   5598}, 0, { -2074,      0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{  2813,   1331,   5598}, 0, { -2074,    990}, {0xff, 0xff, 0xff, 0xff}}},
    {{{  4284,   1331,   7069}, 0, {  8308,    990}, {0xff, 0xff, 0xff, 0xff}}},
    {{{  4284,   1536,   7069}, 0, {  8308,      0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{  2668,   1536,   6322}, 0, {     0,      0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{  2668,   1331,   6322}, 0, {     0,    990}, {0xff, 0xff, 0xff, 0xff}}},
    {{{  3611,   1331,   7264}, 0, {  6620,    990}, {0xff, 0xff, 0xff, 0xff}}},
    {{{  3611,   1536,   7264}, 0, {  6620,      0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{  3861,   1331,   7182}, 0, {  7214,    990}, {0xff, 0xff, 0xff, 0xff}}},
    {{{  2835,   1331,   6155}, 0, {     0,    990}, {0xff, 0xff, 0xff, 0xff}}},
    {{{  2835,   1536,   6155}, 0, {     0,      0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{  3861,   1536,   7182}, 0, {  7214,      0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{  2980,   1536,   5431}, 0, {     0,      0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{  2980,   1331,   5431}, 0, {     0,    990}, {0xff, 0xff, 0xff, 0xff}}},
    {{{  2813,   1331,   5598}, 0, {   990,    990}, {0xff, 0xff, 0xff, 0xff}}},
    {{{  2813,   1536,   5598}, 0, {   990,      0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{  3392,   1536,   5018}, 0, {     0,      0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{  4909,   1331,   6535}, 0, { 10670,    990}, {0xff, 0xff, 0xff, 0xff}}},
    {{{  4909,   1536,   6535}, 0, { 10670,      0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{  3392,   1331,   5018}, 0, {     0,    990}, {0xff, 0xff, 0xff, 0xff}}},
    {{{  4460,   1331,   6912}, 0, {  8372,    990}, {0xff, 0xff, 0xff, 0xff}}},
    {{{  2980,   1536,   5431}, 0, { -2074,      0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{  4460,   1536,   6912}, 0, {  8372,      0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{  2980,   1331,   5431}, 0, { -2074,    990}, {0xff, 0xff, 0xff, 0xff}}},
    {{{  3559,   1536,   4852}, 0, { -5140,      0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{  3559,   1331,   4852}, 0, { -5140,    990}, {0xff, 0xff, 0xff, 0xff}}},
    {{{  3392,   1331,   5018}, 0, { -4118,    990}, {0xff, 0xff, 0xff, 0xff}}},
    {{{  3392,   1536,   5018}, 0, { -4118,      0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{  5084,   1331,   6377}, 0, { 10734,    990}, {0xff, 0xff, 0xff, 0xff}}},
    {{{  3559,   1331,   4852}, 0, {     0,    990}, {0xff, 0xff, 0xff, 0xff}}},
    {{{  5084,   1536,   6377}, 0, { 10734,      0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{  3559,   1536,   4852}, 0, {     0,      0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{  2835,   1536,   6155}, 0, {  3034,      0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{  2668,   1331,   6322}, 0, {  4056,    990}, {0xff, 0xff, 0xff, 0xff}}},
    {{{  2668,   1536,   6322}, 0, {  4056,      0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{  2835,   1331,   6155}, 0, {  3034,    990}, {0xff, 0xff, 0xff, 0xff}}},
};

static const Gfx jrb_seg7_dl_07002DA0[] = {
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, water_09006000),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 32 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSPVertex(&jrb_seg7_dl_07002DA0_vtx32_0[0], 32, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  0,  2,  3, 0x0),
    gsSP2Triangles( 4,  5,  6, 0x0,  4,  6,  7, 0x0),
    gsSP2Triangles( 8,  9, 10, 0x0,  8, 10, 11, 0x0),
    gsSP2Triangles(12, 13, 14, 0x0, 12, 14, 15, 0x0),
    gsSP2Triangles(16, 17, 18, 0x0, 16, 19, 17, 0x0),
    gsSP2Triangles(20, 21, 22, 0x0, 20, 23, 21, 0x0),
    gsSP2Triangles(24, 25, 26, 0x0, 24, 26, 27, 0x0),
    gsSP2Triangles(28, 29, 30, 0x0, 29, 31, 30, 0x0),
    gsSPVertex(&jrb_seg7_dl_07002DA0_vtx32_0[32], 4, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  0,  3,  1, 0x0),
    gsSPEndDisplayList(),
};

// 0x07002E68 - 0x07002FD0
static const Vtx jrb_seg7_dl_07002E68_vtx32_0[] = {
    {{{ -3991,   1126,    -97}, 0, { 19524,    956}, {0xff, 0xff, 0xff, 0xff}}},
    {{{ -3443,   1024,    319}, 0, { 19132,    990}, {0xff, 0xff, 0xff, 0xff}}},
    {{{  -705,   1024,   2401}, 0, { 17252,    990}, {0xff, 0xff, 0xff, 0xff}}},
    {{{ -3991,   4096,    -97}, 0, { 19524,      0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{ -5762,   4096,  -1125}, 0, { 20512,      0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{  -705,   4096,   2401}, 0, { 17252,      0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{  1136,   1024,   2287}, 0, { 16276,    990}, {0xff, 0xff, 0xff, 0xff}}},
    {{{  1136,   4096,   2287}, 0, { 16276,      0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{  2350,   1024,   1215}, 0, { 15468,    990}, {0xff, 0xff, 0xff, 0xff}}},
    {{{  2350,   4096,   1215}, 0, { 15468,      0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{  3121,   1024,   -112}, 0, { 14632,    990}, {0xff, 0xff, 0xff, 0xff}}},
    {{{  3121,   4096,   -112}, 0, { 14632,      0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{  5221,   1024,   -669}, 0, { 13320,    990}, {0xff, 0xff, 0xff, 0xff}}},
    {{{  5221,   4096,   -669}, 0, { 13320,      0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{  7435,   1024,    615}, 0, { 12176,    990}, {0xff, 0xff, 0xff, 0xff}}},
    {{{  7435,   4096,    615}, 0, { 12176,      0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{  7992,   1024,   2714}, 0, { 11144,    990}, {0xff, 0xff, 0xff, 0xff}}},
    {{{  7992,   4096,   2714}, 0, { 11144,      0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{  6707,   1024,   4928}, 0, {  9936,    990}, {0xff, 0xff, 0xff, 0xff}}},
    {{{  6707,   4096,   4928}, 0, {  9936,      0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{  4279,   1024,   7071}, 0, {  8148,    990}, {0xff, 0xff, 0xff, 0xff}}},
    {{{  4279,   4096,   7071}, 0, {  8148,      0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{  1480,   1024,   7814}, 0, {  6336,    990}, {0xff, 0xff, 0xff, 0xff}}},
    {{{  1480,   4096,   7814}, 0, {  6336,      0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{  -805,   1024,   7672}, 0, {  4776,    990}, {0xff, 0xff, 0xff, 0xff}}},
    {{{  -805,   4096,   7672}, 0, {  4776,      0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{ -4161,   4096,   6315}, 0, {  2440,      0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{ -4161,   1024,   6315}, 0, {  2440,    990}, {0xff, 0xff, 0xff, 0xff}}},
    {{{ -6561,   4096,   4330}, 0, {   856,      0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{ -6561,   1126,   4330}, 0, {   856,    956}, {0xff, 0xff, 0xff, 0xff}}},
    {{{ -5762,   1126,  -1125}, 0, { 20512,    956}, {0xff, 0xff, 0xff, 0xff}}},
    {{{ -6980,   4096,   -712}, 0, { 20948,      0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{ -7494,   4096,    173}, 0, { 21392,      0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{ -6980,   1126,   -712}, 0, { 20948,    956}, {0xff, 0xff, 0xff, 0xff}}},
    {{{ -6980,   4096,   -712}, 0, { 20948,      0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{ -5762,   1126,  -1125}, 0, { 20512,    956}, {0xff, 0xff, 0xff, 0xff}}},
    {{{ -7494,   1126,    173}, 0, { 21392,    956}, {0xff, 0xff, 0xff, 0xff}}},
    {{{ -7818,   4096,   2416}, 0, { 22384,      0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{ -7818,   1126,   2416}, 0, { 22384,    956}, {0xff, 0xff, 0xff, 0xff}}},
    {{{ -6561,   4096,   4330}, 0, { 23340,      0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{ -6561,   1126,   4330}, 0, { 23340,    956}, {0xff, 0xff, 0xff, 0xff}}},
};

static const Gfx jrb_seg7_dl_07002E68[] = {
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, water_0900B800),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 64 * 32 - 1, CALC_DXT(64, G_IM_SIZ_16b_BYTES)),
    gsSPVertex(&jrb_seg7_dl_07002E68_vtx32_0[0], 32, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  3,  0,  2, 0x0),
    gsSP2Triangles( 4,  0,  3, 0x0,  3,  2,  5, 0x0),
    gsSP2Triangles( 5,  2,  6, 0x0,  5,  6,  7, 0x0),
    gsSP2Triangles( 7,  6,  8, 0x0,  7,  8,  9, 0x0),
    gsSP2Triangles( 9,  8, 10, 0x0,  9, 10, 11, 0x0),
    gsSP2Triangles(11, 10, 12, 0x0, 11, 12, 13, 0x0),
    gsSP2Triangles(13, 12, 14, 0x0, 13, 14, 15, 0x0),
    gsSP2Triangles(15, 14, 16, 0x0, 15, 16, 17, 0x0),
    gsSP2Triangles(17, 16, 18, 0x0, 17, 18, 19, 0x0),
    gsSP2Triangles(19, 18, 20, 0x0, 19, 20, 21, 0x0),
    gsSP2Triangles(21, 20, 22, 0x0, 21, 22, 23, 0x0),
    gsSP2Triangles(23, 22, 24, 0x0, 23, 24, 25, 0x0),
    gsSP2Triangles(24, 26, 25, 0x0, 24, 27, 26, 0x0),
    gsSP2Triangles(26, 27, 28, 0x0, 27, 29, 28, 0x0),
    gsSP2Triangles( 4, 30,  0, 0x0, 31, 30,  4, 0x0),
    gsSPVertex(&jrb_seg7_dl_07002E68_vtx32_0[32], 9, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  2,  1,  3, 0x0),
    gsSP2Triangles( 0,  4,  1, 0x0,  5,  4,  0, 0x0),
    gsSP2Triangles( 5,  6,  4, 0x0,  7,  6,  5, 0x0),
    gsSP1Triangle( 7,  8,  6, 0x0),
    gsSPEndDisplayList(),
};

// 0x07002FD0 - 0x070030A8
const Gfx jrb_seg7_dl_07002FD0[] = {
    gsDPPipeSync(),
    gsDPSetCycleType(G_CYC_2CYCLE),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetDepthSource(G_ZS_PIXEL),
    gsDPSetFogColor(15, 65, 100, 255),
    gsSPFogFactor(0x0724, 0xF9DC), // This isn't gsSPFogPosition since there is no valid min/max pair that corresponds to 0x0724F9DC
    gsSPSetGeometryMode(G_FOG),
    gsDPSetCombineMode(G_CC_DECALRGBA, G_CC_PASS2),
    gsSPClearGeometryMode(G_LIGHTING),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, G_TX_LOADTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, G_TX_RENDERTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, 5, G_TX_NOLOD),
    gsDPSetTileSize(0, 0, 0, (32 - 1) << G_TEXTURE_IMAGE_FRAC, (32 - 1) << G_TEXTURE_IMAGE_FRAC),
    gsSPDisplayList(jrb_seg7_dl_07002DA0),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 0, G_TX_RENDERTILE, 0, G_TX_CLAMP, 5, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, 6, G_TX_NOLOD),
    gsDPSetTileSize(0, 0, 0, (64 - 1) << G_TEXTURE_IMAGE_FRAC, (32 - 1) << G_TEXTURE_IMAGE_FRAC),
    gsSPDisplayList(jrb_seg7_dl_07002E68),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
    gsDPSetCycleType(G_CYC_1CYCLE),
    gsDPSetRenderMode(G_RM_AA_ZB_TEX_EDGE, G_RM_NOOP2),
    gsSPClearGeometryMode(G_FOG),
    gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPEndDisplayList(),
};
