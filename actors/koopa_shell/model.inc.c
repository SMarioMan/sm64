// Koopa Shell

// 0x08026388
static const Lights1 koopa_shell_seg8_lights_08026388 = gdSPDefLights1(
    0x11, 0x33, 0x06,
    0x45, 0xcd, 0x1a, 0x28, 0x28, 0x28
);

// 0x080263A0
static const Lights1 koopa_shell_seg8_lights_080263A0 = gdSPDefLights1(
    0x39, 0x0a, 0x07,
    0xe4, 0x29, 0x1d, 0x28, 0x28, 0x28
);

// 0x080263B8
static const Lights1 koopa_shell_seg8_lights_080263B8 = gdSPDefLights1(
    0x21, 0x30, 0x39,
    0x84, 0xc3, 0xe5, 0x28, 0x28, 0x28
);

// 0x080263D0
static const Lights1 koopa_shell_seg8_lights_080263D0 = gdSPDefLights1(
    0x3e, 0x3f, 0x3e,
    0xfa, 0xff, 0xf8, 0x28, 0x28, 0x28
);

// 0x080263E8


// 0x080264D8


// 0x080265C8


// 0x080266B8


// 0x080267A8


// 0x08026898


// 0x08026988


// 0x08026A18


// 0x08026B08


// 0x08026BF8


// 0x08026CE8


// 0x08026DD8


// 0x08026EC8


// 0x08026FB8


// 0x080270A8


// 0x08027108 - 0x08027170
static const Vtx koopa_shell_seg8_dl_08027108_vtx32_0[] = {
    {{{   101,     53,     57}, 0, {     0,      0}, {0x53, 0x5e, 0x14, 0xff}}},
    {{{    40,    149,     46}, 0, {     0,      0}, {0x40, 0x6a, 0x1e, 0xff}}},
    {{{     0,     78,    118}, 0, {     0,      0}, {0x00, 0x6d, 0x42, 0xff}}},
    {{{    90,     51,    -81}, 0, {     0,      0}, {0x42, 0x69, 0xe3, 0xff}}},
    {{{     0,    138,    -67}, 0, {     0,      0}, {0x00, 0x69, 0xb8, 0xff}}},
    {{{     0,     65,   -111}, 0, {     0,      0}, {0x00, 0x6f, 0xc2, 0xff}}},
    {{{   -40,    149,     46}, 0, {     0,      0}, {0xc0, 0x6a, 0x1e, 0xff}}},
    {{{   -90,     51,    -81}, 0, {     0,      0}, {0xbe, 0x69, 0xe3, 0xff}}},
    {{{  -101,     53,     57}, 0, {     0,      0}, {0xad, 0x5e, 0x14, 0xff}}},
};

const Gfx koopa_shell_seg8_dl_08027108[] = {    gsSPVertex(&koopa_shell_seg8_dl_08027108_vtx32_0[0], 9, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  0,  3,  1, 0x0),
    gsSP2Triangles( 3,  4,  1, 0x0,  5,  4,  3, 0x0),
    gsSP2Triangles( 6,  2,  1, 0x0,  4,  6,  1, 0x0),
    gsSP2Triangles( 6,  4,  7, 0x0,  7,  4,  5, 0x0),
    gsSP2Triangles( 6,  7,  8, 0x0,  2,  6,  8, 0x0),
    gsSPEndDisplayList(),
};

