// Wiggler Body

// 0x05005A30
ALIGNED8 static const Texture wiggler_seg5_texture_05005A30[] = {
#include "actors/wiggler/wiggler_segment_left_side.rgba16.inc.c"
};

// 0x05006A30
ALIGNED8 static const Texture wiggler_seg5_texture_05006A30[] = {
#include "actors/wiggler/wiggler_segment_right_side.rgba16.inc.c"
};

// 0x05007A30
ALIGNED8 static const Texture wiggler_seg5_texture_05007A30[] = {
#include "actors/wiggler/wiggler_eye.rgba16.inc.c"
};

// 0x05008230
ALIGNED8 static const Texture wiggler_seg5_texture_05008230[] = {
#include "actors/wiggler/wiggler_flower.rgba16.inc.c"
};

// 0x05008A30
ALIGNED8 static const Texture wiggler_seg5_texture_05008A30[] = {
#include "actors/wiggler/wiggler_frown.rgba16.inc.c"
};

// 0x05009230
ALIGNED8 static const Texture wiggler_seg5_texture_05009230[] = {
#include "actors/wiggler/wiggler_nose_left_side.rgba16.inc.c"
};

// 0x0500A230
ALIGNED8 static const Texture wiggler_seg5_texture_0500A230[] = {
#include "actors/wiggler/wiggler_nose_right_side.rgba16.inc.c"
};

// 0x0500B230
static const Lights1 wiggler_seg5_lights_0500B230 = gdSPDefLights1(
    0x37, 0x00, 0x00,
    0xdf, 0x00, 0x00, 0x28, 0x28, 0x28
);

// 0x0500B248
static const Lights1 wiggler_seg5_lights_0500B248 = gdSPDefLights1(
    0x39, 0x11, 0x00,
    0xe7, 0x47, 0x00, 0x28, 0x28, 0x28
);

// Unreferenced light group
UNUSED static const Lights1 wiggler_body_lights_unused = gdSPDefLights1(
    0x3a, 0x22, 0x05,
    0xea, 0x8b, 0x16, 0x28, 0x28, 0x28
);

// 0x0500B278


// 0x0500B378


// 0x0500B478


// 0x0500B578


// 0x0500B5B8
static const Vtx wiggler_seg5_vertex_0500B5B8[] = {
    {{{    53,     -2,    -13}, 0, {     0,      0}, {0x00, 0xd8, 0x88, 0x00}}},
    {{{    53,    -11,      0}, 0, {     0,      0}, {0x01, 0x81, 0x01, 0x00}}},
    {{{    -3,    -12,      0}, 0, {     0,      0}, {0x01, 0x81, 0x01, 0x00}}},
    {{{    -3,     -2,    -13}, 0, {     0,      0}, {0x00, 0xd8, 0x88, 0xff}}},
    {{{    53,     -1,     13}, 0, {     0,      0}, {0x00, 0xda, 0x79, 0xff}}},
    {{{    53,     13,      8}, 0, {     0,      0}, {0xff, 0x67, 0x49, 0xff}}},
    {{{    -4,     13,      8}, 0, {     0,      0}, {0xff, 0x67, 0x49, 0xff}}},
    {{{    -3,     -2,     13}, 0, {     0,      0}, {0x00, 0xda, 0x79, 0xff}}},
    {{{    53,     13,     -8}, 0, {     0,      0}, {0xff, 0x66, 0xb5, 0xff}}},
    {{{    -4,     13,     -8}, 0, {     0,      0}, {0xff, 0x66, 0xb5, 0xff}}},
    {{{    -3,    -12,      0}, 0, {     0,      0}, {0xd3, 0x8d, 0xe6, 0xff}}},
    {{{    -3,     -2,     13}, 0, {     0,      0}, {0x81, 0xff, 0x00, 0xff}}},
    {{{    -4,     13,      8}, 0, {     0,      0}, {0x81, 0xff, 0x00, 0xff}}},
    {{{    -4,     13,     -8}, 0, {     0,      0}, {0xd0, 0x6c, 0xd3, 0xff}}},
    {{{    -3,     -2,    -13}, 0, {     0,      0}, {0xd2, 0xf6, 0x8b, 0xff}}},
};

