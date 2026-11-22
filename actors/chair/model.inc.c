// Chair

// Unreferenced light group
UNUSED static const Lights1 chair_lights_unused = gdSPDefLights1(
    0x19, 0x0d, 0x06,
    0x64, 0x36, 0x1a, 0x28, 0x28, 0x28
);

// 0x05003060
ALIGNED8 static const Texture chair_seg5_texture_05003060[] = {
#include "actors/chair/chair_front.rgba16.inc.c"
};

// 0x05003860
ALIGNED8 static const Texture chair_seg5_texture_05003860[] = {
#include "actors/chair/chair_leg.rgba16.inc.c"
};

// 0x05004060
ALIGNED8 static const Texture chair_seg5_texture_05004060[] = {
#include "actors/chair/chair_bottom.rgba16.inc.c"
};

// unreferenced
// 0x05004460
ALIGNED8 static const Texture chair_seg5_texture_05004460[] = {
#include "actors/chair/chair_surface_unused.rgba16.inc.c"
};

// 0x05004C60
static const Lights1 chair_seg5_lights_05004C60 = gdSPDefLights1(
    0x47, 0x47, 0x47,
    0xb2, 0xb2, 0xb2, 0x28, 0x28, 0x28
);

// 0x05004C78


// 0x05004D78


// 0x05004E38 - 0x05004EE8
static const Vtx chair_seg5_dl_05004E38_vtx32_0[] = {
    {{{   334,    -20,      1}, 0, {   474,   -182}, {0x77, 0x00, 0xd6, 0xff}}},
    {{{   287,    -20,   -132}, 0, {  1212,     58}, {0x77, 0x00, 0xd6, 0xff}}},
    {{{   334,     25,      1}, 0, {   474,   -182}, {0x77, 0x00, 0xd6, 0xff}}},
    {{{   287,     25,   -132}, 0, {  1212,     58}, {0x77, 0x00, 0xd6, 0xff}}},
    {{{   334,     25,      1}, 0, {   474,   -182}, {0x77, 0x00, 0x2a, 0xff}}},
    {{{   287,     25,    134}, 0, {  -262,     58}, {0x77, 0x00, 0x2a, 0xff}}},
    {{{   334,    -20,      1}, 0, {   474,   -182}, {0x77, 0x00, 0x2a, 0xff}}},
    {{{   287,    -20,    134}, 0, {  -262,     58}, {0x77, 0x00, 0x2a, 0xff}}},
    {{{   287,    -20,   -132}, 0, {  1212,     58}, {0x00, 0x81, 0x00, 0xff}}},
    {{{   334,    -20,      1}, 0, {   474,   -182}, {0x00, 0x81, 0x00, 0xff}}},
    {{{   287,    -20,    134}, 0, {  -262,     58}, {0x00, 0x81, 0x00, 0xff}}},
    {{{    -7,    -20,    -91}, 0, {   986,   1536}, {0x00, 0x81, 0x00, 0xff}}},
    {{{    -7,    -20,     93}, 0, {   -34,   1536}, {0x00, 0x81, 0x00, 0xff}}},
    {{{    -7,    -20,    -91}, 0, {   986,   1536}, {0xef, 0x00, 0x83, 0xff}}},
    {{{    -7,     25,    -91}, 0, {   986,   1536}, {0xef, 0x00, 0x83, 0xff}}},
    {{{   287,    -20,   -132}, 0, {  1212,     58}, {0xef, 0x00, 0x83, 0xff}}},
    {{{   287,     25,   -132}, 0, {  1212,     58}, {0xef, 0x00, 0x83, 0xff}}},
    {{{   287,     25,    134}, 0, {  -262,     58}, {0x00, 0x7f, 0x00, 0xff}}},
    {{{   334,     25,      1}, 0, {   474,   -182}, {0x00, 0x7f, 0x00, 0xff}}},
    {{{   287,     25,   -132}, 0, {  1212,     58}, {0x00, 0x7f, 0x00, 0xff}}},
    {{{    -7,     25,     93}, 0, {   -34,   1536}, {0x00, 0x7f, 0x00, 0xff}}},
    {{{    -7,     25,    -91}, 0, {   986,   1536}, {0x00, 0x7f, 0x00, 0xff}}},
    {{{    -7,    -20,     93}, 0, {   -34,   1536}, {0xef, 0x00, 0x7d, 0xff}}},
    {{{   287,    -20,    134}, 0, {  -262,     58}, {0xef, 0x00, 0x7d, 0xff}}},
    {{{   287,     25,    134}, 0, {  -262,     58}, {0xef, 0x00, 0x7d, 0xff}}},
    {{{    -7,     25,     93}, 0, {   -34,   1536}, {0xef, 0x00, 0x7d, 0xff}}},
};

