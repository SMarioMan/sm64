// 0x0700FD80 - 0x0700FE80


// 0x0700FE80 - 0x0700FF00


// 0x0700FF00 - 0x0700FF90
static const Vtx bitfs_seg7_dl_0700FF00_vtx32_0[] = {
    {{{   -63,      0,    307}, 0, {  9678,   -542}, {0xb2, 0x45, 0x00, 0xff}}},
    {{{   -63,    154,   -306}, 0, {  9678,    480}, {0xb2, 0x45, 0x00, 0xff}}},
    {{{   -63,      0,   -306}, 0, {  9678,    480}, {0xb2, 0x45, 0x00, 0xff}}},
    {{{   -63,    154,    307}, 0, {  9678,   -542}, {0xb2, 0x45, 0x00, 0xff}}},
    {{{    64,      0,   -306}, 0, { 10700,    480}, {0xb2, 0x45, 0x00, 0xff}}},
    {{{    64,    154,   -306}, 0, { 10700,    480}, {0xb2, 0x45, 0x00, 0xff}}},
    {{{    64,    154,    307}, 0, { 10700,   -542}, {0xb2, 0x45, 0x00, 0xff}}},
    {{{    64,      0,    307}, 0, { 10700,   -542}, {0xb2, 0x45, 0x00, 0xff}}},
    {{{    64,    154,    307}, 0, { 10700,   -542}, {0xd3, 0x53, 0x00, 0xff}}},
    {{{   -63,    154,    307}, 0, {  9678,   -542}, {0xd3, 0x53, 0x00, 0xff}}},
    {{{   -63,      0,    307}, 0, {  9678,   -542}, {0xd3, 0x53, 0x00, 0xff}}},
    {{{    64,      0,    307}, 0, { 10700,   -542}, {0xd3, 0x53, 0x00, 0xff}}},
    {{{   -63,      0,   -306}, 0, {  9678,    480}, {0xd3, 0x53, 0x00, 0xff}}},
    {{{    64,    154,   -306}, 0, { 10700,    480}, {0xd3, 0x53, 0x00, 0xff}}},
    {{{    64,      0,   -306}, 0, { 10700,    480}, {0xd3, 0x53, 0x00, 0xff}}},
    {{{   -63,    154,   -306}, 0, {  9678,    480}, {0xd3, 0x53, 0x00, 0xff}}},
    {{{    64,      0,   -306}, 0, { 10700,    480}, {0x78, 0x16, 0x01, 0xff}}},
    {{{    64,      0,    307}, 0, { 10700,   -542}, {0x78, 0x16, 0x01, 0xff}}},
    {{{   -63,      0,    307}, 0, {  9678,   -542}, {0x78, 0x16, 0x01, 0xff}}},
    {{{   -63,      0,   -306}, 0, {  9678,    480}, {0x78, 0x16, 0x01, 0xff}}},
    {{{   -63,    154,   -306}, 0, {  9678,    480}, {0xfe, 0xa5, 0x39, 0xff}}},
    {{{   -63,    154,    307}, 0, {  9678,   -542}, {0xfe, 0xa5, 0x39, 0xff}}},
    {{{    64,    154,    307}, 0, { 10700,   -542}, {0xfe, 0xa5, 0x39, 0xff}}},
    {{{    64,    154,   -306}, 0, { 10700,    480}, {0xfe, 0xa5, 0x39, 0xff}}},
};

static const Gfx bitfs_seg7_dl_0700FF00[] = {
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, bitfs_seg7_texture_07001000),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 32 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSPVertex(&bitfs_seg7_dl_0700FF00_vtx32_0[0], 24, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  0,  3,  1, 0x0),
    gsSP2Triangles( 4,  5,  6, 0x0,  4,  6,  7, 0x0),
    gsSP2Triangles( 8,  9, 10, 0x0,  8, 10, 11, 0x0),
    gsSP2Triangles(12, 13, 14, 0x0, 12, 15, 13, 0x0),
    gsSP2Triangles(16, 17, 18, 0x0, 16, 18, 19, 0x0),
    gsSP2Triangles(20, 21, 22, 0x0, 20, 22, 23, 0x0),
    gsSPEndDisplayList(),
};

// 0x0700FF90 - 0x07010000
const Gfx bitfs_seg7_dl_0700FF90[] = {
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_MODULATERGB, G_CC_MODULATERGB),
    gsSPClearGeometryMode(G_LIGHTING),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, G_TX_LOADTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, G_TX_RENDERTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, 5, G_TX_NOLOD),
    gsDPSetTileSize(0, 0, 0, (32 - 1) << G_TEXTURE_IMAGE_FRAC, (32 - 1) << G_TEXTURE_IMAGE_FRAC),
    gsSPDisplayList(bitfs_seg7_dl_0700FF00),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPEndDisplayList(),
};