// 0x0500B6A8
static const Vtx wiggler_seg5_vertex_0500B6A8[] = {
    {{{    42,     -2,    -13}, 0, {     0,      0}, {0x00, 0xd8, 0x88, 0x00}}},
    {{{    42,    -12,      0}, 0, {     0,      0}, {0x00, 0x81, 0x01, 0x00}}},
    {{{    -6,    -12,      0}, 0, {     0,      0}, {0x00, 0x81, 0x01, 0x00}}},
    {{{    -6,     -2,    -13}, 0, {     0,      0}, {0x00, 0xd8, 0x88, 0xff}}},
    {{{    42,     -2,     13}, 0, {     0,      0}, {0x00, 0xda, 0x79, 0xff}}},
    {{{    42,     13,      8}, 0, {     0,      0}, {0x00, 0x67, 0x49, 0xff}}},
    {{{    -6,     13,      8}, 0, {     0,      0}, {0x00, 0x67, 0x49, 0xff}}},
    {{{    -6,     -2,     13}, 0, {     0,      0}, {0x00, 0xda, 0x79, 0xff}}},
    {{{    42,     13,     -8}, 0, {     0,      0}, {0x00, 0x66, 0xb5, 0xff}}},
    {{{    -6,     13,     -8}, 0, {     0,      0}, {0x00, 0x66, 0xb5, 0xff}}},
    {{{    42,    -12,      0}, 0, {     0,      0}, {0x7f, 0x00, 0x00, 0xff}}},
    {{{    42,     -2,    -13}, 0, {     0,      0}, {0x2f, 0xc2, 0x9d, 0xff}}},
    {{{    42,     13,     -8}, 0, {     0,      0}, {0x2f, 0x4b, 0xa6, 0xff}}},
    {{{    42,     13,      8}, 0, {     0,      0}, {0x2f, 0x6d, 0x2c, 0xff}}},
    {{{    42,     -2,     13}, 0, {     0,      0}, {0x2f, 0xf8, 0x75, 0xff}}},
};

// 0x0500B798


// 0x0500B898


// 0x0500B998


// 0x0500BA98


// 0x0500BAD8
static const Vtx wiggler_seg5_vertex_0500BAD8[] = {
    {{{    -3,     -2,     13}, 0, {     0,      0}, {0x00, 0xd8, 0x78, 0x00}}},
    {{{    -3,    -12,      0}, 0, {     0,      0}, {0x01, 0x81, 0xff, 0x00}}},
    {{{    53,    -11,      0}, 0, {     0,      0}, {0x01, 0x81, 0xff, 0x00}}},
    {{{    53,     -2,     13}, 0, {     0,      0}, {0x00, 0xd8, 0x78, 0xff}}},
    {{{    -3,     -2,    -13}, 0, {     0,      0}, {0x00, 0xda, 0x87, 0xff}}},
    {{{    -4,     13,     -8}, 0, {     0,      0}, {0xff, 0x67, 0xb7, 0xff}}},
    {{{    53,     13,     -8}, 0, {     0,      0}, {0xff, 0x67, 0xb7, 0xff}}},
    {{{    53,     -1,    -13}, 0, {     0,      0}, {0x00, 0xda, 0x87, 0xff}}},
    {{{    -4,     13,      8}, 0, {     0,      0}, {0xff, 0x66, 0x4b, 0xff}}},
    {{{    53,     13,      8}, 0, {     0,      0}, {0xff, 0x66, 0x4b, 0xff}}},
    {{{    -4,     13,      8}, 0, {     0,      0}, {0xd0, 0x4b, 0x5a, 0xff}}},
    {{{    -4,     13,     -8}, 0, {     0,      0}, {0xd0, 0x6c, 0xd5, 0xff}}},
    {{{    -3,     -2,    -13}, 0, {     0,      0}, {0x81, 0xff, 0x00, 0xff}}},
    {{{    -3,    -12,      0}, 0, {     0,      0}, {0x81, 0xff, 0x00, 0xff}}},
    {{{    -3,     -2,     13}, 0, {     0,      0}, {0xd2, 0xc1, 0x63, 0xff}}},
};

