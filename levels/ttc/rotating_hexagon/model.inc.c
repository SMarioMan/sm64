// 0x07010380 - 0x07010398
static const Lights1 ttc_seg7_lights_07010380 = gdSPDefLights1(
    0x7f, 0x7f, 0x7f,
    0xff, 0xff, 0xff, 0x28, 0x28, 0x28
);

// 0x07010398 - 0x07010488


// 0x07010488 - 0x07010538


// 0x07010538 - 0x07010638


// 0x07010638 - 0x07010738


// 0x07010738 - 0x070107D8
static const Vtx ttc_seg7_dl_07010738_vtx32_0[] = {
    {{{  -153,      0,   -265}, 0, { -2074,      0}, {0xbe, 0x4c, 0xb4, 0xff}}},
    {{{  -306,   -153,      0}, 0, {  4056,    990}, {0x9d, 0xb4, 0xed, 0xff}}},
    {{{  -306,      0,      0}, 0, {  4056,      0}, {0x9d, 0x4c, 0x13, 0xff}}},
    {{{  -153,   -153,   -265}, 0, { -2074,    990}, {0xdf, 0xb4, 0xa1, 0xff}}},
    {{{  -153,      0,    266}, 0, { -3096,      0}, {0xdf, 0x4c, 0x5f, 0xff}}},
    {{{   154,   -153,    266}, 0, {  3034,    990}, {0x21, 0xb4, 0x5f, 0xff}}},
    {{{   154,      0,    266}, 0, {  3034,      0}, {0x42, 0x4c, 0x4c, 0xff}}},
    {{{  -153,   -153,    266}, 0, { -3096,    990}, {0xbe, 0xb4, 0x4c, 0xff}}},
    {{{   154,      0,   -265}, 0, { -3096,      0}, {0x21, 0x4c, 0xa1, 0xff}}},
    {{{  -153,   -153,   -265}, 0, {  3034,    990}, {0xdf, 0xb4, 0xa1, 0xff}}},
    {{{  -153,      0,   -265}, 0, {  3034,      0}, {0xbe, 0x4c, 0xb4, 0xff}}},
    {{{   154,   -153,   -265}, 0, { -3096,    990}, {0x42, 0xb4, 0xb4, 0xff}}},
    {{{   154,      0,    266}, 0, { -2074,      0}, {0x42, 0x4c, 0x4c, 0xff}}},
    {{{   307,   -153,      0}, 0, {  4056,    990}, {0x63, 0xb4, 0x13, 0xff}}},
    {{{   307,      0,      0}, 0, {  4056,      0}, {0x63, 0x4c, 0xed, 0xff}}},
    {{{   154,   -153,    266}, 0, { -2074,    990}, {0x21, 0xb4, 0x5f, 0xff}}},
    {{{  -306,      0,      0}, 0, { -2074,      0}, {0x9d, 0x4c, 0x13, 0xff}}},
    {{{  -306,   -153,      0}, 0, { -2074,    990}, {0x9d, 0xb4, 0xed, 0xff}}},
    {{{  -153,   -153,    266}, 0, {  4056,    990}, {0xbe, 0xb4, 0x4c, 0xff}}},
    {{{  -153,      0,    266}, 0, {  4056,      0}, {0xdf, 0x4c, 0x5f, 0xff}}},
    {{{   307,      0,      0}, 0, { -3096,      0}, {0x63, 0x4c, 0xed, 0xff}}},
    {{{   154,   -153,   -265}, 0, {  3034,    990}, {0x42, 0xb4, 0xb4, 0xff}}},
    {{{   154,      0,   -265}, 0, {  3034,      0}, {0x21, 0x4c, 0xa1, 0xff}}},
    {{{   307,   -153,      0}, 0, { -3096,    990}, {0x63, 0xb4, 0x13, 0xff}}},
};

static const Gfx ttc_seg7_dl_07010738[] = {
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, machine_09003800),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 32 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSPLight(&ttc_seg7_lights_07010380.l, 1),
    gsSPLight(&ttc_seg7_lights_07010380.a, 2),
    gsSPVertex(&ttc_seg7_dl_07010738_vtx32_0[0], 24, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  0,  3,  1, 0x0),
    gsSP2Triangles( 4,  5,  6, 0x0,  4,  7,  5, 0x0),
    gsSP2Triangles( 8,  9, 10, 0x0,  8, 11,  9, 0x0),
    gsSP2Triangles(12, 13, 14, 0x0, 12, 15, 13, 0x0),
    gsSP2Triangles(16, 17, 18, 0x0, 16, 18, 19, 0x0),
    gsSP2Triangles(20, 21, 22, 0x0, 20, 23, 21, 0x0),
    gsSPEndDisplayList(),
};