const Gfx chair_seg5_dl_05004E38[] = {
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, chair_seg5_texture_05003060),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 32 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSPLight(&chair_seg5_lights_05004C60.l, 1),
    gsSPLight(&chair_seg5_lights_05004C60.a, 2),
    gsSPVertex(&chair_seg5_dl_05004E38_vtx32_0[0], 26, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  1,  3,  2, 0x0),
    gsSP2Triangles( 4,  5,  6, 0x0,  5,  7,  6, 0x0),
    gsSP2Triangles( 8,  9, 10, 0x0, 11,  8, 10, 0x0),
    gsSP2Triangles(12, 11, 10, 0x0, 13, 14, 15, 0x0),
    gsSP2Triangles(14, 16, 15, 0x0, 17, 18, 19, 0x0),
    gsSP2Triangles(20, 17, 19, 0x0, 21, 20, 19, 0x0),
    gsSP2Triangles(22, 23, 24, 0x0, 25, 22, 24, 0x0),
    gsSPEndDisplayList(),
};

// 0x05004EE8 - 0x05004F58
const Gfx chair_seg5_dl_05004EE8[] = {
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_MODULATERGB, G_CC_MODULATERGB),
    gsSPClearGeometryMode(G_SHADING_SMOOTH),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, G_TX_LOADTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, G_TX_RENDERTILE, 0, G_TX_CLAMP, 5, G_TX_NOLOD, G_TX_CLAMP, 5, G_TX_NOLOD),
    gsDPSetTileSize(0, 0, 0, (32 - 1) << G_TEXTURE_IMAGE_FRAC, (32 - 1) << G_TEXTURE_IMAGE_FRAC),
    gsSPDisplayList(chair_seg5_dl_05004E38),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
    gsSPSetGeometryMode(G_SHADING_SMOOTH),
    gsSPEndDisplayList(),
};

// 0x05004F58
static const Lights1 chair_seg5_lights_05004F58 = gdSPDefLights1(
    0x47, 0x47, 0x47,
    0xb2, 0xb2, 0xb2, 0x28, 0x28, 0x28
);

// 0x05004F70


// 0x05005070


