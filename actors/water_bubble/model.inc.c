// Water Bubble

// 0x0500FE68
static const Lights1 water_bubble_seg5_lights_0500FE68 = gdSPDefLights1(
    0xbf, 0xbf, 0xbf,
    0xff, 0xff, 0xff, 0x28, 0x28, 0x28
);

// 0x0500FE80
ALIGNED8 static const Texture water_bubble_seg5_texture_0500FE80[] = {
#include "actors/water_bubble/water_bubble.rgba16.inc.c"
};

// 0x05010680


// 0x05010780


// 0x05010870


// 0x05010950


// 0x05010A50


// 0x05010B50


// 0x05010C50


// 0x05010D30 - 0x05011000
static const Vtx water_bubble_seg5_dl_05010D30_vtx32_0[] = {
    {{{   -20,    -64,    -33}, 0, {     0,      0}, {0xdd, 0x95, 0xc7, 0xff}}},
    {{{     0,    -76,      0}, 0, {     0,      0}, {0x00, 0x82, 0x00, 0xff}}},
    {{{   -44,    -61,      0}, 0, {     0,      0}, {0xb6, 0x9a, 0x00, 0xff}}},
    {{{   -20,    -64,     34}, 0, {     0,      0}, {0xdf, 0x98, 0x3f, 0xff}}},
    {{{   -55,    -39,     34}, 0, {     0,      0}, {0xa5, 0xbd, 0x37, 0xff}}},
    {{{    21,    -64,     34}, 0, {     0,      0}, {0x22, 0x94, 0x38, 0xff}}},
    {{{    45,    -61,      0}, 0, {     0,      0}, {0x4a, 0x9a, 0x00, 0xff}}},
    {{{    56,    -39,     34}, 0, {     0,      0}, {0x58, 0xbf, 0x3f, 0xff}}},
    {{{    73,    -23,      0}, 0, {     0,      0}, {0x78, 0xd9, 0x00, 0xff}}},
    {{{    56,    -39,    -33}, 0, {     0,      0}, {0x5b, 0xbd, 0xc9, 0xff}}},
    {{{    69,      0,     34}, 0, {     0,      0}, {0x72, 0x00, 0x37, 0xff}}},
    {{{    21,    -64,    -33}, 0, {     0,      0}, {0x21, 0x98, 0xc0, 0xff}}},
    {{{    33,    -23,    -64}, 0, {     0,      0}, {0x37, 0xd7, 0x96, 0xff}}},
    {{{   -11,    -37,    -64}, 0, {     0,      0}, {0xeb, 0xbe, 0x96, 0xff}}},
    {{{   -55,    -39,    -33}, 0, {     0,      0}, {0xa8, 0xbf, 0xc0, 0xff}}},
    {{{   -39,      0,    -64}, 0, {     0,      0}, {0xbc, 0x00, 0x96, 0xff}}},
    {{{   -68,      0,    -33}, 0, {     0,      0}, {0x8f, 0x00, 0xc8, 0xff}}},
    {{{     0,      0,    -76}, 0, {     0,      0}, {0x00, 0x00, 0x82, 0xff}}},
    {{{    33,     24,    -64}, 0, {     0,      0}, {0x37, 0x29, 0x96, 0xff}}},
    {{{    69,      0,    -33}, 0, {     0,      0}, {0x6d, 0x00, 0xc1, 0xff}}},
    {{{    56,     40,    -33}, 0, {     0,      0}, {0x5b, 0x43, 0xc8, 0xff}}},
    {{{   -11,     38,    -64}, 0, {     0,      0}, {0xeb, 0x41, 0x96, 0xff}}},
    {{{    21,     65,    -33}, 0, {     0,      0}, {0x21, 0x68, 0xc0, 0xff}}},
    {{{   -20,     65,    -33}, 0, {     0,      0}, {0xdd, 0x6b, 0xc7, 0xff}}},
    {{{   -55,     40,    -33}, 0, {     0,      0}, {0xa8, 0x40, 0xc0, 0xff}}},
    {{{    12,    -37,     65}, 0, {     0,      0}, {0x14, 0xbe, 0x6a, 0xff}}},
    {{{    40,      0,     65}, 0, {     0,      0}, {0x44, 0x00, 0x6b, 0xff}}},
    {{{     0,      0,     77}, 0, {     0,      0}, {0x00, 0x00, 0x7e, 0xff}}},
    {{{   -72,    -23,      0}, 0, {     0,      0}, {0x88, 0xd9, 0x00, 0xff}}},
    {{{   -72,     24,      0}, 0, {     0,      0}, {0x88, 0x27, 0x00, 0xff}}},
    {{{   -68,      0,     34}, 0, {     0,      0}, {0x92, 0x00, 0x3f, 0xff}}},
    {{{   -55,     40,     34}, 0, {     0,      0}, {0xa4, 0x43, 0x37, 0xff}}},
    {{{    45,     62,      0}, 0, {     0,      0}, {0x4a, 0x66, 0x00, 0xff}}},
    {{{    56,     40,     34}, 0, {     0,      0}, {0x58, 0x40, 0x40, 0xff}}},
    {{{    73,     24,      0}, 0, {     0,      0}, {0x78, 0x27, 0x00, 0xff}}},
    {{{    69,      0,     34}, 0, {     0,      0}, {0x72, 0x00, 0x37, 0xff}}},
    {{{    21,     65,     34}, 0, {     0,      0}, {0x22, 0x6c, 0x38, 0xff}}},
    {{{    56,     40,    -33}, 0, {     0,      0}, {0x5b, 0x43, 0xc8, 0xff}}},
    {{{     0,     77,      0}, 0, {     0,      0}, {0x00, 0x7e, 0x00, 0xff}}},
    {{{   -20,     65,     34}, 0, {     0,      0}, {0xdf, 0x68, 0x3f, 0xff}}},
    {{{   -44,     62,      0}, 0, {     0,      0}, {0xb6, 0x66, 0x00, 0xff}}},
    {{{   -20,     65,    -33}, 0, {     0,      0}, {0xdd, 0x6b, 0xc7, 0xff}}},
    {{{   -55,     40,     34}, 0, {     0,      0}, {0xa4, 0x43, 0x37, 0xff}}},
    {{{   -72,     24,      0}, 0, {     0,      0}, {0x88, 0x27, 0x00, 0xff}}},
    {{{   -55,     40,    -33}, 0, {     0,      0}, {0xa8, 0x40, 0xc0, 0xff}}},
    {{{    21,     65,    -33}, 0, {     0,      0}, {0x21, 0x68, 0xc0, 0xff}}},
    {{{    12,     38,     65}, 0, {     0,      0}, {0x15, 0x41, 0x6a, 0xff}}},
    {{{   -32,     24,     65}, 0, {     0,      0}, {0xc8, 0x29, 0x6a, 0xff}}},
    {{{   -68,      0,     34}, 0, {     0,      0}, {0x92, 0x00, 0x3f, 0xff}}},
    {{{   -32,    -23,     65}, 0, {     0,      0}, {0xc8, 0xd7, 0x6a, 0xff}}},
    {{{   -55,    -39,     34}, 0, {     0,      0}, {0xa5, 0xbd, 0x37, 0xff}}},
    {{{   -20,    -64,     34}, 0, {     0,      0}, {0xdf, 0x98, 0x3f, 0xff}}},
    {{{    12,    -37,     65}, 0, {     0,      0}, {0x14, 0xbe, 0x6a, 0xff}}},
    {{{     0,      0,     77}, 0, {     0,      0}, {0x00, 0x00, 0x7e, 0xff}}},
    {{{    69,      0,    -33}, 0, {     0,      0}, {0x6d, 0x00, 0xc1, 0xff}}},
    {{{    73,    -23,      0}, 0, {     0,      0}, {0x78, 0xd9, 0x00, 0xff}}},
    {{{    40,      0,     65}, 0, {     0,      0}, {0x44, 0x00, 0x6b, 0xff}}},
};