// 0x070107D8 - 0x07010868
static const Vtx ttc_seg7_dl_070107D8_vtx32_0[] = {
    {{{   307,      0,      0}, 0, { -1052,    990}, {0x63, 0x4c, 0xed, 0xff}}},
    {{{   154,      0,   -265}, 0, {  2012,    990}, {0x21, 0x4c, 0xa1, 0xff}}},
    {{{     0,      0,      0}, 0, {   478,  -1052}, {0x00, 0x7f, 0x00, 0xff}}},
    {{{  -153,      0,    266}, 0, {  2012,    990}, {0xdf, 0x4c, 0x5f, 0xff}}},
    {{{  -306,      0,      0}, 0, { -1052,    990}, {0x9d, 0x4c, 0x13, 0xff}}},
    {{{  -153,      0,    266}, 0, { -1052,    990}, {0xdf, 0x4c, 0x5f, 0xff}}},
    {{{   154,      0,    266}, 0, {  2012,    990}, {0x42, 0x4c, 0x4c, 0xff}}},
    {{{     0,      0,      0}, 0, {   480,  -1056}, {0x00, 0x7f, 0x00, 0xff}}},
    {{{     0,      0,      0}, 0, {   480,  -1052}, {0x00, 0x7f, 0x00, 0xff}}},
    {{{  -153,      0,   -265}, 0, { -1052,    990}, {0xbe, 0x4c, 0xb4, 0xff}}},
    {{{  -306,      0,      0}, 0, {  2012,    990}, {0x9d, 0x4c, 0x13, 0xff}}},
    {{{   154,      0,    266}, 0, { -1052,    990}, {0x42, 0x4c, 0x4c, 0xff}}},
    {{{   307,      0,      0}, 0, {  2012,    990}, {0x63, 0x4c, 0xed, 0xff}}},
    {{{   154,      0,   -265}, 0, { -1052,    990}, {0x21, 0x4c, 0xa1, 0xff}}},
    {{{  -153,      0,   -265}, 0, {  2012,    990}, {0xbe, 0x4c, 0xb4, 0xff}}},
    {{{  -306,   -153,      0}, 0, {  2012,    990}, {0x9d, 0xb4, 0xed, 0xff}}},
    {{{  -153,   -153,   -265}, 0, { -1052,    990}, {0xdf, 0xb4, 0xa1, 0xff}}},
    {{{     0,   -153,      0}, 0, {   480,  -1052}, {0x00, 0x81, 0x00, 0xff}}},
    {{{   307,   -153,      0}, 0, {  2012,    990}, {0x63, 0xb4, 0x13, 0xff}}},
    {{{   154,   -153,    266}, 0, { -1052,    990}, {0x21, 0xb4, 0x5f, 0xff}}},
    {{{  -153,   -153,   -265}, 0, {  2012,    990}, {0xdf, 0xb4, 0xa1, 0xff}}},
    {{{   154,   -153,   -265}, 0, { -1052,    990}, {0x42, 0xb4, 0xb4, 0xff}}},
    {{{     0,   -153,      0}, 0, {   478,  -1052}, {0x00, 0x81, 0x00, 0xff}}},
    {{{   154,   -153,   -265}, 0, {  2012,    990}, {0x42, 0xb4, 0xb4, 0xff}}},
    {{{   307,   -153,      0}, 0, { -1052,    990}, {0x63, 0xb4, 0x13, 0xff}}},
    {{{  -306,   -153,      0}, 0, { -1052,    990}, {0x9d, 0xb4, 0xed, 0xff}}},
    {{{  -153,   -153,    266}, 0, {  2012,    990}, {0xbe, 0xb4, 0x4c, 0xff}}},
    {{{     0,   -153,      0}, 0, {   480,  -1056}, {0x00, 0x81, 0x00, 0xff}}},
    {{{   154,   -153,    266}, 0, {  2012,    990}, {0x21, 0xb4, 0x5f, 0xff}}},
    {{{  -153,   -153,    266}, 0, { -1052,    990}, {0xbe, 0xb4, 0x4c, 0xff}}},
};

static const Gfx ttc_seg7_dl_070107D8[] = {
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, machine_09001000),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 32 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSPVertex(&ttc_seg7_dl_070107D8_vtx32_0[0], 30, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  3,  2,  4, 0x0),
    gsSP2Triangles( 5,  6,  7, 0x0,  8,  9, 10, 0x0),
    gsSP2Triangles(11, 12,  8, 0x0, 13, 14,  8, 0x0),
    gsSP2Triangles(15, 16, 17, 0x0, 17, 18, 19, 0x0),
    gsSP2Triangles(17, 20, 21, 0x0, 22, 23, 24, 0x0),
    gsSP2Triangles(25, 22, 26, 0x0, 27, 28, 29, 0x0),
    gsSPEndDisplayList(),
};

// 0x07010868 - 0x07010930
const Gfx ttc_seg7_dl_07010868[] = {
    gsDPPipeSync(),
    gsDPSetCycleType(G_CYC_2CYCLE),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetDepthSource(G_ZS_PIXEL),
    gsDPSetFogColor(200, 255, 255, 255),
    gsSPFogPosition(900, 1000),
    gsSPSetGeometryMode(G_FOG),
    gsDPSetCombineMode(G_CC_MODULATERGB, G_CC_PASS2),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, G_TX_LOADTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, G_TX_RENDERTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, 5, G_TX_NOLOD),
    gsDPSetTileSize(0, 0, 0, (32 - 1) << G_TEXTURE_IMAGE_FRAC, (32 - 1) << G_TEXTURE_IMAGE_FRAC),
    gsSPDisplayList(ttc_seg7_dl_07010738),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, G_TX_RENDERTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, G_TX_NOLOD, G_TX_CLAMP, 5, G_TX_NOLOD),
    gsDPSetTileSize(0, 0, 0, (32 - 1) << G_TEXTURE_IMAGE_FRAC, (32 - 1) << G_TEXTURE_IMAGE_FRAC),
    gsSPDisplayList(ttc_seg7_dl_070107D8),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
    gsDPSetCycleType(G_CYC_1CYCLE),
    gsDPSetRenderMode(G_RM_AA_ZB_OPA_SURF, G_RM_NOOP2),
    gsSPClearGeometryMode(G_FOG),
    gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
    gsSPEndDisplayList(),
};