// 0x08027170 - 0x08027258
static const Vtx koopa_shell_seg8_dl_08027170_vtx32_0[] = {
    {{{     0,     17,    108}, 0, {     0,      0}, {0x00, 0xab, 0x5f, 0xff}}},
    {{{    46,      0,     60}, 0, {     0,      0}, {0x23, 0x8c, 0x25, 0xff}}},
    {{{    25,     51,    118}, 0, {     0,      0}, {0x14, 0xba, 0x68, 0xff}}},
    {{{    70,     28,     88}, 0, {     0,      0}, {0x37, 0xa0, 0x3f, 0xff}}},
    {{{    70,     17,     41}, 0, {     0,      0}, {0x49, 0x98, 0x07, 0xff}}},
    {{{    46,      0,    -68}, 0, {     0,      0}, {0x2a, 0x8a, 0xe9, 0xff}}},
    {{{     0,      0,     -5}, 0, {     0,      0}, {0x00, 0x80, 0x00, 0xff}}},
    {{{   -46,      0,     59}, 0, {     0,      0}, {0xdd, 0x8c, 0x25, 0xff}}},
    {{{   -45,      0,    -69}, 0, {     0,      0}, {0xd7, 0x8a, 0xe9, 0xff}}},
    {{{   -70,     17,     41}, 0, {     0,      0}, {0xb8, 0x98, 0x07, 0xff}}},
    {{{   -25,     51,    118}, 0, {     0,      0}, {0xf0, 0xbb, 0x6a, 0xff}}},
    {{{   -70,     28,     88}, 0, {     0,      0}, {0xc9, 0xa0, 0x3f, 0xff}}},
    {{{   -70,     21,    -50}, 0, {     0,      0}, {0xbd, 0x94, 0xf7, 0xff}}},
    {{{   -70,     27,    -99}, 0, {     0,      0}, {0xcd, 0xa5, 0xb7, 0xff}}},
    {{{     0,     14,    -99}, 0, {     0,      0}, {0x00, 0xa6, 0xa6, 0xff}}},
    {{{    70,     27,    -99}, 0, {     0,      0}, {0x33, 0xa5, 0xb8, 0xff}}},
    {{{     0,     39,   -112}, 0, {     0,      0}, {0x00, 0xc4, 0x90, 0xff}}},
    {{{    70,     21,    -50}, 0, {     0,      0}, {0x44, 0x95, 0xf7, 0xff}}},
};

const Gfx koopa_shell_seg8_dl_08027170[] = {    gsSPVertex(&koopa_shell_seg8_dl_08027170_vtx32_0[0], 18, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  1,  3,  2, 0x0),
    gsSP2Triangles( 4,  3,  1, 0x0,  5,  4,  1, 0x0),
    gsSP2Triangles( 5,  1,  6, 0x0,  7,  6,  1, 0x0),
    gsSP2Triangles( 1,  0,  7, 0x0,  6,  8,  5, 0x0),
    gsSP2Triangles( 6,  7,  8, 0x0,  8,  7,  9, 0x0),
    gsSP2Triangles(10,  7,  0, 0x0, 10,  0,  2, 0x0),
    gsSP2Triangles(10, 11,  7, 0x0,  7, 11,  9, 0x0),
    gsSP2Triangles( 9, 12,  8, 0x0, 12, 13,  8, 0x0),
    gsSP2Triangles(14,  8, 13, 0x0,  8, 14,  5, 0x0),
    gsSP2Triangles(15,  5, 14, 0x0, 14, 16, 15, 0x0),
    gsSP2Triangles(13, 16, 14, 0x0,  5, 15, 17, 0x0),
    gsSP1Triangle( 5, 17,  4, 0x0),
    gsSPEndDisplayList(),
};