// 0x0500BBC8
static const Vtx wiggler_seg5_vertex_0500BBC8[] = {
    {{{    -6,     -2,     13}, 0, {     0,      0}, {0x00, 0xd8, 0x78, 0x00}}},
    {{{    -6,    -12,      0}, 0, {     0,      0}, {0x00, 0x81, 0xff, 0x00}}},
    {{{    42,    -12,      0}, 0, {     0,      0}, {0x00, 0x81, 0xff, 0x00}}},
    {{{    42,     -2,     13}, 0, {     0,      0}, {0x00, 0xd8, 0x78, 0xff}}},
    {{{    -6,     -2,    -13}, 0, {     0,      0}, {0x00, 0xda, 0x87, 0xff}}},
    {{{    -6,     13,     -8}, 0, {     0,      0}, {0x00, 0x67, 0xb7, 0xff}}},
    {{{    42,     13,     -8}, 0, {     0,      0}, {0x00, 0x67, 0xb7, 0xff}}},
    {{{    42,     -2,    -13}, 0, {     0,      0}, {0x00, 0xda, 0x87, 0xff}}},
    {{{    -6,     13,      8}, 0, {     0,      0}, {0x00, 0x66, 0x4b, 0xff}}},
    {{{    42,     13,      8}, 0, {     0,      0}, {0x00, 0x66, 0x4b, 0xff}}},
    {{{    42,     13,     -8}, 0, {     0,      0}, {0x2e, 0x4d, 0xa7, 0xff}}},
    {{{    42,     13,      8}, 0, {     0,      0}, {0x2f, 0x6c, 0x2d, 0xff}}},
    {{{    42,     -2,     13}, 0, {     0,      0}, {0x7f, 0x00, 0x00, 0xff}}},
    {{{    42,    -12,      0}, 0, {     0,      0}, {0x7f, 0x00, 0x00, 0xff}}},
    {{{    42,     -2,    -13}, 0, {     0,      0}, {0x2f, 0xc4, 0x9c, 0xff}}},
};

// 0x0500BCB8 - 0x0500BE10
static const Vtx wiggler_seg5_dl_0500BCB8_vtx32_0[] = {
    {{{    19,      5,    -31}, 0, {     0,      0}, {0x40, 0x2b, 0x9d, 0x00}}},
    {{{    20,    -37,    -43}, 0, {     0,      0}, {0x48, 0xeb, 0x9a, 0x00}}},
    {{{    -5,    -36,    -43}, 0, {     0,      0}, {0xbd, 0xe4, 0x99, 0x00}}},
    {{{    -2,      5,    -31}, 0, {     0,      0}, {0xca, 0x32, 0x9a, 0xff}}},
    {{{   -17,    -33,    -21}, 0, {     0,      0}, {0x89, 0xe3, 0xe1, 0xff}}},
    {{{   -15,      5,    -15}, 0, {     0,      0}, {0x8f, 0x2a, 0xda, 0xff}}},
    {{{   -17,    -33,     21}, 0, {     0,      0}, {0x89, 0xe3, 0x1f, 0x00}}},
    {{{   -15,      5,     15}, 0, {     0,      0}, {0x8f, 0x2a, 0x26, 0xff}}},
    {{{    -5,    -36,    -43}, 0, {     0,      0}, {0xbd, 0xe4, 0x99, 0xff}}},
    {{{     0,    -59,    -21}, 0, {     0,      0}, {0xb7, 0xa1, 0xd9, 0xff}}},
    {{{     0,     28,    -15}, 0, {     0,      0}, {0xba, 0x5b, 0xcc, 0xff}}},
    {{{    19,      5,    -31}, 0, {     0,      0}, {0x40, 0x2b, 0x9d, 0xff}}},
    {{{    18,     34,    -15}, 0, {     0,      0}, {0x41, 0x5b, 0xc6, 0xff}}},
    {{{    18,     34,     15}, 0, {     0,      0}, {0x41, 0x5b, 0x3a, 0xff}}},
    {{{     0,     28,     15}, 0, {     0,      0}, {0xba, 0x5b, 0x34, 0xff}}},
    {{{    -2,      5,     31}, 0, {     0,      0}, {0xca, 0x32, 0x66, 0xff}}},
    {{{    20,    -66,    -21}, 0, {     0,      0}, {0x42, 0xa1, 0xce, 0xff}}},
    {{{     0,    -59,     21}, 0, {     0,      0}, {0xb7, 0xa1, 0x27, 0xff}}},
    {{{    20,    -66,     21}, 0, {     0,      0}, {0x42, 0xa1, 0x32, 0xff}}},
    {{{    -5,    -36,     43}, 0, {     0,      0}, {0xbd, 0xe4, 0x67, 0x00}}},
    {{{    20,    -37,    -43}, 0, {     0,      0}, {0x48, 0xeb, 0x9a, 0xff}}},
    {{{   -17,    -33,     21}, 0, {     0,      0}, {0x89, 0xe3, 0x1f, 0xff}}},
    {{{    19,      5,     31}, 0, {     0,      0}, {0x40, 0x2b, 0x63, 0xff}}},
    {{{    20,    -37,     43}, 0, {     0,      0}, {0x48, 0xeb, 0x66, 0xff}}},
    {{{    -5,    -36,     43}, 0, {     0,      0}, {0xbd, 0xe4, 0x67, 0xff}}},
    {{{     0,    -59,     21}, 0, {     0,      0}, {0xb7, 0xa1, 0x27, 0x00}}},
    {{{    20,    -66,    -21}, 0, {     0,      0}, {0x7f, 0x02, 0x00, 0xff}}},
    {{{    20,    -37,    -43}, 0, {     0,      0}, {0x3d, 0xed, 0x93, 0xff}}},
    {{{    19,      5,    -31}, 0, {     0,      0}, {0x1b, 0x32, 0x8f, 0xff}}},
    {{{    18,     34,    -15}, 0, {     0,      0}, {0x7f, 0x02, 0x00, 0xff}}},
    {{{    18,     34,     15}, 0, {     0,      0}, {0x06, 0x6e, 0x3e, 0xff}}},
    {{{    19,      5,     31}, 0, {     0,      0}, {0x39, 0x2b, 0x68, 0xff}}},
    {{{    20,    -66,    -21}, 0, {     0,      0}, {0x7f, 0x02, 0x00, 0xff}}},
    {{{    19,      5,     31}, 0, {     0,      0}, {0x39, 0x2b, 0x68, 0x00}}},
    {{{    20,    -37,     43}, 0, {     0,      0}, {0x1b, 0xe7, 0x79, 0x00}}},
    {{{    20,    -66,     21}, 0, {     0,      0}, {0x7f, 0x02, 0x00, 0xff}}},
};

