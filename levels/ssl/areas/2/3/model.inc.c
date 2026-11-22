// 0x0701F9D8 - 0x0701FAD8


// 0x0701FAD8 - 0x0701FBD8


// 0x0701FBD8 - 0x0701FC18


// 0x0701FC18 - 0x0701FCE0
static const Vtx ssl_seg7_dl_0701FC18_vtx32_0[] = {
    {{{  1024,   1485,   2621}, 0, {-10762,   2520}, {0x00, 0x00, 0x00, 0xff}}},
    {{{  1024,   1485,   3113}, 0, {-10762,  -3610}, {0x00, 0x00, 0x00, 0xff}}},
    {{{  1352,   1298,   3113}, 0, {-14850,  -3610}, {0x00, 0x00, 0x00, 0xff}}},
    {{{   870,   1485,   2621}, 0, { -8844,   2522}, {0x00, 0x00, 0x00, 0xff}}},
    {{{  1352,   1298,   2621}, 0, {-14850,   2520}, {0x00, 0x00, 0x00, 0xff}}},
    {{{   870,   1485,   3113}, 0, { -8844,  -3610}, {0x00, 0x00, 0x00, 0xff}}},
    {{{  2970,    640,  -3378}, 0, {  2524,  -4120}, {0x00, 0x00, 0x00, 0xff}}},
    {{{  2355,    640,  -3378}, 0, { -5140,  -4120}, {0x00, 0x00, 0x00, 0xff}}},
    {{{  2355,    640,  -3276}, 0, { -5140,  -2842}, {0x00, 0x00, 0x00, 0xff}}},
    {{{  2970,    640,  -3276}, 0, {  2524,  -2842}, {0x00, 0x00, 0x00, 0xff}}},
    {{{  3174,    640,  -2559}, 0, {  5078,   6098}, {0x00, 0x00, 0x00, 0xff}}},
    {{{  3174,    640,  -3173}, 0, {  5078,  -1566}, {0x00, 0x00, 0x00, 0xff}}},
    {{{  3072,    640,  -3173}, 0, {  3800,  -1566}, {0x00, 0x00, 0x00, 0xff}}},
    {{{  3072,    640,  -2559}, 0, {  3800,   6098}, {0x00, 0x00, 0x00, 0xff}}},
    {{{   819,   1536,   2621}, 0, { -8206,   2522}, {0x00, 0x00, 0x00, 0xff}}},
    {{{   870,   1536,   3113}, 0, { -8844,  -3610}, {0x00, 0x00, 0x00, 0xff}}},
    {{{   870,   1536,   2621}, 0, { -8844,   2522}, {0x00, 0x00, 0x00, 0xff}}},
    {{{   819,   1536,   3113}, 0, { -8206,  -3610}, {0x00, 0x00, 0x00, 0xff}}},
    {{{ -1023,   1485,   2621}, 0, { 14788,   2522}, {0x00, 0x00, 0x00, 0xff}}},
    {{{ -1023,   1485,   3113}, 0, { 14788,  -3610}, {0x00, 0x00, 0x00, 0xff}}},
    {{{  -869,   1485,   3113}, 0, { 12870,  -3610}, {0x00, 0x00, 0x00, 0xff}}},
    {{{ -1351,   1298,   2621}, 0, { 18876,   2522}, {0x00, 0x00, 0x00, 0xff}}},
    {{{ -1351,   1298,   3113}, 0, { 18876,  -3610}, {0x00, 0x00, 0x00, 0xff}}},
    {{{  -869,   1485,   2621}, 0, { 12870,   2522}, {0x00, 0x00, 0x00, 0xff}}},
    {{{   819,   1510,   3113}, 0, { -8206,  -3610}, {0x00, 0x00, 0x00, 0xff}}},
    {{{  -818,   1306,   2621}, 0, { 12232,   2522}, {0x00, 0x00, 0x00, 0xff}}},
    {{{  -818,   1510,   3113}, 0, { 12232,  -3610}, {0x00, 0x00, 0x00, 0xff}}},
    {{{   819,   1306,   2621}, 0, { -8206,   2522}, {0x00, 0x00, 0x00, 0xff}}},
    {{{  -869,   1536,   2621}, 0, { 12870,   2522}, {0x00, 0x00, 0x00, 0xff}}},
    {{{  -869,   1536,   3113}, 0, { 12870,  -3610}, {0x00, 0x00, 0x00, 0xff}}},
    {{{  -818,   1536,   3113}, 0, { 12232,  -3610}, {0x00, 0x00, 0x00, 0xff}}},
    {{{  -818,   1536,   2621}, 0, { 12232,   2522}, {0x00, 0x00, 0x00, 0xff}}},
};

static const Gfx ssl_seg7_dl_0701FC18[] = {
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, generic_09000000),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 32 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSPVertex(&ssl_seg7_dl_0701FC18_vtx32_0[0], 32, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  1,  0,  3, 0x0),
    gsSP2Triangles( 0,  2,  4, 0x0,  1,  3,  5, 0x0),
    gsSP2Triangles( 6,  7,  8, 0x0,  6,  8,  9, 0x0),
    gsSP2Triangles(10, 11, 12, 0x0, 10, 12, 13, 0x0),
    gsSP2Triangles(14, 15, 16, 0x0, 14, 17, 15, 0x0),
    gsSP2Triangles(18, 19, 20, 0x0, 19, 18, 21, 0x0),
    gsSP2Triangles(19, 21, 22, 0x0, 18, 20, 23, 0x0),
    gsSP2Triangles(24, 25, 26, 0x0, 24, 27, 25, 0x0),
    gsSP2Triangles(28, 29, 30, 0x0, 28, 30, 31, 0x0),
    gsSPEndDisplayList(),
};

// 0x0701FCE0 - 0x0701FD60
const Gfx ssl_seg7_dl_0701FCE0[] = {
    gsDPPipeSync(),
    gsDPSetEnvColor(255, 255, 255, 100),
    gsDPSetCombineMode(G_CC_MODULATERGBFADEA, G_CC_MODULATERGBFADEA),
    gsSPClearGeometryMode(G_LIGHTING),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, G_TX_LOADTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, G_TX_RENDERTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, 5, G_TX_NOLOD),
    gsDPSetTileSize(0, 0, 0, (32 - 1) << G_TEXTURE_IMAGE_FRAC, (32 - 1) << G_TEXTURE_IMAGE_FRAC),
    gsSPDisplayList(ssl_seg7_dl_0701FC18),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
    gsSPSetGeometryMode(G_LIGHTING),
    gsDPSetEnvColor(255, 255, 255, 255),
    gsSPEndDisplayList(),
};