// 0x050050F0 - 0x05005190
static const Vtx chair_seg5_dl_050050F0_vtx32_0[] = {
    {{{   208,    -20,   -125}, 0, {  1934,      0}, {0x00, 0x00, 0x81, 0xff}}},
    {{{   -38,     24,   -125}, 0, {  1935,    990}, {0x00, 0x00, 0x81, 0xff}}},
    {{{   208,     24,   -125}, 0, {  1934,      0}, {0x00, 0x00, 0x81, 0xff}}},
    {{{   -38,    -20,   -125}, 0, {  1935,    990}, {0x00, 0x00, 0x81, 0xff}}},
    {{{   208,     24,   -125}, 0, {  1934,      0}, {0x00, 0x7f, 0x00, 0xff}}},
    {{{   -38,     24,    127}, 0, {   -20,    990}, {0x00, 0x7f, 0x00, 0xff}}},
    {{{   208,     24,    127}, 0, {   -21,      0}, {0x00, 0x7f, 0x00, 0xff}}},
    {{{   -38,     24,   -125}, 0, {  1935,    990}, {0x00, 0x7f, 0x00, 0xff}}},
    {{{   208,    -20,    127}, 0, {   -21,      0}, {0x7f, 0x00, 0x00, 0xff}}},
    {{{   208,     24,   -125}, 0, {  1934,      0}, {0x7f, 0x00, 0x00, 0xff}}},
    {{{   208,     24,    127}, 0, {   -21,      0}, {0x7f, 0x00, 0x00, 0xff}}},
    {{{   208,    -20,   -125}, 0, {  1934,      0}, {0x7f, 0x00, 0x00, 0xff}}},
    {{{   -38,    -20,   -125}, 0, {  1935,    990}, {0x81, 0x00, 0x00, 0xff}}},
    {{{   -38,     24,    127}, 0, {   -20,    990}, {0x81, 0x00, 0x00, 0xff}}},
    {{{   -38,     24,   -125}, 0, {  1935,    990}, {0x81, 0x00, 0x00, 0xff}}},
    {{{   -38,    -20,    127}, 0, {   -20,    990}, {0x81, 0x00, 0x00, 0xff}}},
    {{{   208,    -20,    127}, 0, {   -21,      0}, {0x00, 0x81, 0x00, 0xff}}},
    {{{   -38,    -20,   -125}, 0, {  1935,    990}, {0x00, 0x81, 0x00, 0xff}}},
    {{{   208,    -20,   -125}, 0, {  1934,      0}, {0x00, 0x81, 0x00, 0xff}}},
    {{{   -38,    -20,    127}, 0, {   -20,    990}, {0x00, 0x81, 0x00, 0xff}}},
    {{{   -38,    -20,    127}, 0, {   577,    990}, {0x00, 0x00, 0x7f, 0xff}}},
    {{{   208,    -20,    127}, 0, {   511,      0}, {0x00, 0x00, 0x7f, 0xff}}},
    {{{   208,     24,    127}, 0, {   511,      0}, {0x00, 0x00, 0x7f, 0xff}}},
    {{{   -38,     24,    127}, 0, {   577,    990}, {0x00, 0x00, 0x7f, 0xff}}},
};

const Gfx chair_seg5_dl_050050F0[] = {
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, chair_seg5_texture_05004060),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 16 * 32 - 1, CALC_DXT(16, G_IM_SIZ_16b_BYTES)),
    gsSPLight(&chair_seg5_lights_05004F58.l, 1),
    gsSPLight(&chair_seg5_lights_05004F58.a, 2),
    gsSPVertex(&chair_seg5_dl_050050F0_vtx32_0[0], 24, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  0,  3,  1, 0x0),
    gsSP2Triangles( 4,  5,  6, 0x0,  4,  7,  5, 0x0),
    gsSP2Triangles( 8,  9, 10, 0x0,  8, 11,  9, 0x0),
    gsSP2Triangles(12, 13, 14, 0x0, 12, 15, 13, 0x0),
    gsSP2Triangles(16, 17, 18, 0x0, 16, 19, 17, 0x0),
    gsSP2Triangles(20, 21, 22, 0x0, 20, 22, 23, 0x0),
    gsSPEndDisplayList(),
};

// 0x05005190 - 0x05005200
const Gfx chair_seg5_dl_05005190[] = {
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_MODULATERGB, G_CC_MODULATERGB),
    gsSPClearGeometryMode(G_SHADING_SMOOTH),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, G_TX_LOADTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 4, 0, G_TX_RENDERTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, 4, G_TX_NOLOD),
    gsDPSetTileSize(0, 0, 0, (16 - 1) << G_TEXTURE_IMAGE_FRAC, (32 - 1) << G_TEXTURE_IMAGE_FRAC),
    gsSPDisplayList(chair_seg5_dl_050050F0),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
    gsSPSetGeometryMode(G_SHADING_SMOOTH),
    gsSPEndDisplayList(),
};

// 0x05005200
static const Lights1 chair_seg5_lights_05005200 = gdSPDefLights1(
    0x47, 0x47, 0x47,
    0xb2, 0xb2, 0xb2, 0x28, 0x28, 0x28
);

// 0x05005218


// 0x05005308