const Gfx wiggler_seg5_dl_0500BCB8[] = {
    gsSPLight(&wiggler_seg5_lights_0500B230.l, 1),
    gsSPLight(&wiggler_seg5_lights_0500B230.a, 2),
    gsSPVertex(&wiggler_seg5_dl_0500BCB8_vtx32_0[0], 32, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  0,  2,  3, 0x0),
    gsSP2Triangles( 4,  5,  3, 0x0,  5,  4,  6, 0x0),
    gsSP2Triangles( 5,  6,  7, 0x0,  4,  3,  8, 0x0),
    gsSP2Triangles( 8,  9,  4, 0x0,  6,  4,  9, 0x0),
    gsSP2Triangles(10,  3,  5, 0x0, 10, 11,  3, 0x0),
    gsSP2Triangles(10, 12, 11, 0x0, 13, 12, 10, 0x0),
    gsSP2Triangles(13, 10, 14, 0x0,  5, 14, 10, 0x0),
    gsSP2Triangles( 5,  7, 14, 0x0, 15, 14,  7, 0x0),
    gsSP2Triangles(13, 14, 15, 0x0, 16,  9,  8, 0x0),
    gsSP2Triangles(16, 17,  9, 0x0,  6,  9, 17, 0x0),
    gsSP2Triangles(16, 18, 17, 0x0, 17, 19,  6, 0x0),
    gsSP2Triangles( 7, 19, 15, 0x0, 16,  8, 20, 0x0),
    gsSP2Triangles( 7, 21, 19, 0x0, 13, 15, 22, 0x0),
    gsSP2Triangles(23, 22, 15, 0x0, 23, 15, 24, 0x0),
    gsSP2Triangles(23, 19, 25, 0x0, 23, 25, 18, 0x0),
    gsSP2Triangles(26, 27, 28, 0x0, 26, 28, 29, 0x0),
    gsSP2Triangles(26, 29, 30, 0x0, 26, 30, 31, 0x0),
    gsSPVertex(&wiggler_seg5_dl_0500BCB8_vtx32_0[32], 4, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  0,  2,  3, 0x0),
    gsSPEndDisplayList(),
};