// 0x08027258 - 0x080273C8
static const Vtx koopa_shell_seg8_dl_08027258_vtx32_0[] = {
    {{{     0,     39,   -112}, 0, {     0,      0}, {0x00, 0xc4, 0x90, 0xff}}},
    {{{    36,     58,   -129}, 0, {     0,      0}, {0x22, 0x44, 0x9a, 0xff}}},
    {{{   103,     44,    -89}, 0, {     0,      0}, {0x52, 0x0e, 0x9f, 0xff}}},
    {{{    70,     27,    -99}, 0, {     0,      0}, {0x33, 0xa5, 0xb8, 0xff}}},
    {{{    90,     51,    -81}, 0, {     0,      0}, {0x42, 0x69, 0xe3, 0xff}}},
    {{{     0,     65,   -111}, 0, {     0,      0}, {0x00, 0x6f, 0xc2, 0xff}}},
    {{{   117,     36,    -19}, 0, {     0,      0}, {0x70, 0xc4, 0x00, 0xff}}},
    {{{    70,     21,    -50}, 0, {     0,      0}, {0x44, 0x95, 0xf7, 0xff}}},
    {{{    70,     17,     41}, 0, {     0,      0}, {0x49, 0x98, 0x07, 0xff}}},
    {{{    70,     28,     88}, 0, {     0,      0}, {0x37, 0xa0, 0x3f, 0xff}}},
    {{{   101,     53,     57}, 0, {     0,      0}, {0x53, 0x5e, 0x14, 0xff}}},
    {{{   103,     44,     80}, 0, {     0,      0}, {0x6f, 0xfe, 0x3e, 0xff}}},
    {{{    38,     70,    129}, 0, {     0,      0}, {0x27, 0x11, 0x78, 0xff}}},
    {{{    25,     51,    118}, 0, {     0,      0}, {0x14, 0xba, 0x68, 0xff}}},
    {{{     0,     78,    118}, 0, {     0,      0}, {0x00, 0x6d, 0x42, 0xff}}},
    {{{   -36,     58,   -129}, 0, {     0,      0}, {0xde, 0x44, 0x9a, 0xff}}},
    {{{   -38,     70,    129}, 0, {     0,      0}, {0xd1, 0x25, 0x70, 0xff}}},
    {{{  -101,     53,     57}, 0, {     0,      0}, {0xad, 0x5e, 0x14, 0xff}}},
    {{{  -103,     44,     80}, 0, {     0,      0}, {0x91, 0xfe, 0x3e, 0xff}}},
    {{{  -117,     36,    -19}, 0, {     0,      0}, {0x90, 0xc4, 0x00, 0xff}}},
    {{{   -70,     28,     88}, 0, {     0,      0}, {0xc9, 0xa0, 0x3f, 0xff}}},
    {{{   -90,     51,    -81}, 0, {     0,      0}, {0xbe, 0x69, 0xe3, 0xff}}},
    {{{  -103,     44,    -89}, 0, {     0,      0}, {0xae, 0x0e, 0x9f, 0xff}}},
    {{{   -70,     27,    -99}, 0, {     0,      0}, {0xcd, 0xa5, 0xb7, 0xff}}},
    {{{   -70,     21,    -50}, 0, {     0,      0}, {0xbd, 0x94, 0xf7, 0xff}}},
    {{{   -70,     17,     41}, 0, {     0,      0}, {0xb8, 0x98, 0x07, 0xff}}},
    {{{   -25,     51,    118}, 0, {     0,      0}, {0xf0, 0xbb, 0x6a, 0xff}}},
};

const Gfx koopa_shell_seg8_dl_08027258[] = {    gsSPVertex(&koopa_shell_seg8_dl_08027258_vtx32_0[0], 27, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  3,  0,  2, 0x0),
    gsSP2Triangles( 4,  2,  1, 0x0,  1,  5,  4, 0x0),
    gsSP2Triangles( 6,  2,  4, 0x0,  3,  2,  6, 0x0),
    gsSP2Triangles( 7,  3,  6, 0x0,  8,  7,  6, 0x0),
    gsSP2Triangles( 8,  6,  9, 0x0,  4, 10,  6, 0x0),
    gsSP2Triangles(11,  6, 10, 0x0,  6, 11,  9, 0x0),
    gsSP2Triangles( 9, 11, 12, 0x0, 12, 11, 10, 0x0),
    gsSP2Triangles(12, 13,  9, 0x0, 10, 14, 12, 0x0),
    gsSP2Triangles(15,  5,  1, 0x0,  0, 15,  1, 0x0),
    gsSP2Triangles(14, 16, 12, 0x0, 16, 14, 17, 0x0),
    gsSP2Triangles(17, 18, 16, 0x0, 17, 19, 18, 0x0),
    gsSP2Triangles(20, 18, 19, 0x0, 16, 18, 20, 0x0),
    gsSP2Triangles(19, 17, 21, 0x0, 21,  5, 15, 0x0),
    gsSP2Triangles(15, 22, 21, 0x0, 21, 22, 19, 0x0),
    gsSP2Triangles(22, 15,  0, 0x0, 19, 22, 23, 0x0),
    gsSP2Triangles(22,  0, 23, 0x0, 19, 23, 24, 0x0),
    gsSP2Triangles(19, 24, 25, 0x0, 20, 19, 25, 0x0),
    gsSP2Triangles(20, 26, 16, 0x0, 26, 13, 12, 0x0),
    gsSP1Triangle(12, 16, 26, 0x0),
    gsSPEndDisplayList(),
};