// 0x05005378 - 0x05005408
static const Vtx chair_seg5_dl_05005378_vtx32_0[] = {
    {{{   146,    -22,    104}, 0, {   998,    990}, {0xef, 0x00, 0x7d, 0xff}}},
    {{{   146,     26,    104}, 0, {   998,    990}, {0xef, 0x00, 0x7d, 0xff}}},
    {{{    -8,     26,     82}, 0, {   886,    -24}, {0xef, 0x00, 0x7d, 0xff}}},
    {{{    -8,    -22,     82}, 0, {   886,    -24}, {0xef, 0x00, 0x7d, 0xff}}},
    {{{   146,     26,    104}, 0, {   998,    990}, {0x7f, 0x00, 0x00, 0xff}}},
    {{{   146,    -22,   -102}, 0, {     0,    990}, {0x7f, 0x00, 0x00, 0xff}}},
    {{{   146,     26,   -102}, 0, {     0,    990}, {0x7f, 0x00, 0x00, 0xff}}},
    {{{   146,    -22,    104}, 0, {   998,    990}, {0x7f, 0x00, 0x00, 0xff}}},
    {{{   146,     26,    104}, 0, {   998,    990}, {0x00, 0x7f, 0x00, 0xff}}},
    {{{    -8,     26,    -79}, 0, {    78,    -24}, {0x00, 0x7f, 0x00, 0xff}}},
    {{{    -8,     26,     82}, 0, {   886,    -24}, {0x00, 0x7f, 0x00, 0xff}}},
    {{{   146,     26,   -102}, 0, {     0,    990}, {0x00, 0x7f, 0x00, 0xff}}},
    {{{   146,    -22,   -102}, 0, {     0,    990}, {0x00, 0x81, 0x00, 0xff}}},
    {{{    -8,    -22,     82}, 0, {   886,    -24}, {0x00, 0x81, 0x00, 0xff}}},
    {{{    -8,    -22,    -79}, 0, {    78,    -24}, {0x00, 0x81, 0x00, 0xff}}},
    {{{   146,    -22,    104}, 0, {   998,    990}, {0x00, 0x81, 0x00, 0xff}}},
    {{{   146,     26,   -102}, 0, {     0,    990}, {0xee, 0x00, 0x83, 0xff}}},
    {{{   146,    -22,   -102}, 0, {     0,    990}, {0xee, 0x00, 0x83, 0xff}}},
    {{{    -8,    -22,    -79}, 0, {    78,    -24}, {0xee, 0x00, 0x83, 0xff}}},
    {{{    -8,     26,    -79}, 0, {    78,    -24}, {0xee, 0x00, 0x83, 0xff}}},
};

const Gfx chair_seg5_dl_05005378[] = {
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, chair_seg5_texture_05003860),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 32 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSPLight(&chair_seg5_lights_05005200.l, 1),
    gsSPLight(&chair_seg5_lights_05005200.a, 2),
    gsSPVertex(&chair_seg5_dl_05005378_vtx32_0[0], 20, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  0,  2,  3, 0x0),
    gsSP2Triangles( 4,  5,  6, 0x0,  4,  7,  5, 0x0),
    gsSP2Triangles( 8,  9, 10, 0x0,  8, 11,  9, 0x0),
    gsSP2Triangles(12, 13, 14, 0x0, 12, 15, 13, 0x0),
    gsSP2Triangles(16, 17, 18, 0x0, 16, 18, 19, 0x0),
    gsSPEndDisplayList(),
};

// 0x05005408 - 0x05005478
const Gfx chair_seg5_dl_05005408[] = {
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_MODULATERGB, G_CC_MODULATERGB),
    gsSPClearGeometryMode(G_SHADING_SMOOTH),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, G_TX_LOADTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, G_TX_RENDERTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, 5, G_TX_NOLOD),
    gsDPSetTileSize(0, 0, 0, (32 - 1) << G_TEXTURE_IMAGE_FRAC, (32 - 1) << G_TEXTURE_IMAGE_FRAC),
    gsSPDisplayList(chair_seg5_dl_05005378),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
    gsSPSetGeometryMode(G_SHADING_SMOOTH),
    gsSPEndDisplayList(),
};

// 0x05005478
static const Lights1 chair_seg5_lights_05005478 = gdSPDefLights1(
    0x47, 0x47, 0x47,
    0xb2, 0xb2, 0xb2, 0x28, 0x28, 0x28
);

// 0x05005490


// 0x05005580