// 0x0500BE10 - 0x0500BE98
const Gfx wiggler_seg5_dl_0500BE10[] = {
    gsSPLight(&wiggler_seg5_lights_0500B248.l, 1),
    gsSPLight(&wiggler_seg5_lights_0500B248.a, 2),
    gsSPVertex(wiggler_seg5_vertex_0500B5B8, 15, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  0,  2,  3, 0x0),
    gsSP2Triangles( 4,  5,  6, 0x0,  4,  6,  7, 0x0),
    gsSP2Triangles( 8,  0,  3, 0x0,  8,  3,  9, 0x0),
    gsSP2Triangles( 1,  4,  7, 0x0,  1,  7,  2, 0x0),
    gsSP2Triangles( 5,  8,  9, 0x0,  5,  9,  6, 0x0),
    gsSP2Triangles(10, 11, 12, 0x0, 10, 12, 13, 0x0),
    gsSP1Triangle(10, 13, 14, 0x0),
    gsSPEndDisplayList(),
};

// 0x0500BE98 - 0x0500BF20
const Gfx wiggler_seg5_dl_0500BE98[] = {
    gsSPLight(&wiggler_seg5_lights_0500B248.l, 1),
    gsSPLight(&wiggler_seg5_lights_0500B248.a, 2),
    gsSPVertex(wiggler_seg5_vertex_0500B6A8, 15, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  0,  2,  3, 0x0),
    gsSP2Triangles( 4,  5,  6, 0x0,  4,  6,  7, 0x0),
    gsSP2Triangles( 8,  0,  3, 0x0,  8,  3,  9, 0x0),
    gsSP2Triangles( 1,  4,  7, 0x0,  1,  7,  2, 0x0),
    gsSP2Triangles( 5,  8,  9, 0x0,  5,  9,  6, 0x0),
    gsSP2Triangles(10, 11, 12, 0x0, 10, 12, 13, 0x0),
    gsSP1Triangle(10, 13, 14, 0x0),
    gsSPEndDisplayList(),
};

// 0x0500BF20 - 0x0500C078
static const Vtx wiggler_seg5_dl_0500BF20_vtx32_0[] = {
    {{{    -2,      5,     31}, 0, {     0,      0}, {0xca, 0x32, 0x66, 0x00}}},
    {{{    -5,    -36,     43}, 0, {     0,      0}, {0xbd, 0xe4, 0x67, 0x00}}},
    {{{    20,    -37,     43}, 0, {     0,      0}, {0x48, 0xeb, 0x66, 0x00}}},
    {{{    19,      5,     31}, 0, {     0,      0}, {0x40, 0x2b, 0x63, 0xff}}},
    {{{    -2,      5,     31}, 0, {     0,      0}, {0xca, 0x32, 0x66, 0xff}}},
    {{{    18,     34,     15}, 0, {     0,      0}, {0x41, 0x5b, 0x3a, 0xff}}},
    {{{     0,     28,     15}, 0, {     0,      0}, {0xba, 0x5b, 0x34, 0xff}}},
    {{{     0,     28,    -15}, 0, {     0,      0}, {0xba, 0x5b, 0xcc, 0xff}}},
    {{{    18,     34,    -15}, 0, {     0,      0}, {0x41, 0x5b, 0xc6, 0xff}}},
    {{{   -15,      5,     15}, 0, {     0,      0}, {0x8f, 0x2a, 0x26, 0xff}}},
    {{{    -5,    -36,     43}, 0, {     0,      0}, {0xbd, 0xe4, 0x67, 0xff}}},
    {{{   -17,    -33,     21}, 0, {     0,      0}, {0x89, 0xe3, 0x1f, 0xff}}},
    {{{   -15,      5,    -15}, 0, {     0,      0}, {0x8f, 0x2a, 0xda, 0xff}}},
    {{{    -2,      5,    -31}, 0, {     0,      0}, {0xca, 0x32, 0x9a, 0xff}}},
    {{{   -17,    -33,    -21}, 0, {     0,      0}, {0x89, 0xe3, 0xe1, 0xff}}},
    {{{     0,    -59,     21}, 0, {     0,      0}, {0xb7, 0xa1, 0x27, 0xff}}},
    {{{    20,    -37,     43}, 0, {     0,      0}, {0x48, 0xeb, 0x66, 0xff}}},
    {{{    20,    -66,     21}, 0, {     0,      0}, {0x42, 0xa1, 0x32, 0xff}}},
    {{{    20,    -66,    -21}, 0, {     0,      0}, {0x42, 0xa1, 0xce, 0xff}}},
    {{{     0,    -59,    -21}, 0, {     0,      0}, {0xb7, 0xa1, 0xd9, 0xff}}},
    {{{     0,    -59,    -21}, 0, {     0,      0}, {0xb7, 0xa1, 0xd9, 0x00}}},
    {{{    -5,    -36,    -43}, 0, {     0,      0}, {0xbd, 0xe4, 0x99, 0x00}}},
    {{{    20,    -37,    -43}, 0, {     0,      0}, {0x48, 0xeb, 0x9a, 0xff}}},
    {{{    19,      5,    -31}, 0, {     0,      0}, {0x40, 0x2b, 0x9d, 0xff}}},
    {{{    -5,    -36,    -43}, 0, {     0,      0}, {0xbd, 0xe4, 0x99, 0xff}}},
    {{{    20,    -66,    -21}, 0, {     0,      0}, {0x7f, 0x02, 0x00, 0xff}}},
    {{{    20,    -37,    -43}, 0, {     0,      0}, {0x3d, 0xed, 0x93, 0xff}}},
    {{{    19,      5,    -31}, 0, {     0,      0}, {0x1b, 0x32, 0x8f, 0xff}}},
    {{{    18,     34,    -15}, 0, {     0,      0}, {0x7f, 0x02, 0x00, 0xff}}},
    {{{    18,     34,     15}, 0, {     0,      0}, {0x06, 0x6e, 0x3e, 0xff}}},
    {{{    19,      5,     31}, 0, {     0,      0}, {0x39, 0x2b, 0x68, 0xff}}},
    {{{    20,    -66,    -21}, 0, {     0,      0}, {0x7f, 0x02, 0x00, 0xff}}},
    {{{    19,      5,     31}, 0, {     0,      0}, {0x39, 0x2b, 0x68, 0x00}}},
    {{{    20,    -37,     43}, 0, {     0,      0}, {0x1b, 0xe7, 0x79, 0x00}}},
    {{{    20,    -66,     21}, 0, {     0,      0}, {0x7f, 0x02, 0x00, 0xff}}},
};