// 0x080273C8 - 0x08027420
const Gfx koopa_shell_seg8_dl_080273C8[] = {
    gsDPPipeSync(),
    gsSPNumLights(NUMLIGHTS_1),
    gsSPLight(&koopa_shell_seg8_lights_08026388.l, 1),
    gsSPLight(&koopa_shell_seg8_lights_08026388.a, 2),
    gsSPDisplayList(koopa_shell_seg8_dl_08027108),
    gsSPLight(&koopa_shell_seg8_lights_080263B8.l, 1),
    gsSPLight(&koopa_shell_seg8_lights_080263B8.a, 2),
    gsSPDisplayList(koopa_shell_seg8_dl_08027170),
    gsSPLight(&koopa_shell_seg8_lights_080263D0.l, 1),
    gsSPLight(&koopa_shell_seg8_lights_080263D0.a, 2),
    gsSPBranchList(koopa_shell_seg8_dl_08027258),
};

// 0x08027420 - 0x08027470
const Gfx koopa_shell_seg8_dl_08027420[] = {
    gsDPPipeSync(),
    gsSPLight(&koopa_shell_seg8_lights_080263A0.l, 1),
    gsSPLight(&koopa_shell_seg8_lights_080263A0.a, 2),
    gsSPDisplayList(koopa_shell_seg8_dl_08027108),
    gsSPLight(&koopa_shell_seg8_lights_080263B8.l, 1),
    gsSPLight(&koopa_shell_seg8_lights_080263B8.a, 2),
    gsSPDisplayList(koopa_shell_seg8_dl_08027170),
    gsSPLight(&koopa_shell_seg8_lights_080263D0.l, 1),
    gsSPLight(&koopa_shell_seg8_lights_080263D0.a, 2),
    gsSPBranchList(koopa_shell_seg8_dl_08027258),
};

// 0x08027470
static const Lights1 koopa_shell_seg8_lights_08027470 = gdSPDefLights1(
    0x3f, 0x3f, 0x3f,
    0xff, 0xff, 0xff, 0x28, 0x28, 0x28
);

// 0x08027488
static const Lights1 koopa_shell_seg8_lights_08027488 = gdSPDefLights1(
    0x38, 0x2b, 0x00,
    0xe0, 0xae, 0x00, 0x28, 0x28, 0x28
);

// 0x080274A0
ALIGNED8 static const Texture koopa_shell_seg8_texture_080274A0[] = {
#include "actors/koopa_shell/koopa_shell_front.rgba16.inc.c"
};

// 0x08027CA0
ALIGNED8 static const Texture koopa_shell_seg8_texture_08027CA0[] = {
#include "actors/koopa_shell/koopa_shell_back.rgba16.inc.c"
};

