// 0x0700A1E0 - 0x0700A2E0


// 0x0700A2E0 - 0x0700A3D0


// 0x0700A3D0 - 0x0700A4B8
static const Vtx cotmc_seg7_dl_0700A3D0_vtx32_0[] = {
    {{{  -262,      0,  -3526}, 0, {     0,      0}, {0x00, 0x00, 0x00, 0xff}}},
    {{{  -286,      0,  -3582}, 0, {     0,      0}, {0x00, 0x00, 0x00, 0xff}}},
    {{{  -292,      0,  -3520}, 0, {     0,      0}, {0x00, 0x00, 0x00, 0xff}}},
    {{{  -257,      0,  -3270}, 0, {     0,      0}, {0x00, 0x00, 0x00, 0xff}}},
    {{{  -227,      0,  -3275}, 0, {     0,      0}, {0x00, 0x00, 0x00, 0xff}}},
    {{{   -84,      0,  -3544}, 0, {     0,      0}, {0x00, 0x00, 0x00, 0xff}}},
    {{{  -563,      0,  -3860}, 0, {     0,      0}, {0x00, 0x00, 0x00, 0xff}}},
    {{{  -563,      0,  -1632}, 0, {     0,      0}, {0x00, 0x00, 0x00, 0xff}}},
    {{{  -157,      0,  -1841}, 0, {     0,      0}, {0x00, 0x00, 0x00, 0xff}}},
    {{{   -35,      0,  -2711}, 0, {     0,      0}, {0x00, 0x00, 0x00, 0xff}}},
    {{{   -64,      0,  -3354}, 0, {     0,      0}, {0x00, 0x00, 0x00, 0xff}}},
    {{{    36,      0,  -3565}, 0, {     0,      0}, {0x00, 0x00, 0x00, 0xff}}},
    {{{    50,      0,  -3387}, 0, {     0,      0}, {0x00, 0x00, 0x00, 0xff}}},
    {{{   156,      0,  -3599}, 0, {     0,      0}, {0x00, 0x00, 0x00, 0xff}}},
    {{{   166,      0,  -3407}, 0, {     0,      0}, {0x00, 0x00, 0x00, 0xff}}},
    {{{   330,      0,  -3661}, 0, {     0,      0}, {0x00, 0x00, 0x00, 0xff}}},
    {{{   341,      0,  -3413}, 0, {     0,      0}, {0x00, 0x00, 0x00, 0xff}}},
    {{{   403,      0,  -3337}, 0, {     0,      0}, {0x00, 0x00, 0x00, 0xff}}},
    {{{   255,      0,  -4466}, 0, {     0,      0}, {0x00, 0x00, 0x00, 0xff}}},
    {{{   564,      0,  -3278}, 0, {     0,      0}, {0x00, 0x00, 0x00, 0xff}}},
    {{{   564,      0,  -3999}, 0, {     0,      0}, {0x00, 0x00, 0x00, 0xff}}},
    {{{   564,      0,  -4781}, 0, {     0,      0}, {0x00, 0x00, 0x00, 0xff}}},
    {{{   388,      0,  -4829}, 0, {     0,      0}, {0x00, 0x00, 0x00, 0xff}}},
    {{{   537,      0,  -4960}, 0, {     0,      0}, {0x00, 0x00, 0x00, 0xff}}},
    {{{   628,      0,  -4947}, 0, {     0,      0}, {0x00, 0x00, 0x00, 0xff}}},
    {{{   661,      0,  -4877}, 0, {     0,      0}, {0x00, 0x00, 0x00, 0xff}}},
};

static const Gfx cotmc_seg7_dl_0700A3D0[] = {    gsSPVertex(&cotmc_seg7_dl_0700A3D0_vtx32_0[0], 26, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  3,  0,  2, 0x0),
    gsSP2Triangles( 3,  4,  0, 0x0,  4,  5,  0, 0x0),
    gsSP2Triangles( 2,  1,  6, 0x0,  7,  3,  2, 0x0),
    gsSP2Triangles( 2,  6,  7, 0x0,  7,  8,  3, 0x0),
    gsSP2Triangles( 8,  9,  3, 0x0,  9,  4,  3, 0x0),
    gsSP2Triangles( 4, 10,  5, 0x0, 10, 11,  5, 0x0),
    gsSP2Triangles(10, 12, 11, 0x0, 12, 13, 11, 0x0),
    gsSP2Triangles(12, 14, 13, 0x0, 14, 15, 13, 0x0),
    gsSP2Triangles(14, 16, 15, 0x0, 15, 16, 17, 0x0),
    gsSP2Triangles(18, 15, 17, 0x0, 18, 17, 19, 0x0),
    gsSP2Triangles(18, 19, 20, 0x0, 18, 20, 21, 0x0),
    gsSP2Triangles(22, 18, 21, 0x0, 22, 21, 23, 0x0),
    gsSP2Triangles(21, 24, 23, 0x0, 21, 25, 24, 0x0),
    gsSPEndDisplayList(),
};

// 0x0700A4B8 - 0x0700A508
const Gfx cotmc_seg7_dl_0700A4B8[] = {
    gsDPPipeSync(),
    gsDPSetEnvColor(255, 255, 255, 180),
    gsDPSetCombineMode(G_CC_SHADEFADEA, G_CC_SHADEFADEA),
    gsSPClearGeometryMode(G_LIGHTING),
    gsSPDisplayList(cotmc_seg7_dl_0700A3D0),
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
    gsSPSetGeometryMode(G_LIGHTING),
    gsDPSetEnvColor(255, 255, 255, 255),
    gsSPEndDisplayList(),
};
