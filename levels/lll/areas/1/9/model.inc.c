// 0x07015E90 - 0x07015F10
static const Vtx lll_seg7_vertex_07015E90[] = {
    {{{  -255,    307,  -1023}, 0, { -2074,  -1054}, {0x00, 0x7f, 0x00, 0xff}}},
    {{{  -383,    307,    896}, 0, { -2586,   6608}, {0x00, 0x7f, 0x00, 0xff}}},
    {{{  -255,    307,   1024}, 0, { -2074,   7120}, {0x00, 0x7f, 0x00, 0xff}}},
    {{{   256,    307,   1024}, 0, {     0,   7120}, {0x00, 0x7f, 0x00, 0xff}}},
    {{{  -383,    307,   -895}, 0, { -2584,   -542}, {0x00, 0x7f, 0x00, 0xff}}},
    {{{   384,    307,    896}, 0, {   478,   6608}, {0x00, 0x7f, 0x00, 0xff}}},
    {{{   384,    307,   -895}, 0, {   480,   -542}, {0x00, 0x7f, 0x00, 0xff}}},
    {{{   256,    307,  -1023}, 0, {     0,  -1054}, {0x00, 0x7f, 0x00, 0xff}}},
};

// 0x07015F10 - 0x07016000


// 0x07016000 - 0x070160F0


// 0x070160F0 - 0x07016130


// 0x07016130 - 0x07016198
static const Gfx lll_seg7_dl_07016130[] = {
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, fire_09005000),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 32 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSPLight(&lll_seg7_lights_0700FC00.l, 1),
    gsSPLight(&lll_seg7_lights_0700FC00.a, 2),
    gsSPVertex(lll_seg7_vertex_07015E90, 8, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  0,  2,  3, 0x0),
    gsSP2Triangles( 0,  4,  1, 0x0,  0,  5,  6, 0x0),
    gsSP2Triangles( 0,  6,  7, 0x0,  0,  3,  5, 0x0),
    gsSPEndDisplayList(),
};

// 0x07016198 - 0x07016250
static const Vtx lll_seg7_dl_07016198_vtx32_0[] = {
    {{{  -383,      0,   -895}, 0, {     0,    990}, {0xa7, 0x00, 0xa7, 0xff}}},
    {{{  -255,    307,  -1023}, 0, { -1234,      0}, {0xa7, 0x00, 0xa7, 0xff}}},
    {{{  -255,      0,  -1023}, 0, { -1234,    990}, {0xa7, 0x00, 0xa7, 0xff}}},
    {{{  -383,    307,   -895}, 0, {     0,      0}, {0xa7, 0x00, 0xa7, 0xff}}},
    {{{   256,      0,   1024}, 0, {   650,    990}, {0x00, 0x00, 0x7f, 0xff}}},
    {{{   256,    307,   1024}, 0, {   650,      0}, {0x00, 0x00, 0x7f, 0xff}}},
    {{{  -255,    307,   1024}, 0, { -1052,      0}, {0x00, 0x00, 0x7f, 0xff}}},
    {{{  -255,      0,   1024}, 0, { -1052,    990}, {0x00, 0x00, 0x7f, 0xff}}},
    {{{  -255,      0,   1024}, 0, {   990,    990}, {0xa7, 0x00, 0x59, 0xff}}},
    {{{  -383,    307,    896}, 0, {  -212,      0}, {0xa7, 0x00, 0x59, 0xff}}},
    {{{  -383,      0,    896}, 0, {  -212,    990}, {0xa7, 0x00, 0x59, 0xff}}},
    {{{  -255,    307,   1024}, 0, {   990,      0}, {0xa7, 0x00, 0x59, 0xff}}},
    {{{  -383,      0,    896}, 0, {   990,    990}, {0x81, 0x00, 0x00, 0xff}}},
    {{{  -383,    307,    896}, 0, {   990,      0}, {0x81, 0x00, 0x00, 0xff}}},
    {{{  -383,    307,   -895}, 0, { -8376,      0}, {0x81, 0x00, 0x00, 0xff}}},
    {{{  -383,      0,   -895}, 0, { -8376,    990}, {0x81, 0x00, 0x00, 0xff}}},
    {{{   384,      0,   -895}, 0, {  9336,    990}, {0x7f, 0x00, 0x00, 0xff}}},
    {{{   384,    307,    896}, 0, {     0,      0}, {0x7f, 0x00, 0x00, 0xff}}},
    {{{   384,      0,    896}, 0, {     0,    990}, {0x7f, 0x00, 0x00, 0xff}}},
    {{{   384,    307,   -895}, 0, {  9336,      0}, {0x7f, 0x00, 0x00, 0xff}}},
    {{{  -255,      0,  -1023}, 0, {  1672,    990}, {0x00, 0x00, 0x81, 0xff}}},
    {{{   256,    307,  -1023}, 0, {     0,      0}, {0x00, 0x00, 0x81, 0xff}}},
    {{{   256,      0,  -1023}, 0, {     0,    990}, {0x00, 0x00, 0x81, 0xff}}},
    {{{  -255,    307,  -1023}, 0, {  1672,      0}, {0x00, 0x00, 0x81, 0xff}}},
    {{{   256,      0,  -1023}, 0, {  1172,    990}, {0x59, 0x00, 0xa7, 0xff}}},
    {{{   384,    307,   -895}, 0, {     0,      0}, {0x59, 0x00, 0xa7, 0xff}}},
    {{{   384,      0,   -895}, 0, {     0,    990}, {0x59, 0x00, 0xa7, 0xff}}},
    {{{   256,    307,  -1023}, 0, {  1172,      0}, {0x59, 0x00, 0xa7, 0xff}}},
    {{{   384,      0,    896}, 0, {  1172,    990}, {0x59, 0x00, 0x59, 0xff}}},
    {{{   256,    307,   1024}, 0, {     0,      0}, {0x59, 0x00, 0x59, 0xff}}},
    {{{   256,      0,   1024}, 0, {     0,    990}, {0x59, 0x00, 0x59, 0xff}}},
    {{{   384,    307,    896}, 0, {  1172,      0}, {0x59, 0x00, 0x59, 0xff}}},
};