// 0x080284A0
static const Vtx koopa_shell_seg8_vertex_080284A0[] = {
    {{{   -15,     47,    -16}, 0, {   774,    814}, {0xe1, 0x74, 0xdb, 0xff}}},
    {{{     0,     29,    -44}, 0, {   468,   1346}, {0x00, 0x67, 0xb6, 0xff}}},
    {{{   -34,     23,    -31}, 0, {  1132,   1060}, {0xba, 0x63, 0xdc, 0xff}}},
    {{{   -15,     49,     15}, 0, {   770,    152}, {0xca, 0x71, 0x12, 0xff}}},
    {{{    16,     47,    -16}, 0, {   158,    814}, {0x27, 0x6f, 0xd3, 0xff}}},
    {{{    16,     49,     15}, 0, {   156,    152}, {0x2c, 0x75, 0x0e, 0xff}}},
    {{{    35,     23,    -31}, 0, {  -196,   1060}, {0x46, 0x63, 0xdc, 0xff}}},
    {{{   -36,     29,     26}, 0, {  1164,   -156}, {0xb1, 0x60, 0x16, 0xff}}},
    {{{     0,     40,     40}, 0, {   462,   -438}, {0x00, 0x75, 0x2f, 0xff}}},
    {{{    37,     29,     26}, 0, {  -236,   -154}, {0x4f, 0x60, 0x16, 0xff}}},
};

// 0x08028540
static const Vtx koopa_shell_seg8_vertex_08028540[] = {
    {{{    19,      0,     25}, 0, {   826,     98}, {0x15, 0x86, 0x18, 0xff}}},
    {{{     0,      6,     45}, 0, {   524,   -122}, {0x00, 0xa7, 0x5a, 0xff}}},
    {{{   -18,      0,     25}, 0, {   212,    100}, {0xe6, 0x88, 0x1d, 0xff}}},
    {{{   -18,      0,    -27}, 0, {   196,    712}, {0xe8, 0x88, 0xe0, 0xff}}},
    {{{    19,      0,    -27}, 0, {   810,    710}, {0x21, 0x89, 0xe5, 0xff}}},
    {{{    29,     10,     37}, 0, {   990,    -24}, {0x2f, 0xa7, 0x4c, 0xff}}},
    {{{    37,      6,     18}, 0, {  1120,    194}, {0x39, 0x91, 0x10, 0xff}}},
    {{{   -36,      6,     18}, 0, {   -88,    190}, {0xc7, 0x91, 0x10, 0xff}}},
    {{{   -28,     10,     37}, 0, {    52,    -26}, {0xd0, 0xa8, 0x4c, 0xff}}},
    {{{    27,     10,    -39}, 0, {   932,    864}, {0x22, 0xa1, 0xb5, 0xff}}},
    {{{   -26,     10,    -39}, 0, {    58,    862}, {0xd7, 0xa2, 0xb7, 0xff}}},
    {{{   -36,      8,    -19}, 0, {   -98,    628}, {0xc0, 0x97, 0xe6, 0xff}}},
    {{{     0,     15,    -45}, 0, {   492,    932}, {0x00, 0xb2, 0x9d, 0xff}}},
    {{{    37,      8,    -19}, 0, {  1104,    632}, {0x40, 0x97, 0xe6, 0xff}}},
};

// 0x08028620
static const Vtx koopa_shell_seg8_vertex_08028620[] = {
    {{{   -14,     33,     54}, 0, {     0,      0}, {0xcd, 0x27, 0x6d, 0xff}}},
    {{{   -28,     10,     37}, 0, {     0,      0}, {0xd0, 0xa8, 0x4c, 0xff}}},
    {{{     0,      6,     45}, 0, {     0,      0}, {0x00, 0xa7, 0x5a, 0xff}}},
    {{{    15,     33,     54}, 0, {     0,      0}, {0x32, 0x27, 0x6d, 0xff}}},
    {{{    29,     10,     37}, 0, {     0,      0}, {0x2f, 0xa7, 0x4c, 0xff}}},
};

// 0x08028670


// 0x08028760


// 0x08028850