const Gfx wiggler_seg5_dl_0500BF20[] = {
    gsSPLight(&wiggler_seg5_lights_0500B230.l, 1),
    gsSPLight(&wiggler_seg5_lights_0500B230.a, 2),
    gsSPVertex(&wiggler_seg5_dl_0500BF20_vtx32_0[0], 31, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  0,  2,  3, 0x0),
    gsSP2Triangles( 4,  3,  5, 0x0,  4,  5,  6, 0x0),
    gsSP2Triangles( 7,  6,  5, 0x0,  7,  5,  8, 0x0),
    gsSP2Triangles( 9,  4,  6, 0x0, 10,  4,  9, 0x0),
    gsSP2Triangles(10,  9, 11, 0x0, 12, 11,  9, 0x0),
    gsSP2Triangles( 6, 12,  9, 0x0,  6,  7, 12, 0x0),
    gsSP2Triangles(12,  7, 13, 0x0, 12, 14, 11, 0x0),
    gsSP2Triangles(13, 14, 12, 0x0, 11, 15, 10, 0x0),
    gsSP2Triangles(16, 10, 15, 0x0, 16, 15, 17, 0x0),
    gsSP2Triangles(15, 18, 17, 0x0, 15, 19, 18, 0x0),
    gsSP2Triangles(20, 15, 11, 0x0, 20, 11, 14, 0x0),
    gsSP2Triangles(14, 21, 20, 0x0, 18, 20, 21, 0x0),
    gsSP2Triangles(13, 21, 14, 0x0, 18, 21, 22, 0x0),
    gsSP2Triangles(23,  7,  8, 0x0, 23, 13,  7, 0x0),
    gsSP2Triangles(24, 13, 23, 0x0, 24, 23, 22, 0x0),
    gsSP2Triangles(25, 26, 27, 0x0, 25, 27, 28, 0x0),
    gsSP2Triangles(25, 28, 29, 0x0, 25, 29, 30, 0x0),
    gsSPVertex(&wiggler_seg5_dl_0500BF20_vtx32_0[31], 4, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  0,  2,  3, 0x0),
    gsSPEndDisplayList(),
};