static const Gfx lll_seg7_dl_07016198[] = {
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, fire_09007800),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 32 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSPVertex(&lll_seg7_dl_07016198_vtx32_0[0], 32, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  0,  3,  1, 0x0),
    gsSP2Triangles( 4,  5,  6, 0x0,  4,  6,  7, 0x0),
    gsSP2Triangles( 8,  9, 10, 0x0,  8, 11,  9, 0x0),
    gsSP2Triangles(12, 13, 14, 0x0, 12, 14, 15, 0x0),
    gsSP2Triangles(16, 17, 18, 0x0, 16, 19, 17, 0x0),
    gsSP2Triangles(20, 21, 22, 0x0, 20, 23, 21, 0x0),
    gsSP2Triangles(24, 25, 26, 0x0, 24, 27, 25, 0x0),
    gsSP2Triangles(28, 29, 30, 0x0, 28, 31, 29, 0x0),
    gsSPEndDisplayList(),
};

// 0x07016250 - 0x070162E0
const Gfx lll_seg7_dl_07016250[] = {
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_MODULATERGB, G_CC_MODULATERGB),
    gsSPClearGeometryMode(G_SHADING_SMOOTH),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, G_TX_LOADTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, G_TX_RENDERTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, 5, G_TX_NOLOD),
    gsDPSetTileSize(0, 0, 0, (32 - 1) << G_TEXTURE_IMAGE_FRAC, (32 - 1) << G_TEXTURE_IMAGE_FRAC),
    gsSPDisplayList(lll_seg7_dl_07016130),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, G_TX_RENDERTILE, 0, G_TX_CLAMP, 5, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, 5, G_TX_NOLOD),
    gsDPSetTileSize(0, 0, 0, (32 - 1) << G_TEXTURE_IMAGE_FRAC, (32 - 1) << G_TEXTURE_IMAGE_FRAC),
    gsSPDisplayList(lll_seg7_dl_07016198),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
    gsSPSetGeometryMode(G_SHADING_SMOOTH),
    gsSPEndDisplayList(),
};