// 0x080288E0 - 0x08028978
const Gfx koopa_shell_seg8_dl_080288E0[] = {
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, koopa_shell_seg8_texture_08027CA0),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 32 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSPLight(&koopa_shell_seg8_lights_08027470.l, 1),
    gsSPLight(&koopa_shell_seg8_lights_08027470.a, 2),
    gsSPVertex(koopa_shell_seg8_vertex_080284A0, 10, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  2,  3,  0, 0x0),
    gsSP2Triangles( 0,  4,  1, 0x0,  0,  5,  4, 0x0),
    gsSP2Triangles( 0,  3,  5, 0x0,  1,  4,  6, 0x0),
    gsSP2Triangles( 6,  4,  5, 0x0,  3,  2,  7, 0x0),
    gsSP2Triangles( 3,  8,  5, 0x0,  8,  3,  7, 0x0),
    gsSP2Triangles( 9,  5,  8, 0x0,  9,  6,  5, 0x0),
    gsSPEndDisplayList(),
};

// 0x08028978 - 0x08028A20
const Gfx koopa_shell_seg8_dl_08028978[] = {
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, koopa_shell_seg8_texture_080274A0),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 32 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSPVertex(koopa_shell_seg8_vertex_08028540, 14, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  3,  4,  0, 0x0),
    gsSP2Triangles( 0,  2,  3, 0x0,  1,  0,  5, 0x0),
    gsSP2Triangles( 4,  6,  0, 0x0,  6,  5,  0, 0x0),
    gsSP2Triangles( 3,  2,  7, 0x0,  8,  2,  1, 0x0),
    gsSP2Triangles( 2,  8,  7, 0x0,  9,  4,  3, 0x0),
    gsSP2Triangles( 3, 10,  9, 0x0,  7, 11,  3, 0x0),
    gsSP2Triangles(11, 10,  3, 0x0, 10, 12,  9, 0x0),
    gsSP2Triangles( 4,  9, 13, 0x0,  4, 13,  6, 0x0),
    gsSPEndDisplayList(),
};

// 0x08028A20 - 0x08028B78
static const Vtx koopa_shell_seg8_dl_08028A20_vtx32_0[] = {
    {{{   -34,     23,    -31}, 0, {     0,      0}, {0xba, 0x63, 0xdc, 0xff}}},
    {{{   -40,     17,    -38}, 0, {     0,      0}, {0xb5, 0xf3, 0x9b, 0xff}}},
    {{{   -50,     14,     -6}, 0, {     0,      0}, {0x86, 0xe2, 0xee, 0xff}}},
    {{{     0,     22,    -56}, 0, {     0,      0}, {0x00, 0x3d, 0x92, 0xff}}},
    {{{     0,     15,    -45}, 0, {     0,      0}, {0x00, 0xb2, 0x9d, 0xff}}},
    {{{   -26,     10,    -39}, 0, {     0,      0}, {0xd7, 0xa2, 0xb7, 0xff}}},
    {{{    41,     17,    -38}, 0, {     0,      0}, {0x4a, 0xf3, 0x9b, 0xff}}},
    {{{    27,     10,    -39}, 0, {     0,      0}, {0x22, 0xa1, 0xb5, 0xff}}},
    {{{   -36,      8,    -19}, 0, {     0,      0}, {0xc0, 0x97, 0xe6, 0xff}}},
    {{{   -36,     29,     26}, 0, {     0,      0}, {0xb1, 0x60, 0x16, 0xff}}},
    {{{   -44,     16,     32}, 0, {     0,      0}, {0x97, 0xe5, 0x41, 0xff}}},
    {{{   -14,     33,     54}, 0, {     0,      0}, {0xcd, 0x27, 0x6d, 0xff}}},
    {{{     0,     40,     40}, 0, {     0,      0}, {0x00, 0x75, 0x2f, 0xff}}},
    {{{    15,     33,     54}, 0, {     0,      0}, {0x32, 0x27, 0x6d, 0xff}}},
    {{{   -28,     10,     37}, 0, {     0,      0}, {0xd0, 0xa8, 0x4c, 0xff}}},
    {{{   -36,      6,     18}, 0, {     0,      0}, {0xc7, 0x91, 0x10, 0xff}}},
    {{{     0,     29,    -44}, 0, {     0,      0}, {0x00, 0x67, 0xb6, 0xff}}},
    {{{    35,     23,    -31}, 0, {     0,      0}, {0x46, 0x63, 0xdc, 0xff}}},
    {{{    37,     29,     26}, 0, {     0,      0}, {0x4f, 0x60, 0x16, 0xff}}},
    {{{    45,     16,     32}, 0, {     0,      0}, {0x69, 0xe5, 0x41, 0xff}}},
    {{{    29,     10,     37}, 0, {     0,      0}, {0x2f, 0xa7, 0x4c, 0xff}}},
    {{{    51,     14,     -6}, 0, {     0,      0}, {0x7a, 0xe2, 0xee, 0xff}}},
    {{{    37,      8,    -19}, 0, {     0,      0}, {0x40, 0x97, 0xe6, 0xff}}},
    {{{    37,      6,     18}, 0, {     0,      0}, {0x39, 0x91, 0x10, 0xff}}},
};

