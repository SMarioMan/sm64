// 0x07008BC8 - 0x07008CC8


// 0x07008CC8 - 0x07008DB8


// 0x07008DB8 - 0x07008EA8
static const Vtx bbh_seg7_dl_07008DB8_vtx32_0[] = {
    {{{  1408,      0,   1603}, 0, {     0,      0}, {0xff, 0xec, 0x40, 0x50}}},
    {{{  1408,    435,   2038}, 0, {     0,    990}, {0xff, 0xec, 0x40, 0x50}}},
    {{{  1664,    435,   2038}, 0, {   990,    990}, {0xff, 0xec, 0x40, 0x50}}},
    {{{  1408,      0,   1859}, 0, {     0,    268}, {0xff, 0xec, 0x40, 0x50}}},
    {{{  1664,      0,   1603}, 0, {   990,      0}, {0xff, 0xec, 0x40, 0x50}}},
    {{{  1408,    179,   2038}, 0, {     0,    690}, {0xff, 0xec, 0x40, 0x50}}},
    {{{  1664,    179,   2038}, 0, {   990,    690}, {0xff, 0xec, 0x40, 0x50}}},
    {{{  1664,      0,   1859}, 0, {   990,    268}, {0xff, 0xec, 0x40, 0x50}}},
    {{{  1408,   1357,   1935}, 0, {   734,      0}, {0xff, 0xec, 0x40, 0x50}}},
    {{{  1664,   1459,   2038}, 0, {   990,    990}, {0xff, 0xec, 0x40, 0x50}}},
    {{{  1664,   1357,   1935}, 0, {   734,      0}, {0xff, 0xec, 0x40, 0x50}}},
    {{{  1408,   1459,   2038}, 0, {   990,    990}, {0xff, 0xec, 0x40, 0x50}}},
    {{{  1408,   1101,   1935}, 0, {    96,      0}, {0xff, 0xec, 0x40, 0x50}}},
    {{{  1408,   1203,   2038}, 0, {   352,    990}, {0xff, 0xec, 0x40, 0x50}}},
    {{{  1664,   1203,   2038}, 0, {   352,    990}, {0xff, 0xec, 0x40, 0x50}}},
    {{{  1664,   1101,   1935}, 0, {    96,      0}, {0xff, 0xec, 0x40, 0x50}}},
    {{{   -76,    819,   1654}, 0, {   990,    172}, {0xff, 0xec, 0x40, 0x50}}},
    {{{   -76,   1203,   2038}, 0, {   990,    786}, {0xff, 0xec, 0x40, 0x50}}},
    {{{  -332,   1203,   2038}, 0, {     0,    786}, {0xff, 0xec, 0x40, 0x50}}},
    {{{  -332,    819,   1654}, 0, {     0,    172}, {0xff, 0xec, 0x40, 0x50}}},
    {{{  -332,   1459,   2038}, 0, {     0,    990}, {0xff, 0xec, 0x40, 0x50}}},
    {{{  -332,    819,   1398}, 0, {     0,      0}, {0xff, 0xec, 0x40, 0x50}}},
    {{{   -76,   1459,   2038}, 0, {   990,    990}, {0xff, 0xec, 0x40, 0x50}}},
    {{{   -76,    819,   1398}, 0, {   990,      0}, {0xff, 0xec, 0x40, 0x50}}},
};

static const Gfx bbh_seg7_dl_07008DB8[] = {
    gsDPSetTextureImage(G_IM_FMT_IA, G_IM_SIZ_16b, 1, spooky_0900B000),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 32 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSPVertex(&bbh_seg7_dl_07008DB8_vtx32_0[0], 24, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  3,  1,  0, 0x0),
    gsSP2Triangles( 0,  2,  4, 0x0,  3,  5,  1, 0x0),
    gsSP2Triangles( 4,  2,  6, 0x0,  4,  6,  7, 0x0),
    gsSP2Triangles( 7,  6,  5, 0x0,  7,  5,  3, 0x0),
    gsSP2Triangles( 8,  9, 10, 0x0,  8, 11,  9, 0x0),
    gsSP2Triangles(12, 11,  8, 0x0, 12, 13, 11, 0x0),
    gsSP2Triangles(10,  9, 14, 0x0, 10, 14, 15, 0x0),
    gsSP2Triangles(15, 14, 13, 0x0, 15, 13, 12, 0x0),
    gsSP2Triangles(16, 17, 18, 0x0, 16, 18, 19, 0x0),
    gsSP2Triangles(19, 18, 20, 0x0, 19, 20, 21, 0x0),
    gsSP2Triangles(21, 20, 22, 0x0, 21, 22, 23, 0x0),
    gsSP2Triangles(23, 17, 16, 0x0, 23, 22, 17, 0x0),
    gsSPEndDisplayList(),
};

// 0x07008EA8 - 0x07008F18
const Gfx bbh_seg7_dl_07008EA8[] = {
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_MODULATEIA, G_CC_MODULATEIA),
    gsSPClearGeometryMode(G_LIGHTING | G_CULL_BACK),
    gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_16b, 0, 0, G_TX_LOADTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_16b, 8, 0, G_TX_RENDERTILE, 0, G_TX_CLAMP, 5, G_TX_NOLOD, G_TX_CLAMP, 5, G_TX_NOLOD),
    gsDPSetTileSize(0, 0, 0, (32 - 1) << G_TEXTURE_IMAGE_FRAC, (32 - 1) << G_TEXTURE_IMAGE_FRAC),
    gsSPDisplayList(bbh_seg7_dl_07008DB8),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
    gsSPSetGeometryMode(G_LIGHTING | G_CULL_BACK),
    gsSPEndDisplayList(),
};