const Gfx water_bubble_seg5_dl_05010D30[] = {
    gsSPLight(&water_bubble_seg5_lights_0500FE68.l, 1),
    gsSPLight(&water_bubble_seg5_lights_0500FE68.a, 2),
    gsSPVertex(&water_bubble_seg5_dl_05010D30_vtx32_0[0], 32, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  1,  3,  2, 0x0),
    gsSP2Triangles( 2,  3,  4, 0x0,  1,  5,  3, 0x0),
    gsSP2Triangles( 5,  1,  6, 0x0,  6,  7,  5, 0x0),
    gsSP2Triangles( 8,  7,  6, 0x0,  9,  8,  6, 0x0),
    gsSP2Triangles( 8, 10,  7, 0x0,  1, 11,  6, 0x0),
    gsSP2Triangles( 6, 11,  9, 0x0,  1,  0, 11, 0x0),
    gsSP2Triangles(12,  9, 11, 0x0, 12, 11, 13, 0x0),
    gsSP2Triangles(13, 11,  0, 0x0, 13,  0, 14, 0x0),
    gsSP2Triangles( 2, 14,  0, 0x0, 13, 14, 15, 0x0),
    gsSP2Triangles(15, 14, 16, 0x0, 17, 13, 15, 0x0),
    gsSP2Triangles(17, 12, 13, 0x0, 17, 18, 12, 0x0),
    gsSP2Triangles(18, 19, 12, 0x0, 12, 19,  9, 0x0),
    gsSP2Triangles( 8,  9, 19, 0x0, 18, 20, 19, 0x0),
    gsSP2Triangles(17, 21, 18, 0x0, 17, 15, 21, 0x0),
    gsSP2Triangles(21, 22, 18, 0x0, 18, 22, 20, 0x0),
    gsSP2Triangles(21, 23, 22, 0x0, 15, 16, 24, 0x0),
    gsSP2Triangles(15, 24, 21, 0x0, 21, 24, 23, 0x0),
    gsSP2Triangles(25,  5,  7, 0x0, 25,  3,  5, 0x0),
    gsSP2Triangles(26,  7, 10, 0x0, 25,  7, 26, 0x0),
    gsSP2Triangles(27, 25, 26, 0x0,  4, 28,  2, 0x0),
    gsSP2Triangles(28, 14,  2, 0x0, 28, 16, 14, 0x0),
    gsSP2Triangles(16, 28, 29, 0x0, 29, 24, 16, 0x0),
    gsSP2Triangles(28, 30, 29, 0x0, 28,  4, 30, 0x0),
    gsSP1Triangle(29, 30, 31, 0x0),
    gsSPVertex(&water_bubble_seg5_dl_05010D30_vtx32_0[32], 25, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  2,  1,  3, 0x0),
    gsSP2Triangles( 0,  4,  1, 0x0,  5,  0,  2, 0x0),
    gsSP2Triangles( 4,  0,  6, 0x0,  6,  7,  4, 0x0),
    gsSP2Triangles( 8,  7,  6, 0x0,  9,  8,  6, 0x0),
    gsSP2Triangles( 8, 10,  7, 0x0, 10,  8, 11, 0x0),
    gsSP2Triangles( 8, 12, 11, 0x0,  8,  9, 12, 0x0),
    gsSP2Triangles( 6, 13,  9, 0x0,  0, 13,  6, 0x0),
    gsSP2Triangles( 0,  5, 13, 0x0, 14,  4,  7, 0x0),
    gsSP2Triangles(14,  1,  4, 0x0, 14,  7, 15, 0x0),
    gsSP2Triangles(15,  7, 10, 0x0, 15, 10, 16, 0x0),
    gsSP2Triangles(15, 16, 17, 0x0, 17, 16, 18, 0x0),
    gsSP2Triangles(17, 18, 19, 0x0, 17, 19, 20, 0x0),
    gsSP2Triangles(21, 17, 20, 0x0, 21, 15, 17, 0x0),
    gsSP2Triangles(21, 14, 15, 0x0,  2, 22,  5, 0x0),
    gsSP2Triangles(23, 22,  2, 0x0,  3, 23,  2, 0x0),
    gsSP2Triangles(24,  3,  1, 0x0, 21, 24, 14, 0x0),
    gsSP1Triangle(24,  1, 14, 0x0),
    gsSPEndDisplayList(),
};

// 0x05011000 - 0x05011098
const Gfx water_bubble_seg5_dl_05011000[] = {
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_GEN),
    gsDPSetCombineMode(G_CC_MODULATERGBFADE, G_CC_MODULATERGBFADE),
    gsDPSetEnvColor(255, 255, 255, 205),
    gsDPLoadTextureBlock(water_bubble_seg5_texture_0500FE80, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_WRAP | G_TX_NOMIRROR, G_TX_WRAP | G_TX_NOMIRROR, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPTexture(0x07C0, 0x07C0, 0, G_TX_RENDERTILE, G_ON),
    gsSPDisplayList(water_bubble_seg5_dl_05010D30),
    gsSPTexture(0x07C0, 0x07C0, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_GEN),
    gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
    gsDPSetEnvColor(255, 255, 255, 255),
    gsSPEndDisplayList(),
};