const Gfx koopa_shell_seg8_dl_08028A20[] = {
    gsSPLight(&koopa_shell_seg8_lights_08027488.l, 1),
    gsSPLight(&koopa_shell_seg8_lights_08027488.a, 2),
    gsSPVertex(koopa_shell_seg8_vertex_08028620, 5, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  3,  0,  2, 0x0),
    gsSP1Triangle( 2,  4,  3, 0x0),
    gsSPLight(&koopa_shell_seg8_lights_08027470.l, 1),
    gsSPLight(&koopa_shell_seg8_lights_08027470.a, 2),
    gsSPVertex(&koopa_shell_seg8_dl_08028A20_vtx32_0[0], 24, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  3,  1,  0, 0x0),
    gsSP2Triangles( 4,  1,  3, 0x0,  2,  1,  5, 0x0),
    gsSP2Triangles( 1,  4,  5, 0x0,  4,  3,  6, 0x0),
    gsSP2Triangles( 7,  4,  6, 0x0,  2,  5,  8, 0x0),
    gsSP2Triangles( 2,  9,  0, 0x0,  9,  2, 10, 0x0),
    gsSP2Triangles( 9, 10, 11, 0x0, 11, 12,  9, 0x0),
    gsSP2Triangles(12, 11, 13, 0x0, 11, 10, 14, 0x0),
    gsSP2Triangles(15, 14, 10, 0x0, 10,  2, 15, 0x0),
    gsSP2Triangles( 2,  8, 15, 0x0,  3,  0, 16, 0x0),
    gsSP2Triangles( 3, 16, 17, 0x0, 17,  6,  3, 0x0),
    gsSP2Triangles(18, 12, 13, 0x0, 13, 19, 18, 0x0),
    gsSP2Triangles(20, 19, 13, 0x0,  7,  6, 21, 0x0),
    gsSP2Triangles(21,  6, 17, 0x0, 17, 18, 21, 0x0),
    gsSP2Triangles(19, 21, 18, 0x0, 22,  7, 21, 0x0),
    gsSP2Triangles(23, 21, 19, 0x0, 23, 22, 21, 0x0),
    gsSP1Triangle(23, 19, 20, 0x0),
    gsSPEndDisplayList(),
};

// 0x08028B78 - 0x08028BE8
const Gfx koopa_shell_seg8_dl_08028B78[] = {
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_MODULATERGB, G_CC_MODULATERGB),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, G_TX_LOADTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, G_TX_RENDERTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, 5, G_TX_NOLOD),
    gsDPSetTileSize(0, 0, 0, (32 - 1) << G_TEXTURE_IMAGE_FRAC, (32 - 1) << G_TEXTURE_IMAGE_FRAC),
    gsSPDisplayList(koopa_shell_seg8_dl_080288E0),
    gsSPDisplayList(koopa_shell_seg8_dl_08028978),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
    gsSPDisplayList(koopa_shell_seg8_dl_08028A20),
    gsSPEndDisplayList(),
};