// 0x050055F0 - 0x05005680
static const Vtx chair_seg5_dl_050055F0_vtx32_0[] = {
    {{{   146,    -19,    104}, 0, {   998,    990}, {0xef, 0x00, 0x7d, 0xff}}},
    {{{   146,     29,    104}, 0, {   998,    990}, {0xef, 0x00, 0x7d, 0xff}}},
    {{{    -8,     29,     82}, 0, {   886,    -40}, {0xef, 0x00, 0x7d, 0xff}}},
    {{{    -8,    -19,     82}, 0, {   886,    -40}, {0xef, 0x00, 0x7d, 0xff}}},
    {{{   146,     29,    104}, 0, {   998,    990}, {0x7f, 0x00, 0x00, 0xff}}},
    {{{   146,    -19,   -102}, 0, {     0,    990}, {0x7f, 0x00, 0x00, 0xff}}},
    {{{   146,     29,   -102}, 0, {     0,    990}, {0x7f, 0x00, 0x00, 0xff}}},
    {{{   146,    -19,    104}, 0, {   998,    990}, {0x7f, 0x00, 0x00, 0xff}}},
    {{{   146,     29,    104}, 0, {   998,    990}, {0x00, 0x7f, 0x00, 0xff}}},
    {{{    -8,     29,    -79}, 0, {    78,    -40}, {0x00, 0x7f, 0x00, 0xff}}},
    {{{    -8,     29,     82}, 0, {   886,    -40}, {0x00, 0x7f, 0x00, 0xff}}},
    {{{   146,     29,   -102}, 0, {     0,    990}, {0x00, 0x7f, 0x00, 0xff}}},
    {{{   146,    -19,   -102}, 0, {     0,    990}, {0x00, 0x81, 0x00, 0xff}}},
    {{{    -8,    -19,     82}, 0, {   886,    -40}, {0x00, 0x81, 0x00, 0xff}}},
    {{{    -8,    -19,    -79}, 0, {    78,    -40}, {0x00, 0x81, 0x00, 0xff}}},
    {{{   146,    -19,    104}, 0, {   998,    990}, {0x00, 0x81, 0x00, 0xff}}},
    {{{   146,     29,   -102}, 0, {     0,    990}, {0xee, 0x00, 0x83, 0xff}}},
    {{{   146,    -19,   -102}, 0, {     0,    990}, {0xee, 0x00, 0x83, 0xff}}},
    {{{    -8,    -19,    -79}, 0, {    78,    -40}, {0xee, 0x00, 0x83, 0xff}}},
    {{{    -8,     29,    -79}, 0, {    78,    -40}, {0xee, 0x00, 0x83, 0xff}}},
};

const Gfx chair_seg5_dl_050055F0[] = {
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, chair_seg5_texture_05003860),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 32 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSPLight(&chair_seg5_lights_05005478.l, 1),
    gsSPLight(&chair_seg5_lights_05005478.a, 2),
    gsSPVertex(&chair_seg5_dl_050055F0_vtx32_0[0], 20, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  0,  2,  3, 0x0),
    gsSP2Triangles( 4,  5,  6, 0x0,  4,  7,  5, 0x0),
    gsSP2Triangles( 8,  9, 10, 0x0,  8, 11,  9, 0x0),
    gsSP2Triangles(12, 13, 14, 0x0, 12, 15, 13, 0x0),
    gsSP2Triangles(16, 17, 18, 0x0, 16, 18, 19, 0x0),
    gsSPEndDisplayList(),
};

// 0x05005680 - 0x050056F0
const Gfx chair_seg5_dl_05005680[] = {
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_MODULATERGB, G_CC_MODULATERGB),
    gsSPClearGeometryMode(G_SHADING_SMOOTH),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, G_TX_LOADTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, G_TX_RENDERTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, 5, G_TX_NOLOD),
    gsDPSetTileSize(0, 0, 0, (32 - 1) << G_TEXTURE_IMAGE_FRAC, (32 - 1) << G_TEXTURE_IMAGE_FRAC),
    gsSPDisplayList(chair_seg5_dl_050055F0),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
    gsSPSetGeometryMode(G_SHADING_SMOOTH),
    gsSPEndDisplayList(),
};