// 0x0500C078 - 0x0500C100
const Gfx wiggler_seg5_dl_0500C078[] = {
    gsSPLight(&wiggler_seg5_lights_0500B248.l, 1),
    gsSPLight(&wiggler_seg5_lights_0500B248.a, 2),
    gsSPVertex(wiggler_seg5_vertex_0500BAD8, 15, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  0,  2,  3, 0x0),
    gsSP2Triangles( 4,  5,  6, 0x0,  4,  6,  7, 0x0),
    gsSP2Triangles( 8,  0,  3, 0x0,  8,  3,  9, 0x0),
    gsSP2Triangles( 1,  4,  7, 0x0,  1,  7,  2, 0x0),
    gsSP2Triangles( 5,  8,  9, 0x0,  5,  9,  6, 0x0),
    gsSP2Triangles(10, 11, 12, 0x0, 10, 12, 13, 0x0),
    gsSP1Triangle(10, 13, 14, 0x0),
    gsSPEndDisplayList(),
};

// 0x0500C100 - 0x0500C188
const Gfx wiggler_seg5_dl_0500C100[] = {
    gsSPLight(&wiggler_seg5_lights_0500B248.l, 1),
    gsSPLight(&wiggler_seg5_lights_0500B248.a, 2),
    gsSPVertex(wiggler_seg5_vertex_0500BBC8, 15, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  0,  2,  3, 0x0),
    gsSP2Triangles( 4,  5,  6, 0x0,  4,  6,  7, 0x0),
    gsSP2Triangles( 8,  0,  3, 0x0,  8,  3,  9, 0x0),
    gsSP2Triangles( 1,  4,  7, 0x0,  1,  7,  2, 0x0),
    gsSP2Triangles( 5,  8,  9, 0x0,  5,  9,  6, 0x0),
    gsSP2Triangles(10, 11, 12, 0x0, 10, 12, 13, 0x0),
    gsSP1Triangle(10, 13, 14, 0x0),
    gsSPEndDisplayList(),
};

// 0x0500C188
static const Vtx wiggler_seg5_vertex_0500C188[] = {
    {{{     0,     21,      0}, 0, {   990,      0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -20,    -20,      0}, 0, {     0,   2012}, {0xff, 0xff, 0xff, 0xff}}},
    {{{     0,    -20,      0}, 0, {   990,   2012}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -20,     21,      0}, 0, {     0,      0}, {0xff, 0xff, 0xff, 0xff}}},
};

// 0x0500C1C8
static const Vtx wiggler_seg5_vertex_0500C1C8[] = {
    {{{    21,     21,      0}, 0, {   990,      0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{     0,     21,      0}, 0, {     0,      0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{     0,    -20,      0}, 0, {     0,   2012}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    21,    -20,      0}, 0, {   990,   2012}, {0xff, 0xff, 0xff, 0xff}}},
};

// 0x0500C208 - 0x0500C240
const Gfx wiggler_seg5_dl_0500C208[] = {
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, wiggler_seg5_texture_05005A30),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 64 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSPVertex(wiggler_seg5_vertex_0500C188, 4, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  0,  3,  1, 0x0),
    gsSPEndDisplayList(),
};

// 0x0500C240 - 0x0500C278
const Gfx wiggler_seg5_dl_0500C240[] = {
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, wiggler_seg5_texture_05006A30),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 64 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSPVertex(wiggler_seg5_vertex_0500C1C8, 4, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  0,  2,  3, 0x0),
    gsSPEndDisplayList(),
};

// 0x0500C278 - 0x0500C2F0
const Gfx wiggler_seg5_dl_0500C278[] = {
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_DECALRGBA, G_CC_DECALRGBA),
    gsSPClearGeometryMode(G_LIGHTING),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, G_TX_LOADTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, G_TX_RENDERTILE, 0, G_TX_CLAMP, 6, G_TX_NOLOD, G_TX_CLAMP, 5, G_TX_NOLOD),
    gsDPSetTileSize(0, 0, 0, (32 - 1) << G_TEXTURE_IMAGE_FRAC, (64 - 1) << G_TEXTURE_IMAGE_FRAC),
    gsSPDisplayList(wiggler_seg5_dl_0500C208),
    gsSPDisplayList(wiggler_seg5_dl_0500C240),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPEndDisplayList(),
};
