// 0x0700B238 - 0x0700B328


// 0x0700B328 - 0x0700B398


// 0x0700B398 - 0x0700B418
static const Vtx bbh_seg7_dl_0700B398_vtx32_0[] = {
    {{{  2161,    819,   1638}, 0, {     0,   2012}, {0xff, 0x57, 0x00, 0x9a}}},
    {{{  2161,   1485,   1638}, 0, {     0,      0}, {0xff, 0x57, 0x00, 0x9a}}},
    {{{  2161,   1485,   1997}, 0, {   990,      0}, {0xff, 0x57, 0x00, 0x9a}}},
    {{{  2161,    819,   1997}, 0, {   990,   2012}, {0xff, 0x57, 0x00, 0x9a}}},
    {{{  2161,   1741,    307}, 0, {     0,   2012}, {0xff, 0x57, 0x00, 0x9a}}},
    {{{  2161,   2406,    307}, 0, {     0,      0}, {0xff, 0x57, 0x00, 0x9a}}},
    {{{  2161,   2406,    666}, 0, {   990,      0}, {0xff, 0x57, 0x00, 0x9a}}},
    {{{  2161,   1741,    666}, 0, {   990,   2012}, {0xff, 0x57, 0x00, 0x9a}}},
    {{{  2161,    819,    307}, 0, {     0,   2012}, {0xff, 0x57, 0x00, 0x9a}}},
    {{{  2161,   1485,    307}, 0, {     0,      0}, {0xff, 0x57, 0x00, 0x9a}}},
    {{{  2161,   1485,    666}, 0, {   990,      0}, {0xff, 0x57, 0x00, 0x9a}}},
    {{{  2161,    819,    666}, 0, {   990,   2012}, {0xff, 0x57, 0x00, 0x9a}}},
    {{{  3533,    614,   1137}, 0, {   990,      0}, {0xff, 0x57, 0x00, 0x9a}}},
    {{{  3174,      0,   1137}, 0, {     0,   2012}, {0xff, 0x57, 0x00, 0x9a}}},
    {{{  3533,      0,   1137}, 0, {   990,   2012}, {0xff, 0x57, 0x00, 0x9a}}},
    {{{  3174,    614,   1137}, 0, {     0,      0}, {0xff, 0x57, 0x00, 0x9a}}},
    {{{  2161,      0,   1280}, 0, {     0,   2012}, {0xff, 0x57, 0x00, 0x9a}}},
    {{{  2161,    666,   1638}, 0, {   990,      0}, {0xff, 0x57, 0x00, 0x9a}}},
    {{{  2161,      0,   1638}, 0, {   990,   2012}, {0xff, 0x57, 0x00, 0x9a}}},
    {{{  2161,    666,   1280}, 0, {     0,      0}, {0xff, 0x57, 0x00, 0x9a}}},
};

static const Gfx bbh_seg7_dl_0700B398[] = {
    gsDPSetTextureImage(G_IM_FMT_IA, G_IM_SIZ_16b, 1, spooky_0900B800),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 64 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSPVertex(&bbh_seg7_dl_0700B398_vtx32_0[0], 20, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  0,  2,  3, 0x0),
    gsSP2Triangles( 4,  5,  6, 0x0,  4,  6,  7, 0x0),
    gsSP2Triangles( 8,  9, 10, 0x0,  8, 10, 11, 0x0),
    gsSP2Triangles(12, 13, 14, 0x0, 12, 15, 13, 0x0),
    gsSP2Triangles(16, 17, 18, 0x0, 16, 19, 17, 0x0),
    gsSPEndDisplayList(),
};

// 0x0700B418 - 0x0700B488
const Gfx bbh_seg7_dl_0700B418[] = {
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_MODULATEIA, G_CC_MODULATEIA),
    gsSPClearGeometryMode(G_LIGHTING),
    gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_16b, 0, 0, G_TX_LOADTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_16b, 8, 0, G_TX_RENDERTILE, 0, G_TX_CLAMP, 6, G_TX_NOLOD, G_TX_CLAMP, 5, G_TX_NOLOD),
    gsDPSetTileSize(0, 0, 0, (32 - 1) << G_TEXTURE_IMAGE_FRAC, (64 - 1) << G_TEXTURE_IMAGE_FRAC),
    gsSPDisplayList(bbh_seg7_dl_0700B398),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPEndDisplayList(),
};
