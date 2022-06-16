#include "lvgl/lvgl.h"

/*******************************************************************************
 * Size: 100 px
 * Bpp: 4
 * Opts: 
 ******************************************************************************/

#ifndef MORGANITE_100
#define MORGANITE_100 1
#endif

#if MORGANITE_100

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t gylph_bitmap[] = {
    /* U+30 "0" */
    0x0, 0xff, 0xe4, 0x89, 0x1a, 0xa9, 0x98, 0xef,
    0x44, 0x4e, 0xf3, 0x31, 0x50, 0xc8, 0x40, 0x3f,
    0xfb, 0x2, 0x8d, 0x37, 0xbf, 0xdb, 0x95, 0x49,
    0x94, 0x44, 0xef, 0x44, 0x53, 0x2a, 0xbc, 0xde,
    0xfd, 0xb8, 0x63, 0x10, 0xf, 0xfe, 0x69, 0x2d,
    0x6f, 0x5c, 0xb2, 0x10, 0x7, 0xff, 0x34, 0x91,
    0xe7, 0x3f, 0x21, 0x48, 0x3, 0xff, 0x8c, 0x4d,
    0x79, 0x4a, 0x40, 0x1f, 0xfd, 0x81, 0x37, 0xac,
    0xa5, 0x10, 0xf, 0xfe, 0x9, 0xc7, 0xca, 0x8,
    0x7, 0xff, 0x7c, 0x56, 0xb5, 0xc8, 0x3, 0xf8,
    0x9f, 0xdc, 0x80, 0x3f, 0xfc, 0xa7, 0x12, 0xa2,
    0x1, 0xe2, 0xaa, 0x18, 0x7, 0xff, 0xa5, 0x25,
    0x84, 0x3, 0x12, 0xa1, 0x0, 0x7f, 0xf2, 0x8d,
    0xeb, 0x37, 0x6c, 0xa6, 0x20, 0xf, 0xfe, 0x51,
    0xe3, 0x88, 0x4, 0xfa, 0x60, 0x1f, 0xfc, 0x93,
    0x8e, 0x85, 0x32, 0x28, 0xd6, 0x79, 0xc8, 0x3,
    0xff, 0x92, 0xbe, 0xa0, 0x1, 0x31, 0x0, 0xff,
    0xe4, 0x95, 0xa9, 0x0, 0x7f, 0x1d, 0xa0, 0x80,
    0x7f, 0xf2, 0x4, 0xc4, 0x0, 0x62, 0xc0, 0x1f,
    0xfc, 0x97, 0x22, 0x0, 0x7f, 0xc5, 0xc4, 0x1,
    0xff, 0xc9, 0x63, 0x10, 0x7, 0x80, 0x7f, 0xf2,
    0xc4, 0x3, 0xff, 0x80, 0x22, 0x70, 0xf, 0xff,
    0xf8, 0x7, 0xff, 0xfc, 0x3, 0xff, 0xfe, 0x1,
    0xff, 0xff, 0x0, 0xff, 0xff, 0x80, 0x7f, 0xff,
    0xc0, 0x3f, 0xff, 0xe0, 0x1f, 0xff, 0xf0, 0xf,
    0xff, 0xf8, 0x7, 0xff, 0xfc, 0x3, 0xff, 0xfe,
    0x1, 0xff, 0xff, 0x0, 0xff, 0xff, 0x80, 0x7f,
    0xff, 0xc0, 0x3f, 0xff, 0xe0, 0x1f, 0xff, 0xf0,
    0xf, 0xff, 0xf8, 0x7, 0xff, 0xfc, 0x3, 0xff,
    0xfe, 0x1, 0xff, 0xff, 0x0, 0xff, 0xff, 0x80,
    0x7f, 0xff, 0xc0, 0x3f, 0xff, 0xe0, 0x1f, 0xff,
    0xf0, 0xf, 0xff, 0xf8, 0x7, 0xff, 0xfc, 0x3,
    0xff, 0xfe, 0x1, 0xff, 0xff, 0x0, 0xff, 0xff,
    0x80, 0x7f, 0xff, 0xc0, 0x3f, 0xff, 0xe0, 0x1f,
    0xff, 0xf0, 0xf, 0xff, 0xf8, 0x7, 0xff, 0xfc,
    0x3, 0xff, 0xfe, 0x1, 0xff, 0xff, 0x0, 0xff,
    0xff, 0x80, 0x7f, 0xff, 0xc0, 0x3f, 0xff, 0xe0,
    0x1f, 0xff, 0xf0, 0xf, 0xff, 0xf8, 0x7, 0xff,
    0xfc, 0x3, 0xff, 0xfe, 0x1, 0xff, 0xd7, 0xf0,
    0xf, 0xfe, 0x58, 0x80, 0x7f, 0xf0, 0x4, 0x1c,
    0x3, 0xff, 0x9a, 0x62, 0xc0, 0x1f, 0xfc, 0x96,
    0x22, 0x0, 0x7f, 0xc5, 0xe4, 0x1, 0xff, 0xc9,
    0x63, 0x10, 0x13, 0x10, 0xf, 0xfe, 0x49, 0xda,
    0x88, 0x7, 0xf1, 0x5a, 0x8, 0x7, 0xff, 0x20,
    0x4c, 0x40, 0x27, 0xd3, 0x0, 0xff, 0xe4, 0x9c,
    0x6c, 0x29, 0x91, 0x46, 0xb3, 0xee, 0x40, 0x1f,
    0xfc, 0x95, 0xf5, 0x0, 0x89, 0x50, 0x80, 0x3f,
    0xf9, 0x46, 0xf5, 0x9b, 0xb6, 0x53, 0x10, 0x7,
    0xff, 0x28, 0xf1, 0xc4, 0x3, 0x15, 0x59, 0x80,
    0x7f, 0xfa, 0x52, 0x58, 0x40, 0x3c, 0x4d, 0xee,
    0x40, 0x1f, 0xfe, 0x53, 0x89, 0x51, 0x0, 0xfe,
    0x38, 0xf9, 0x41, 0x0, 0xff, 0xef, 0x8a, 0xd6,
    0xb9, 0x0, 0x7f, 0xf0, 0x49, 0xaf, 0x29, 0x48,
    0x3, 0xff, 0xb0, 0x26, 0xd5, 0x94, 0xa2, 0x1,
    0xff, 0xc6, 0x25, 0xad, 0xeb, 0x96, 0x42, 0x0,
    0xff, 0xe6, 0x92, 0x3c, 0xe7, 0xe4, 0xa9, 0x0,
    0x7f, 0xf3, 0x45, 0x1a, 0x6f, 0x7f, 0xb7, 0x2a,
    0x93, 0x28, 0x89, 0xde, 0x88, 0xa6, 0x55, 0x79,
    0xbd, 0xfb, 0x70, 0xc6, 0x20, 0x1f, 0xfc, 0x30,

    /* U+31 "1" */
    0x0, 0xff, 0xe6, 0xad, 0x7f, 0xff, 0xf1, 0x7a,
    0xc, 0x3, 0xff, 0x9a, 0xbe, 0xa0, 0x1f, 0xfd,
    0xf3, 0x98, 0x50, 0xf, 0xfe, 0xe9, 0x35, 0xeb,
    0x10, 0x7, 0xff, 0x68, 0x96, 0x73, 0x65, 0x4,
    0x3, 0xff, 0xa4, 0x22, 0x23, 0x56, 0x8a, 0xde,
    0xda, 0x63, 0x0, 0xff, 0xe9, 0xad, 0x7f, 0x73,
    0x72, 0xa5, 0xd4, 0x84, 0x3, 0xff, 0xfe, 0x1,
    0xff, 0xff, 0x0, 0xff, 0xff, 0x80, 0x7f, 0x84,
    0x44, 0x68, 0xaa, 0x67, 0x89, 0x74, 0x0, 0xff,
    0xe7, 0xad, 0xf7, 0x5f, 0xf7, 0x73, 0x72, 0xea,
    0x93, 0xe, 0xd8, 0x42, 0x1, 0xff, 0xcf, 0x11,
    0xc0, 0x1f, 0xff, 0xf0, 0xf, 0xff, 0xf8, 0x7,
    0xff, 0xfc, 0x3, 0xff, 0xfe, 0x1, 0xff, 0xff,
    0x0, 0xff, 0xff, 0x80, 0x7f, 0xff, 0xc0, 0x3f,
    0xff, 0xe0, 0x1f, 0xff, 0xf0, 0xf, 0xff, 0xf8,
    0x7, 0xff, 0xfc, 0x3, 0xff, 0xfe, 0x1, 0xff,
    0xff, 0x0, 0xff, 0xff, 0x80, 0x7f, 0xff, 0xc0,
    0x3f, 0xff, 0xe0, 0x1f, 0xff, 0xf0, 0xf, 0xff,
    0xf8, 0x7, 0xff, 0xfc, 0x3, 0xff, 0xfe, 0x1,
    0xff, 0xff, 0x0, 0xff, 0xff, 0x80, 0x7f, 0xff,
    0xc0, 0x3f, 0xff, 0xe0, 0x1f, 0xff, 0xf0, 0xf,
    0xff, 0xf8, 0x7, 0xff, 0xfc, 0x3, 0xff, 0xfe,
    0x1, 0xff, 0xff, 0x0, 0xff, 0xff, 0x80, 0x7f,
    0xff, 0xc0, 0x3f, 0xff, 0xe0, 0x1f, 0xff, 0xf0,
    0xf, 0xff, 0xf8, 0x7, 0xff, 0xfc, 0x3, 0xff,
    0xfe, 0x1, 0xff, 0xd1,

    /* U+32 "2" */
    0x0, 0xff, 0xe4, 0x89, 0x22, 0xb3, 0x4e, 0xff,
    0x33, 0x15, 0xc, 0x80, 0x3f, 0xfb, 0x64, 0x8f,
    0x39, 0xdf, 0xdb, 0x75, 0x33, 0x44, 0x7d, 0x32,
    0xab, 0xcd, 0xfe, 0xdb, 0x86, 0x31, 0x0, 0xff,
    0xe7, 0x93, 0x56, 0xea, 0xe1, 0x8c, 0x40, 0x3f,
    0xf9, 0x42, 0x48, 0xf3, 0x9f, 0x90, 0x82, 0x1,
    0xff, 0xc8, 0x26, 0xbc, 0x95, 0x20, 0xf, 0xfe,
    0xb0, 0x9b, 0xde, 0x52, 0x8, 0x7, 0xff, 0xc,
    0xe3, 0xe5, 0x4, 0x3, 0xff, 0xba, 0x4b, 0x7a,
    0xc4, 0x1, 0xff, 0x13, 0x7b, 0x90, 0x7, 0xff,
    0x8c, 0xe2, 0xa, 0x20, 0x1f, 0x8a, 0xac, 0xc0,
    0x3f, 0xfc, 0xc2, 0xbc, 0xe2, 0x1, 0xe2, 0x54,
    0x20, 0xf, 0xfe, 0x38, 0x9b, 0xd6, 0x6e, 0xd9,
    0x2c, 0x40, 0x1f, 0xfc, 0xa4, 0xd4, 0x0, 0xf3,
    0xe9, 0x80, 0x7f, 0xf1, 0xd2, 0xf6, 0x14, 0xc8,
    0xa3, 0x69, 0xe7, 0x20, 0xf, 0xfe, 0x4a, 0xe9,
    0x80, 0x61, 0x31, 0x0, 0xff, 0xe3, 0x9e, 0xa0,
    0x80, 0x7f, 0x1e, 0x20, 0x80, 0x7f, 0xf2, 0x4,
    0x98, 0x3, 0x18, 0xb0, 0x7, 0xff, 0x1d, 0x88,
    0x40, 0x3f, 0xe6, 0xe2, 0x0, 0xff, 0xe4, 0x89,
    0x88, 0x6, 0xf0, 0xf, 0xfe, 0x38, 0x98, 0x7,
    0xff, 0x4, 0xc5, 0xc0, 0x3f, 0xff, 0xe0, 0x1f,
    0xff, 0xf0, 0xf, 0xff, 0xf8, 0x7, 0xff, 0xfc,
    0x3, 0xff, 0xfe, 0x1, 0xff, 0xff, 0x0, 0xff,
    0xff, 0x80, 0x7f, 0xfe, 0x1c, 0x3, 0xff, 0xe6,
    0x7c, 0x20, 0x1f, 0xff, 0x31, 0x11, 0x80, 0x7f,
    0xf2, 0x44, 0xc4, 0x3, 0xff, 0xb6, 0xc6, 0x20,
    0x1f, 0xfc, 0x81, 0x31, 0x0, 0xff, 0xed, 0x9e,
    0x20, 0x7, 0xff, 0x24, 0xc5, 0x80, 0x3f, 0xfb,
    0x44, 0x88, 0x10, 0xf, 0xfe, 0x4b, 0xe1, 0x0,
    0x7f, 0xf6, 0x45, 0x30, 0x80, 0x3f, 0xf9, 0x29,
    0x8a, 0x1, 0xff, 0xd9, 0x16, 0xa4, 0x0, 0xff,
    0xe4, 0x91, 0xa0, 0x80, 0x7f, 0xf6, 0x9, 0xa8,
    0xc0, 0x3f, 0xf9, 0x25, 0x54, 0x20, 0xf, 0x14,
    0xfe, 0x67, 0xff, 0x1e, 0x10, 0x3, 0xc9, 0x72,
    0x40, 0x1f, 0xfc, 0x93, 0xa5, 0x20, 0xf, 0xc2,
    0x46, 0x7f, 0xfc, 0x62, 0x10, 0xe, 0x15, 0xf6,
    0x10, 0xf, 0xfe, 0x49, 0xd3, 0x10, 0x7, 0xff,
    0x5c, 0x9a, 0x50, 0x3, 0xff, 0x94, 0xb2, 0xc2,
    0x1, 0xff, 0xd7, 0x58, 0x93, 0x0, 0xff, 0xe4,
    0x8b, 0x4a, 0x80, 0x7f, 0xf5, 0xc9, 0xe1, 0x44,
    0x3, 0xff, 0x92, 0x73, 0x66, 0x1, 0xff, 0xd6,
    0x15, 0x89, 0x20, 0xf, 0xfe, 0x48, 0xb4, 0x39,
    0x0, 0x7f, 0xf5, 0x8e, 0x61, 0x44, 0x3, 0xff,
    0x92, 0x73, 0x68, 0x1, 0xff, 0xd6, 0x15, 0x87,
    0x20, 0xf, 0xfe, 0x48, 0xb4, 0x39, 0x0, 0x7f,
    0xf5, 0x8e, 0x61, 0x0, 0x3f, 0xf9, 0x47, 0x36,
    0x80, 0x1f, 0xfd, 0x75, 0x97, 0x20, 0xf, 0xfe,
    0x48, 0xac, 0x39, 0x0, 0x7f, 0xf5, 0x89, 0xe5,
    0x40, 0x3f, 0xf9, 0x45, 0x30, 0x80, 0x1f, 0xfd,
    0x74, 0xb9, 0x30, 0xf, 0xfe, 0x52, 0xc3, 0x90,
    0x7, 0xff, 0x5d, 0x79, 0x84, 0x3, 0xff, 0x92,
    0x4f, 0x2a, 0x1, 0xff, 0xd7, 0x16, 0xe5, 0x0,
    0xff, 0xe5, 0x25, 0xc9, 0x80, 0x7f, 0xf5, 0xc5,
    0xe9, 0x0, 0x3f, 0xf9, 0x4b, 0xcc, 0x20, 0x1f,
    0xfd, 0x72, 0x6a, 0x30, 0xf, 0xfe, 0x48, 0xb7,
    0x28, 0x7, 0xff, 0x60, 0x96, 0xcc, 0x3, 0xff,
    0x92, 0x4d, 0x48, 0x1, 0xff, 0xd8, 0x14, 0xb3,
    0x0, 0xff, 0xe4, 0x92, 0xd9, 0x80, 0x7f, 0xf6,
    0x5, 0xf4, 0xc0, 0x3f, 0xf9, 0x24, 0xb6, 0x60,
    0x1f, 0xfd, 0x94, 0xc4, 0x0, 0xff, 0xe4, 0x8a,
    0xd9, 0x80, 0x7f, 0xf6, 0x4f, 0x50, 0x3, 0xff,
    0x92, 0x2f, 0x66, 0x1, 0xff, 0xd9, 0x14, 0x40,
    0x80, 0x7f, 0xf2, 0x53, 0xc, 0x3, 0xff, 0xb4,
    0x9a, 0x60, 0x1f, 0xfc, 0x93, 0xc4, 0x0, 0xff,
    0xed, 0x1e, 0xb8, 0x7, 0xff, 0x24, 0x91, 0x44,
    0x3, 0xff, 0xb4, 0xc6, 0x40, 0x1f, 0xfc, 0x94,
    0xc3, 0x0, 0xff, 0xed, 0x16, 0xb0, 0x7, 0xff,
    0x24, 0xfd, 0x40, 0x3f, 0xfb, 0x6e, 0x44, 0x0,
    0xff, 0xe4, 0xa, 0x90, 0x80, 0x7f, 0xf6, 0x84,
    0xd8, 0x3, 0xff, 0x92, 0x5c, 0xa0, 0x1f, 0xfd,
    0xb2, 0xe2, 0x0, 0xff, 0xe4, 0xb1, 0x8, 0x7,
    0xff, 0x6d, 0xc4, 0x40, 0x1f, 0xfc, 0x81, 0x26,
    0x0, 0xff, 0xee, 0x9, 0x80, 0x7f, 0xf2, 0x4b,
    0xc4, 0x3, 0xff, 0xb6, 0x26, 0x20, 0x1f, 0xfc,
    0x97, 0x13, 0x0, 0xff, 0xee, 0xb, 0x80, 0x7f,
    0xf2, 0x44, 0xc4, 0x3, 0xff, 0xb6, 0x60, 0x1f,
    0xff, 0x71, 0x0, 0xff, 0xe5, 0x8, 0x7, 0xff,
    0xd1, 0xfe, 0xab, 0xff, 0xb0, 0xe8, 0x1, 0x78,
    0x7, 0xff, 0x28, 0x91, 0x57, 0xff, 0xb1, 0x64,
    0x20, 0x1f, 0xff, 0xf0, 0xf, 0xff, 0xf8, 0x7,
    0xff, 0xfc, 0x3, 0xff, 0xfe, 0x1, 0xff, 0xd3,

    /* U+33 "3" */
    0x0, 0xff, 0xe4, 0x89, 0x22, 0xa9, 0x98, 0xef,
    0x44, 0x4e, 0xf3, 0x31, 0x50, 0xc8, 0x40, 0x3f,
    0xfb, 0x4, 0x8f, 0x39, 0xdf, 0xdb, 0x75, 0x49,
    0x94, 0x44, 0xef, 0x44, 0x53, 0x2a, 0xbc, 0xde,
    0xfd, 0xb9, 0x63, 0x10, 0xf, 0xfe, 0x69, 0x35,
    0x6e, 0xae, 0x18, 0xc4, 0x3, 0xff, 0x9a, 0x48,
    0xd3, 0x9d, 0x92, 0xa4, 0x1, 0xff, 0xc6, 0x26,
    0xbc, 0x95, 0x20, 0xf, 0xfe, 0xc9, 0xb5, 0x65,
    0x28, 0x80, 0x7f, 0xf0, 0x4e, 0x7e, 0x50, 0x40,
    0x3f, 0xfb, 0xe2, 0xb5, 0xae, 0x40, 0x1f, 0xc4,
    0xfe, 0xc4, 0x1, 0xff, 0xe5, 0x38, 0x95, 0x10,
    0xf, 0x15, 0x50, 0xc0, 0x3f, 0xfd, 0x29, 0x2c,
    0x20, 0x18, 0x95, 0x44, 0x1, 0xff, 0xca, 0x37,
    0xac, 0xdd, 0xb2, 0x98, 0x80, 0x3f, 0xf9, 0x47,
    0x8e, 0x20, 0x13, 0xe9, 0x0, 0x7f, 0xf2, 0x52,
    0x76, 0x14, 0xc8, 0xa3, 0x59, 0xf7, 0x20, 0xf,
    0xfe, 0x4a, 0xfa, 0x80, 0x4, 0xc4, 0x3, 0xff,
    0x92, 0x78, 0x82, 0x1, 0xfc, 0x56, 0xa2, 0x1,
    0xff, 0xc8, 0x13, 0x10, 0x1, 0x8b, 0x0, 0x7f,
    0xf2, 0x58, 0x88, 0x1, 0xff, 0x17, 0x10, 0x7,
    0xff, 0x25, 0x8c, 0x40, 0x1e, 0x1, 0xff, 0xcb,
    0x10, 0xf, 0xfe, 0x0, 0x83, 0x80, 0x7f, 0xff,
    0xc0, 0x3f, 0xff, 0xe0, 0x1f, 0xff, 0xf0, 0xf,
    0xff, 0xf8, 0x7, 0xff, 0xfc, 0x3, 0xff, 0xfe,
    0x1, 0xff, 0xff, 0x0, 0xff, 0xff, 0x80, 0x7f,
    0xff, 0xc0, 0x3f, 0xff, 0xe0, 0x1f, 0xff, 0xf0,
    0xf, 0xff, 0xf8, 0x7, 0xff, 0xfc, 0x3, 0xff,
    0xb0, 0xe0, 0x20, 0x1f, 0xfd, 0xb1, 0x0, 0xff,
    0xe5, 0x89, 0x0, 0x7f, 0xf7, 0xf, 0x98, 0x3,
    0xff, 0x90, 0x7a, 0xc0, 0x2, 0x9f, 0xcc, 0xff,
    0xe4, 0xc2, 0x80, 0x7f, 0xf0, 0x1c, 0xc8, 0x3,
    0xff, 0x8e, 0x2a, 0x84, 0x1, 0x9, 0x19, 0xff,
    0xf2, 0x48, 0x40, 0x3f, 0xc2, 0xdc, 0x80, 0x1f,
    0xfc, 0x72, 0x9b, 0x30, 0xf, 0xfe, 0xb8, 0x92,
    0x46, 0xc2, 0x0, 0x7f, 0xf1, 0x89, 0xf9, 0xc8,
    0x3, 0xff, 0x9c, 0x71, 0xdf, 0xff, 0x76, 0xdb,
    0x98, 0x80, 0x7f, 0xf1, 0x9, 0x6b, 0xe0, 0xc0,
    0x3f, 0xfd, 0x84, 0xb1, 0x98, 0xa5, 0x20, 0xf,
    0xff, 0x38, 0x9a, 0xc5, 0x67, 0x6d, 0x39, 0x88,
    0x7, 0xff, 0xa8, 0x4d, 0x66, 0x72, 0x98, 0x80,
    0x7f, 0xfb, 0xc4, 0xd5, 0xeb, 0x3f, 0x21, 0x4,
    0x3, 0xff, 0xa6, 0x3c, 0x89, 0xf8, 0xc4, 0x3,
    0xff, 0x8c, 0x26, 0xf7, 0xf4, 0xa2, 0x1, 0xff,
    0xd0, 0x26, 0xab, 0xbf, 0xb3, 0xb9, 0x8e, 0x40,
    0x1f, 0xfc, 0x61, 0x5a, 0xa2, 0x88, 0x7, 0xff,
    0x68, 0x4e, 0x25, 0x84, 0x3, 0xff, 0x8e, 0x90,
    0xc4, 0x1, 0xff, 0xdc, 0x4d, 0x40, 0xf, 0xfe,
    0x41, 0x5a, 0x88, 0x7, 0xff, 0x71, 0xb4, 0xc0,
    0x3f, 0xf9, 0x7, 0xaa, 0x0, 0x13, 0x46, 0x6f,
    0xfe, 0x42, 0x98, 0x80, 0x7f, 0xf0, 0x8, 0x5c,
    0x3, 0xff, 0x92, 0x22, 0x0, 0x1d, 0xcc, 0xff,
    0xf2, 0x6a, 0x54, 0x3, 0xff, 0xb0, 0xe6, 0x20,
    0x1f, 0xff, 0xf0, 0xf, 0xff, 0xf8, 0x7, 0xff,
    0xfc, 0x3, 0xff, 0xfe, 0x1, 0xff, 0xff, 0x0,
    0xff, 0xff, 0x80, 0x7f, 0xff, 0xc0, 0x3f, 0xff,
    0xe0, 0x1f, 0xff, 0xf0, 0xf, 0xff, 0xf8, 0x7,
    0xff, 0xfc, 0x3, 0xff, 0xfe, 0x1, 0xff, 0xff,
    0x0, 0xff, 0xff, 0x80, 0x7f, 0xff, 0xbc, 0x3,
    0xff, 0x96, 0x20, 0x1f, 0xfc, 0x1, 0x7, 0x0,
    0xff, 0xe6, 0x98, 0xb0, 0x7, 0xff, 0x25, 0x88,
    0x80, 0x1f, 0xf1, 0x71, 0x0, 0x7f, 0xf2, 0x58,
    0xc4, 0x4, 0xc4, 0x3, 0xff, 0x92, 0x78, 0x82,
    0x1, 0xfc, 0x48, 0xa2, 0x1, 0xff, 0xc8, 0x13,
    0x10, 0x9, 0xf4, 0x80, 0x3f, 0xf9, 0x29, 0x14,
    0xc6, 0x20, 0x11, 0x24, 0x74, 0x90, 0x7, 0xff,
    0x25, 0x7d, 0x40, 0x22, 0x45, 0x20, 0xf, 0xfe,
    0x48, 0xa4, 0xe7, 0x7f, 0xdb, 0x6e, 0x62, 0x1,
    0xff, 0xc9, 0x3c, 0x41, 0x0, 0xc7, 0x54, 0x30,
    0xf, 0xff, 0x4a, 0x53, 0x10, 0x7, 0x89, 0xe1,
    0x84, 0x3, 0xff, 0xca, 0x4f, 0xc, 0x20, 0x1f,
    0xc9, 0x3b, 0x6, 0x1, 0xff, 0xe0, 0x14, 0x9f,
    0x83, 0x0, 0xff, 0xe0, 0x9b, 0xee, 0x42, 0x8,
    0x7, 0xff, 0x64, 0x96, 0x72, 0xd8, 0x80, 0x3f,
    0xf8, 0xa2, 0x6f, 0x7f, 0xb4, 0xea, 0x62, 0x1,
    0xff, 0xcd, 0x13, 0x58, 0xad, 0xd5, 0x31, 0x0,
    0x7f, 0xf3, 0x4, 0x96, 0x2b, 0x3b, 0xfb, 0x2e,
    0xa6, 0x51, 0x19, 0xde, 0x88, 0xd3, 0x2a, 0xbd,
    0xef, 0xec, 0xa7, 0x52, 0x0, 0xff, 0xe1, 0x80,

    /* U+34 "4" */
    0x0, 0xff, 0xeb, 0xad, 0x7f, 0xff, 0xf3, 0xa9,
    0x0, 0x3f, 0xfc, 0x67, 0xa8, 0x1, 0xff, 0xfe,
    0x15, 0x41, 0x0, 0xff, 0xff, 0x2e, 0x18, 0x7,
    0xff, 0xf8, 0xb1, 0xc0, 0x3f, 0xff, 0xe8, 0x64,
    0x1, 0xff, 0xfe, 0x4f, 0x50, 0xf, 0xff, 0xf1,
    0x1a, 0x88, 0x7, 0xff, 0xf9, 0xf4, 0xc0, 0x3f,
    0xff, 0xc7, 0xa8, 0x1, 0xff, 0xfe, 0x15, 0x41,
    0x0, 0xff, 0xff, 0x2f, 0x98, 0x7, 0xff, 0xf8,
    0xb1, 0x0, 0x3f, 0xff, 0xe8, 0x64, 0x1, 0xff,
    0xfe, 0x3f, 0x50, 0xf, 0xff, 0xf0, 0xa2, 0x88,
    0x7, 0xff, 0xf9, 0x34, 0xc0, 0x3f, 0xff, 0xc7,
    0xae, 0x1, 0xff, 0xfe, 0x15, 0x32, 0x0, 0xff,
    0xff, 0x2e, 0x20, 0x7, 0xff, 0xf8, 0x8d, 0xc0,
    0x3f, 0xff, 0xef, 0x84, 0x1, 0xff, 0xfe, 0x3c,
    0x50, 0xf, 0xfe, 0x32, 0x24, 0x1, 0xff, 0xe9,
    0x14, 0x51, 0x0, 0xff, 0xe2, 0x99, 0xc0, 0x1f,
    0xfe, 0xa4, 0xd3, 0x0, 0xff, 0xe2, 0x8a, 0xef,
    0x0, 0x7f, 0xfa, 0x4f, 0x5c, 0x3, 0xff, 0x8c,
    0xbe, 0xe0, 0x1f, 0xfe, 0x91, 0x53, 0x20, 0xf,
    0xfe, 0x28, 0x9a, 0x98, 0x7, 0xff, 0xa5, 0x7d,
    0x0, 0x3f, 0xf8, 0xcb, 0xa6, 0x1, 0xff, 0xe9,
    0x23, 0x40, 0xf, 0xfe, 0x31, 0x1b, 0x80, 0x7f,
    0xfa, 0x9f, 0x8, 0x3, 0xff, 0x8c, 0xfa, 0x40,
    0x1f, 0xfe, 0x93, 0xc5, 0x0, 0xff, 0xe3, 0x1e,
    0xb8, 0x7, 0xff, 0xa4, 0x51, 0x44, 0x3, 0xff,
    0x8c, 0xa6, 0x40, 0x1f, 0xfe, 0x94, 0xd3, 0x0,
    0xff, 0xe3, 0x1f, 0xa8, 0x7, 0xff, 0xa4, 0xb5,
    0xc0, 0x3f, 0xf8, 0xc2, 0xaa, 0x10, 0xf, 0xff,
    0x40, 0xa1, 0x90, 0x7, 0xff, 0x19, 0x7c, 0xc0,
    0x3f, 0xfd, 0x2b, 0xe8, 0x1, 0xff, 0xc6, 0x23,
    0x50, 0xf, 0xff, 0x49, 0x1a, 0x80, 0x7f, 0xf1,
    0xdf, 0x4c, 0x3, 0xff, 0xd2, 0xf8, 0x60, 0x1f,
    0xfc, 0x62, 0xd7, 0x0, 0xff, 0xf4, 0x9e, 0x28,
    0x7, 0xff, 0x1d, 0xcc, 0x80, 0x3f, 0xfd, 0x2,
    0xaa, 0x10, 0xf, 0xfe, 0x31, 0xea, 0x80, 0x7f,
    0xfa, 0x57, 0xc, 0x3, 0xff, 0x8c, 0x2a, 0x62,
    0x1, 0xff, 0xe8, 0x3c, 0x70, 0xf, 0xfe, 0x3a,
    0xfa, 0x80, 0x7f, 0xfa, 0x54, 0xc8, 0x3, 0xff,
    0x8c, 0x26, 0xa2, 0x1, 0xff, 0xe8, 0x4f, 0x50,
    0xf, 0xfe, 0x3a, 0xe9, 0x80, 0x7f, 0xfa, 0x8,
    0xd0, 0x40, 0x3f, 0xf8, 0xc4, 0x6e, 0x1, 0xff,
    0xe9, 0x7d, 0x20, 0xf, 0xfe, 0x3b, 0xe9, 0x0,
    0x7f, 0xfa, 0xf, 0x50, 0x3, 0xff, 0x8e, 0x7a,
    0xe0, 0x1f, 0xfe, 0x81, 0x54, 0x10, 0xf, 0xfe,
    0x3a, 0x99, 0x0, 0x7f, 0xfa, 0x17, 0xc, 0x3,
    0xff, 0x8e, 0x7e, 0xa0, 0x1f, 0xfe, 0x82, 0xc7,
    0x0, 0xff, 0xe3, 0x8a, 0xa8, 0x40, 0x3f, 0xfd,
    0x8, 0x64, 0x1, 0xff, 0xc7, 0x5f, 0x30, 0xf,
    0xff, 0x42, 0x7a, 0x80, 0x7f, 0xf1, 0xc8, 0xd4,
    0x3, 0xff, 0xd0, 0x46, 0xa2, 0x1, 0xff, 0xc7,
    0x7d, 0x30, 0xf, 0xff, 0x43, 0x69, 0x80, 0x7f,
    0xf2, 0x1b, 0xe2, 0x3f, 0xf8, 0x9a, 0xa0, 0x1f,
    0xfc, 0x67, 0xe8, 0x8f, 0xce, 0x82, 0x1, 0x84,
    0x3, 0xff, 0x94, 0x6a, 0xef, 0xff, 0xc3, 0x64,
    0x10, 0xf, 0xfe, 0x31, 0x2b, 0xbf, 0xe9, 0xd2,
    0x0, 0xff, 0xff, 0x80, 0x7f, 0xff, 0xc0, 0x3f,
    0xff, 0xe0, 0x1f, 0xff, 0xf0, 0xf, 0xff, 0xf8,
    0x7, 0xff, 0x1d, 0x6b, 0xff, 0xff, 0xb5, 0xd2,
    0x80, 0x1f, 0xfc, 0x65, 0xbf, 0xff, 0xdd, 0x26,
    0x1, 0xff, 0xff, 0x0, 0xff, 0xff, 0x80, 0x7f,
    0xff, 0xc0, 0x3f, 0xff, 0xe0, 0x1f, 0xff, 0xf0,
    0xf, 0xff, 0xf8, 0x7, 0xff, 0xfc, 0x3, 0xff,
    0xfe, 0x1, 0xff, 0xff, 0x0, 0xff, 0xe8, 0x80,

    /* U+35 "5" */
    0x28, 0xdf, 0xff, 0xff, 0x7c, 0xa0, 0x7, 0xff,
    0xcc, 0x85, 0x80, 0x3f, 0xfe, 0x6d, 0xc4, 0x1,
    0xff, 0xf3, 0x12, 0x0, 0xff, 0xf9, 0x91, 0x1c,
    0x3, 0xff, 0xe6, 0xdc, 0x40, 0x1f, 0xfc, 0xf2,
    0x45, 0x5f, 0xfe, 0xab, 0x6a, 0x88, 0x7, 0xff,
    0x3d, 0xfe, 0xab, 0xff, 0xab, 0x2c, 0x60, 0x1f,
    0xff, 0xf0, 0xf, 0xff, 0xf8, 0x7, 0xff, 0xfc,
    0x3, 0xff, 0xfe, 0x1, 0xff, 0xff, 0x0, 0xff,
    0xff, 0x80, 0x7f, 0xff, 0xc0, 0x3f, 0xff, 0xe0,
    0x1f, 0xff, 0xf0, 0xf, 0xff, 0xf8, 0x7, 0xff,
    0xfc, 0x3, 0xff, 0xfe, 0x1, 0xff, 0xff, 0x0,
    0xff, 0xff, 0x80, 0x7f, 0xff, 0xc0, 0x3f, 0xfb,
    0x42, 0x46, 0x64, 0x48, 0xcc, 0x42, 0x1, 0xff,
    0xe5, 0x25, 0x8b, 0xdf, 0xed, 0xcc, 0x5d, 0xd9,
    0x8d, 0xee, 0x65, 0x39, 0x88, 0x7, 0xff, 0x6c,
    0x56, 0x77, 0x54, 0xe8, 0x40, 0x1f, 0xfc, 0x1,
    0x35, 0x8c, 0xfa, 0x52, 0x0, 0xff, 0xeb, 0x1b,
    0xed, 0x31, 0x0, 0x7f, 0xf2, 0x85, 0x6b, 0xe5,
    0x0, 0x3f, 0xfa, 0x6b, 0x10, 0x30, 0xf, 0xfe,
    0x81, 0x34, 0xc1, 0x80, 0x7f, 0xfc, 0xc9, 0xa9,
    0x0, 0x3f, 0xfe, 0x62, 0xfa, 0x80, 0x1f, 0xfd,
    0x21, 0x47, 0x9a, 0xaa, 0x5d, 0x4, 0x3, 0xff,
    0x94, 0x2a, 0x64, 0x1, 0xff, 0xcf, 0x27, 0xcb,
    0x86, 0x55, 0x9a, 0x2e, 0x98, 0x40, 0x3f, 0xf9,
    0x27, 0xac, 0x1, 0xff, 0xce, 0x25, 0xa2, 0x0,
    0xfe, 0x4d, 0x71, 0x0, 0xff, 0xe4, 0x88, 0x80,
    0x3f, 0xf9, 0xcf, 0xa4, 0x1, 0xff, 0x2f, 0x10,
    0x7, 0xff, 0x28, 0xc4, 0x3, 0xff, 0x9c, 0x20,
    0x1f, 0xfc, 0x1, 0x13, 0x80, 0x7f, 0xf2, 0x5c,
    0x2, 0x3c, 0xa6, 0x6f, 0xfe, 0x4f, 0xb0, 0x7,
    0xff, 0x70, 0x51, 0xe6, 0x7f, 0xf9, 0x2a, 0x40,
    0x1f, 0xff, 0xf0, 0xf, 0xff, 0xf8, 0x7, 0xff,
    0x28, 0xa3, 0x7f, 0xff, 0xf9, 0x34, 0x80, 0x1f,
    0xff, 0xf0, 0xf, 0xff, 0xf8, 0x7, 0xff, 0xfc,
    0x3, 0xff, 0xfe, 0x1, 0xff, 0xff, 0x0, 0xff,
    0xff, 0x80, 0x7f, 0xff, 0xc0, 0x3f, 0xff, 0xe0,
    0x1f, 0xff, 0xf0, 0xf, 0xff, 0xf8, 0x7, 0xff,
    0xfc, 0x3, 0xff, 0xfe, 0x1, 0xff, 0xff, 0x0,
    0xff, 0xff, 0x80, 0x7f, 0xff, 0xc0, 0x3f, 0xff,
    0xe0, 0x1f, 0xfd, 0x1f, 0x0, 0xff, 0xe5, 0x88,
    0x7, 0xff, 0x0, 0x41, 0xc0, 0x3f, 0xf9, 0xa6,
    0x2c, 0x1, 0xff, 0xc9, 0x62, 0x20, 0x7, 0xfc,
    0x5e, 0x40, 0x1f, 0xfc, 0x96, 0x31, 0x1, 0x31,
    0x0, 0xff, 0xe4, 0x9d, 0xa8, 0x80, 0x7f, 0x15,
    0xa0, 0x80, 0x7f, 0xf2, 0x4, 0xc4, 0x2, 0x7d,
    0x30, 0xf, 0xfe, 0x49, 0xc6, 0xc2, 0x99, 0x14,
    0x6b, 0x3e, 0xe4, 0x1, 0xff, 0xc9, 0x5f, 0x50,
    0x8, 0x95, 0x8, 0x3, 0xff, 0x94, 0x6f, 0x59,
    0xbb, 0x65, 0x31, 0x0, 0x7f, 0xf2, 0x8f, 0x1c,
    0x40, 0x31, 0x55, 0x98, 0x7, 0xff, 0xa5, 0x25,
    0x84, 0x3, 0xc4, 0xde, 0xe4, 0x1, 0xff, 0xe5,
    0x38, 0x95, 0x10, 0xf, 0xe3, 0x8f, 0x94, 0x10,
    0xf, 0xfe, 0xf8, 0xad, 0x6b, 0x90, 0x7, 0xff,
    0x4, 0x9a, 0xf2, 0x94, 0x80, 0x3f, 0xfb, 0x2,
    0x6d, 0x59, 0x4a, 0x20, 0x1f, 0xfc, 0x62, 0x5a,
    0xde, 0xb9, 0x64, 0x20, 0xf, 0xfe, 0x69, 0x23,
    0xce, 0x7e, 0x4a, 0x90, 0x7, 0xff, 0x34, 0x51,
    0xa6, 0xf7, 0xfb, 0x72, 0xa9, 0x32, 0x88, 0x9d,
    0xe8, 0x8a, 0x65, 0x57, 0x9b, 0xdf, 0xb7, 0xc,
    0x62, 0x1, 0xff, 0xc3,

    /* U+36 "6" */
    0x0, 0xff, 0xe4, 0x89, 0x1a, 0xa9, 0x98, 0xef,
    0x43, 0xbe, 0x66, 0x2a, 0x18, 0x80, 0x7f, 0xf6,
    0x85, 0x1a, 0x6f, 0x7f, 0xb7, 0x2a, 0x93, 0x28,
    0x89, 0xe2, 0x34, 0xca, 0xaf, 0x3b, 0xfb, 0x6a,
    0x14, 0xc4, 0x3, 0xff, 0x9c, 0x4b, 0x5b, 0xd7,
    0x2c, 0x84, 0x1, 0xff, 0xcb, 0x12, 0x57, 0xac,
    0xfc, 0x84, 0x10, 0xf, 0xfe, 0x39, 0x35, 0xe5,
    0x29, 0x0, 0x7f, 0xf5, 0xc4, 0xde, 0xf2, 0x50,
    0x40, 0x3f, 0xf8, 0x47, 0x1f, 0x28, 0x20, 0x1f,
    0xfd, 0xe2, 0x6b, 0xa6, 0x10, 0xf, 0xf1, 0x3f,
    0xb9, 0x0, 0x7f, 0xf9, 0x12, 0x20, 0x80, 0x1f,
    0x8a, 0xa8, 0x60, 0x1f, 0xfe, 0x71, 0x6f, 0x50,
    0xf, 0x12, 0xa1, 0x0, 0x7f, 0xf2, 0x44, 0xde,
    0xb3, 0x76, 0xb9, 0x62, 0x0, 0xff, 0xe4, 0xa7,
    0xa8, 0x7, 0x3e, 0x98, 0x7, 0xff, 0x24, 0xe3,
    0x61, 0x4c, 0x8a, 0x46, 0x9f, 0x82, 0x0, 0xff,
    0xe4, 0x3e, 0x98, 0x4, 0x26, 0x20, 0x1f, 0xfc,
    0x93, 0xb4, 0x10, 0xf, 0xe2, 0x45, 0x20, 0xf,
    0xfe, 0x39, 0xb, 0x80, 0x46, 0x2c, 0x1, 0xff,
    0xc9, 0x62, 0x20, 0x7, 0xfc, 0x5c, 0x20, 0x1f,
    0xfc, 0x82, 0x10, 0xd, 0xe0, 0x1f, 0xfc, 0xb1,
    0x0, 0xff, 0xe0, 0x8, 0x38, 0x7, 0xff, 0x24,
    0xc0, 0x3f, 0xff, 0xe0, 0x1f, 0xff, 0xf0, 0xf,
    0xff, 0xf8, 0x7, 0xff, 0xfc, 0x3, 0xff, 0xfe,
    0x1, 0xff, 0xff, 0x0, 0xff, 0xff, 0x80, 0x7f,
    0xff, 0xc0, 0x3f, 0xff, 0xe0, 0x1f, 0xff, 0xf0,
    0xf, 0xfe, 0x32, 0x7c, 0xcf, 0xff, 0x23, 0xd0,
    0x3, 0xff, 0xbc, 0x48, 0xcd, 0xff, 0xc8, 0x42,
    0x0, 0xff, 0xff, 0x80, 0x7f, 0xf5, 0x4, 0x88,
    0x67, 0x11, 0x4, 0x3, 0xff, 0xcc, 0x4b, 0x15,
    0x9d, 0xfd, 0xba, 0xcc, 0xb7, 0x5d, 0xfb, 0x72,
    0xc4, 0x1, 0xff, 0xdc, 0x14, 0x8c, 0xda, 0x75,
    0x31, 0x0, 0xff, 0x89, 0x1a, 0x77, 0x54, 0xa2,
    0x1, 0xff, 0xd6, 0x37, 0xdb, 0x73, 0x0, 0xff,
    0xe5, 0x12, 0xd6, 0x41, 0x80, 0x7f, 0xf4, 0xd6,
    0x20, 0x60, 0x1f, 0xfd, 0x2, 0x7e, 0x83, 0x0,
    0xff, 0xf9, 0x93, 0x52, 0x0, 0x7f, 0xfc, 0xc5,
    0xf5, 0x0, 0x3f, 0xfa, 0x42, 0x6d, 0x13, 0x53,
    0xc, 0x62, 0x1, 0xff, 0xca, 0x15, 0x31, 0x0,
    0xff, 0xe7, 0x93, 0xee, 0x4b, 0xb2, 0xb3, 0xce,
    0x53, 0x8, 0x7, 0xff, 0x24, 0xf5, 0x40, 0x3f,
    0xf9, 0xc4, 0xb4, 0x60, 0x1f, 0xc9, 0xae, 0x20,
    0x1f, 0xfc, 0x91, 0x10, 0x7, 0xff, 0x39, 0xf4,
    0x80, 0x3f, 0xe5, 0xe2, 0x0, 0xff, 0xe5, 0x18,
    0x80, 0x7f, 0xf3, 0x84, 0x3, 0xff, 0x80, 0x22,
    0x70, 0xf, 0xfe, 0x4b, 0x80, 0x7f, 0xff, 0xc0,
    0x3f, 0xff, 0xe0, 0x1f, 0xff, 0xf0, 0xf, 0xff,
    0xf8, 0x7, 0xff, 0xfc, 0x3, 0xff, 0xfe, 0x1,
    0xff, 0xff, 0x0, 0xff, 0xff, 0x80, 0x7f, 0xff,
    0xc0, 0x3f, 0xff, 0xe0, 0x1f, 0xff, 0xf0, 0xf,
    0xff, 0xf8, 0x7, 0xff, 0xfc, 0x3, 0xff, 0xfe,
    0x1, 0xff, 0xff, 0x0, 0xff, 0xff, 0x80, 0x7f,
    0xff, 0xc0, 0x3f, 0xff, 0xe0, 0x1f, 0xff, 0xf0,
    0xf, 0xff, 0xf8, 0x7, 0xff, 0x2b, 0xc0, 0x3f,
    0xf9, 0x62, 0x1, 0xff, 0xc0, 0x10, 0x70, 0xf,
    0xfe, 0x69, 0x8b, 0x0, 0x7f, 0xf2, 0x58, 0x88,
    0x1, 0xff, 0x17, 0x90, 0x7, 0xff, 0x25, 0x8c,
    0x40, 0x4c, 0x40, 0x3f, 0xf9, 0x27, 0x6a, 0x20,
    0x1f, 0xc5, 0x68, 0x20, 0x1f, 0xfc, 0x81, 0x31,
    0x0, 0x9f, 0x4c, 0x3, 0xff, 0x92, 0x71, 0xb0,
    0xa6, 0x45, 0x1a, 0xcf, 0xb9, 0x0, 0x7f, 0xf2,
    0x57, 0xd4, 0x2, 0x25, 0x42, 0x0, 0xff, 0xe5,
    0x1b, 0xd6, 0x6e, 0xd9, 0x4c, 0x40, 0x1f, 0xfc,
    0xa3, 0xc7, 0x10, 0xc, 0x55, 0x66, 0x1, 0xff,
    0xe9, 0x49, 0x61, 0x0, 0xf1, 0x37, 0xb9, 0x0,
    0x7f, 0xf9, 0x4e, 0x25, 0x44, 0x3, 0xf8, 0xe3,
    0xe5, 0x4, 0x3, 0xff, 0xbe, 0x2b, 0x5a, 0xe4,
    0x1, 0xff, 0xc1, 0x26, 0xbc, 0xa5, 0x20, 0xf,
    0xfe, 0xc0, 0x9b, 0x56, 0x52, 0x88, 0x7, 0xff,
    0x18, 0x96, 0xb7, 0xae, 0x59, 0x8, 0x3, 0xff,
    0x9a, 0x48, 0xf3, 0x9f, 0x92, 0xa4, 0x1, 0xff,
    0xcd, 0x14, 0x69, 0xbd, 0xfe, 0xdc, 0xaa, 0x4c,
    0xa2, 0x27, 0x7a, 0x22, 0x99, 0x55, 0xe6, 0xf7,
    0xed, 0xc3, 0x18, 0x80, 0x7f, 0xf0, 0xc0,

    /* U+37 "7" */
    0x3, 0x8e, 0xff, 0xff, 0xf3, 0xf4, 0x98, 0x7,
    0xff, 0xfc, 0x3, 0xff, 0xfe, 0x1, 0xff, 0xff,
    0x0, 0xff, 0xe3, 0xf, 0x90, 0x8f, 0xff, 0x40,
    0x3, 0xff, 0xa2, 0x4f, 0x9d, 0xdf, 0xfc, 0xff,
    0x93, 0x0, 0xff, 0xe4, 0x9f, 0x8, 0x7, 0xff,
    0x54, 0xbc, 0x80, 0x3f, 0xf9, 0x2e, 0x44, 0x0,
    0xff, 0xea, 0xa, 0x90, 0x80, 0x7f, 0xf2, 0x8,
    0x8e, 0x1, 0xff, 0xd5, 0x2e, 0x50, 0xf, 0xfe,
    0x4b, 0xe9, 0x0, 0x7f, 0xf5, 0x54, 0xc4, 0x3,
    0xff, 0x90, 0x44, 0x60, 0xf, 0xfe, 0xa9, 0xf3,
    0x0, 0x7f, 0xf2, 0x5b, 0x4c, 0x3, 0xff, 0xaa,
    0xc6, 0x40, 0x1f, 0xfc, 0x81, 0x36, 0x0, 0xff,
    0xea, 0x96, 0xb0, 0x7, 0xff, 0x25, 0x78, 0xc0,
    0x3f, 0xfa, 0xae, 0x44, 0x0, 0xff, 0xe4, 0x9,
    0x10, 0x3, 0xff, 0xaa, 0x44, 0x60, 0xf, 0xfe,
    0x49, 0x7a, 0x80, 0x7f, 0xf5, 0x5b, 0x4c, 0x3,
    0xff, 0x92, 0xa4, 0x20, 0x1f, 0xfd, 0x41, 0x36,
    0x0, 0xff, 0xe4, 0x9f, 0x28, 0x7, 0xff, 0x55,
    0x78, 0xc0, 0x3f, 0xf9, 0x2c, 0x62, 0x1, 0xff,
    0xd4, 0x12, 0x50, 0xf, 0xfe, 0x49, 0xeb, 0x0,
    0x7f, 0xf5, 0x57, 0xc8, 0x3, 0xff, 0x92, 0xc4,
    0x40, 0xf, 0xfe, 0xa0, 0x91, 0x4, 0x3, 0xff,
    0x90, 0x5a, 0xe0, 0x1f, 0xfd, 0x52, 0xf5, 0x0,
    0xff, 0xe4, 0xb9, 0x10, 0x3, 0xff, 0xaa, 0xa4,
    0x20, 0x1f, 0xfc, 0x82, 0x23, 0x0, 0x7f, 0xf5,
    0x4f, 0x94, 0x3, 0xff, 0x92, 0xda, 0x60, 0x1f,
    0xfd, 0x56, 0x31, 0x0, 0xff, 0xe4, 0x9, 0xb0,
    0x7, 0xff, 0x54, 0xb5, 0x80, 0x3f, 0xf9, 0x2b,
    0xc6, 0x1, 0xff, 0xd5, 0x72, 0x20, 0x7, 0xff,
    0x20, 0x49, 0x40, 0x3f, 0xfa, 0xa4, 0x47, 0x0,
    0xff, 0xe4, 0xaf, 0x90, 0x7, 0xff, 0x55, 0xf4,
    0x80, 0x3f, 0xf9, 0x2, 0x44, 0x10, 0xf, 0xfe,
    0xa1, 0x11, 0x80, 0x3f, 0xf9, 0x25, 0xea, 0x1,
    0xff, 0xd5, 0x6d, 0x30, 0xf, 0xfe, 0x4a, 0x90,
    0x80, 0x7f, 0xf5, 0x4, 0xd8, 0x3, 0xff, 0x92,
    0x7c, 0xa0, 0x1f, 0xfd, 0x55, 0xe2, 0x0, 0xff,
    0xe4, 0xb1, 0x8, 0x7, 0xff, 0x50, 0x48, 0x82,
    0x1, 0xff, 0xc8, 0x2d, 0x70, 0xf, 0xfe, 0xa9,
    0x7a, 0x80, 0x7f, 0xf2, 0x5c, 0x88, 0x1, 0xff,
    0xd5, 0x52, 0x10, 0xf, 0xfe, 0x41, 0x11, 0xc0,
    0x3f, 0xfa, 0xa7, 0xca, 0x1, 0xff, 0xc9, 0x6d,
    0x20, 0xf, 0xfe, 0xab, 0x18, 0x80, 0x7f, 0xf2,
    0x8, 0xd8, 0x3, 0xff, 0xaa, 0x7a, 0xc0, 0x1f,
    0xfc, 0x96, 0xe3, 0x0, 0xff, 0xea, 0xb1, 0x10,
    0x3, 0xff, 0x90, 0x26, 0xa0, 0x1f, 0xfd, 0x52,
    0xd7, 0x0, 0xff, 0xe4, 0xaf, 0x10, 0x7, 0xff,
    0x55, 0xc8, 0x80, 0x1f, 0xfc, 0x81, 0x22, 0x8,
    0x7, 0xff, 0x50, 0x88, 0xe0, 0x1f, 0xfc, 0x92,
    0xf5, 0x0, 0xff, 0xea, 0xb6, 0x90, 0x7, 0xff,
    0x25, 0x48, 0x40, 0x3f, 0xfa, 0x82, 0x6c, 0x1,
    0xff, 0xc9, 0x3e, 0x50, 0xf, 0xfe, 0xaa, 0xf1,
    0x80, 0x7f, 0xf2, 0x58, 0xc4, 0x3, 0xff, 0xa8,
    0x24, 0xa0, 0x1f, 0xfc, 0x93, 0xd6, 0x0, 0xff,
    0xea, 0xaf, 0x90, 0x7, 0xff, 0x25, 0x88, 0x80,
    0x1f, 0xfd, 0x41, 0x22, 0x8, 0x7, 0xff, 0x20,
    0xb5, 0xc0, 0x3f, 0xfa, 0xa5, 0xea, 0x1, 0xff,
    0xc9, 0x72, 0x20, 0x7, 0xff, 0x55, 0x48, 0x40,
    0x3f, 0xf9, 0x4, 0x47, 0x0, 0xff, 0xea, 0x9f,
    0x28, 0x7, 0xff, 0x25, 0xb8, 0x80, 0x3f, 0xfa,
    0xac, 0x42, 0x1, 0xff, 0xc8, 0x13, 0x50, 0xf,
    0xfe, 0xa9, 0x6b, 0x80, 0x7f, 0xf2, 0x57, 0x88,
    0x3, 0xff, 0xaa, 0xe4, 0x40, 0xf, 0xfe, 0x40,
    0x92, 0x88, 0x7, 0xff, 0x50, 0x88, 0xe0, 0x1f,
    0xfc, 0x92, 0xf2, 0x0, 0xff, 0xea, 0xb6, 0x90,
    0x7, 0xff, 0x20, 0x54, 0x84, 0x3, 0xff, 0xa8,
    0x46, 0xc0, 0x1f, 0xfc, 0x92, 0xe5, 0x0, 0xff,
    0xea, 0xb7, 0x18, 0x7, 0xff, 0x25, 0x4c, 0x40,
    0x3f, 0xfa, 0x82, 0x6a, 0x1, 0xff, 0xc9, 0x3e,
    0x60, 0xf, 0xfe, 0xaa, 0xf1, 0x0, 0x7f, 0xf2,
    0x58, 0x88, 0x1, 0xff, 0xd4, 0x12, 0x20, 0x80,
    0x7f, 0xf2, 0xb, 0x5c, 0x3, 0xff, 0xaa, 0x5e,
    0xa0, 0x1f, 0xfc, 0x97, 0x22, 0x0, 0x7f, 0xf5,
    0x54, 0x84, 0x3, 0xff, 0x90, 0x44, 0x70, 0xf,
    0xfe, 0xa9, 0xf2, 0x80, 0x7f, 0xf2, 0x5b, 0x48,
    0x3, 0xff, 0xaa, 0xc6, 0x20, 0x1f, 0xfc, 0x82,
    0x36, 0x0, 0xff, 0xea, 0x9e, 0xb0, 0x7, 0xff,
    0x25, 0xb8, 0xc0, 0x3f, 0xfa, 0xac, 0x44, 0x0,
    0xff, 0xe4, 0x9, 0xa8, 0x7, 0xff, 0x54, 0xb5,
    0xc0, 0x3f, 0xf9, 0x2b, 0xc4, 0x1, 0xff, 0xd3,

    /* U+38 "8" */
    0x0, 0xff, 0xe4, 0x89, 0x22, 0xa9, 0x98, 0xef,
    0x44, 0x4e, 0xf3, 0x31, 0x50, 0xc8, 0x40, 0x3f,
    0xfb, 0x4, 0x8f, 0x39, 0xdf, 0xdb, 0x75, 0x49,
    0x94, 0x44, 0xef, 0x44, 0x53, 0x2a, 0xbc, 0xde,
    0xfd, 0xb9, 0x63, 0x10, 0xf, 0xfe, 0x69, 0xb5,
    0x6e, 0xae, 0x18, 0xc4, 0x3, 0xff, 0x9a, 0x48,
    0xd3, 0x9d, 0x92, 0xa4, 0x1, 0xff, 0xc6, 0x27,
    0xcc, 0x4a, 0x90, 0x7, 0xff, 0x64, 0xda, 0xb2,
    0xd8, 0x80, 0x3f, 0xf8, 0x27, 0x39, 0x6, 0x1,
    0xff, 0xe0, 0x14, 0x9f, 0x83, 0x0, 0xfe, 0x27,
    0xf6, 0x10, 0xf, 0xff, 0x29, 0x3c, 0x30, 0x80,
    0x78, 0xea, 0x86, 0x1, 0xff, 0xe9, 0x4a, 0x62,
    0x0, 0xc4, 0x8a, 0x40, 0x1f, 0xfc, 0xa3, 0x7a,
    0xcd, 0xdb, 0x29, 0x88, 0x3, 0xff, 0x94, 0x76,
    0x82, 0x1, 0x3e, 0x90, 0x7, 0xff, 0x24, 0xe3,
    0xa1, 0x4c, 0x8a, 0x35, 0x9e, 0x72, 0x0, 0xff,
    0xe4, 0x97, 0xa8, 0x0, 0x4d, 0x80, 0x3f, 0xf9,
    0x25, 0x6a, 0x40, 0x1f, 0xc7, 0x68, 0x20, 0x1f,
    0xfc, 0x81, 0x31, 0x0, 0x18, 0x88, 0x3, 0xff,
    0x92, 0xe4, 0x40, 0xf, 0xf8, 0xbc, 0x80, 0x3f,
    0xf9, 0x2c, 0x62, 0x0, 0xf0, 0xf, 0xfe, 0x58,
    0x80, 0x7f, 0xf0, 0x4, 0x1c, 0x3, 0xff, 0xfe,
    0x1, 0xff, 0xff, 0x0, 0xff, 0xff, 0x80, 0x7f,
    0xff, 0xc0, 0x3f, 0xff, 0xe0, 0x1f, 0xff, 0xf0,
    0xf, 0xff, 0xf8, 0x7, 0xff, 0xfc, 0x3, 0xff,
    0xfe, 0x1, 0xff, 0xff, 0x0, 0xff, 0xff, 0x80,
    0x7f, 0xff, 0xc0, 0x3f, 0xfc, 0xde, 0x20, 0x1f,
    0xfe, 0xf7, 0x0, 0x8c, 0x5c, 0x3, 0xff, 0xde,
    0x26, 0x20, 0x24, 0x40, 0xf, 0xfe, 0x50, 0x80,
    0x7f, 0xf0, 0x4, 0x3, 0xff, 0x94, 0x44, 0x70,
    0x9, 0x71, 0x0, 0x3f, 0xf9, 0xc, 0x62, 0x1,
    0xff, 0x1f, 0x30, 0x7, 0xff, 0x1c, 0x53, 0x8,
    0x2, 0x14, 0xd4, 0x0, 0xff, 0xe3, 0x9e, 0x20,
    0x7, 0xf8, 0x51, 0x4, 0x1, 0xff, 0xc6, 0x17,
    0xd4, 0x0, 0xe1, 0x68, 0x72, 0x0, 0xff, 0xe3,
    0x2c, 0x4a, 0x88, 0x7, 0x13, 0x5c, 0x18, 0x7,
    0xff, 0x18, 0xe2, 0xd0, 0x3, 0xf1, 0xc7, 0x39,
    0x0, 0x7f, 0xf1, 0x49, 0xab, 0xbf, 0xdd, 0xfe,
    0xd9, 0x51, 0x0, 0xff, 0xe2, 0xa, 0x4f, 0x31,
    0x0, 0x7f, 0xc7, 0x19, 0x6c, 0x40, 0x1f, 0xfc,
    0x81, 0x0, 0xff, 0xe3, 0x89, 0xc6, 0xdb, 0x10,
    0x7, 0xff, 0xc, 0x52, 0x77, 0x20, 0xc0, 0x3f,
    0xfa, 0xe9, 0x39, 0x87, 0x30, 0xf, 0xfe, 0x39,
    0x35, 0x74, 0x18, 0x7, 0xff, 0x5d, 0x27, 0xa5,
    0x4, 0x3, 0xff, 0x88, 0x2b, 0x59, 0x2a, 0x40,
    0x1f, 0xfd, 0xb3, 0x6b, 0xc8, 0x30, 0xf, 0xfe,
    0x0, 0xad, 0x51, 0x44, 0x3, 0xff, 0x88, 0x29,
    0x39, 0xdf, 0xf7, 0x63, 0x98, 0x7, 0xff, 0x14,
    0x9f, 0xa4, 0xc0, 0x3f, 0x8e, 0x61, 0x0, 0x3f,
    0xf8, 0xc7, 0x14, 0xc6, 0x20, 0x10, 0x9c, 0x74,
    0x10, 0x7, 0xff, 0x14, 0x9b, 0xdc, 0x40, 0x3c,
    0x94, 0xc4, 0x1, 0xff, 0xc6, 0x3b, 0x41, 0x0,
    0xfe, 0x24, 0x40, 0x80, 0x7f, 0xf1, 0x8e, 0xa4,
    0x80, 0x31, 0xe2, 0x8, 0x7, 0xff, 0x1d, 0x88,
    0x80, 0x1f, 0xf1, 0x79, 0x0, 0x7f, 0xf1, 0xc9,
    0x14, 0x40, 0x26, 0x32, 0x0, 0xff, 0xe4, 0x88,
    0x7, 0xff, 0x0, 0x41, 0xc0, 0x3f, 0xf9, 0x7,
    0xca, 0x0, 0x22, 0x38, 0x7, 0xff, 0xbc, 0x84,
    0x3, 0x8, 0x7, 0xff, 0xbd, 0xcc, 0x40, 0x1e,
    0x1, 0xff, 0xff, 0x0, 0xff, 0xff, 0x80, 0x7f,
    0xff, 0xc0, 0x3f, 0xff, 0xe0, 0x1f, 0xff, 0xf0,
    0xf, 0xff, 0xf8, 0x7, 0xff, 0xfc, 0x3, 0xff,
    0xfe, 0x1, 0xff, 0xff, 0x0, 0xff, 0xff, 0x80,
    0x7f, 0xff, 0xc0, 0x3f, 0xff, 0xe0, 0x1f, 0xff,
    0xf0, 0xf, 0xff, 0xf8, 0x7, 0xff, 0xef, 0xc4,
    0x3, 0xff, 0x94, 0x20, 0x1f, 0xfc, 0x1, 0x13,
    0x80, 0x7f, 0xf2, 0x5c, 0x2, 0x31, 0x70, 0xf,
    0xfe, 0x4b, 0x91, 0x0, 0x3f, 0xe2, 0xe2, 0x0,
    0xff, 0xe4, 0x89, 0x88, 0x9, 0x88, 0x7, 0xff,
    0x24, 0xad, 0x44, 0x3, 0xf8, 0xed, 0x4, 0x3,
    0xff, 0x90, 0x26, 0xc0, 0x12, 0x69, 0x80, 0x7f,
    0xf2, 0x4e, 0x36, 0x14, 0xc8, 0xa3, 0x69, 0xe7,
    0x20, 0xf, 0xfe, 0x4a, 0xe1, 0x80, 0x42, 0xb6,
    0x40, 0x1f, 0xfc, 0xa3, 0x7a, 0xcd, 0xdb, 0x25,
    0x88, 0x3, 0xff, 0x94, 0x9a, 0x80, 0x1c, 0x4d,
    0x68, 0x1, 0xff, 0xe8, 0x15, 0xe7, 0x10, 0xf,
    0xb, 0x43, 0x90, 0x7, 0xff, 0x94, 0xe2, 0xa,
    0x20, 0x1f, 0xc7, 0x1f, 0x28, 0x20, 0x1f, 0xfd,
    0xf2, 0x5a, 0xd6, 0x20, 0xf, 0xfe, 0x9, 0x35,
    0xe5, 0x31, 0x0, 0x7f, 0xf6, 0x4, 0xde, 0xf2,
    0x94, 0x40, 0x3f, 0xf8, 0xc4, 0xb3, 0xbd, 0x72,
    0xc8, 0x40, 0x1f, 0xfc, 0xd2, 0x47, 0x9c, 0xfc,
    0x84, 0x10, 0xf, 0xfe, 0x68, 0xa3, 0x4d, 0xef,
    0xf6, 0xe5, 0x52, 0x65, 0x11, 0x3b, 0xd1, 0x14,
    0xca, 0xaf, 0x37, 0xbf, 0x6e, 0x18, 0xc4, 0x3,
    0xff, 0x86,

    /* U+39 "9" */
    0x0, 0xff, 0xe4, 0x89, 0x1a, 0xa9, 0x98, 0xef,
    0x44, 0x4e, 0xf3, 0x31, 0x50, 0xc8, 0x40, 0x3f,
    0xfb, 0x2, 0x8d, 0x37, 0xbf, 0xdb, 0x95, 0x49,
    0x94, 0x44, 0xef, 0x44, 0x53, 0x2a, 0xbc, 0xde,
    0xfd, 0xb8, 0x63, 0x10, 0xf, 0xfe, 0x69, 0x2d,
    0x6f, 0x5c, 0xb2, 0x10, 0x7, 0xff, 0x34, 0x91,
    0xe7, 0x3f, 0x21, 0x48, 0x3, 0xff, 0x8c, 0x4d,
    0x79, 0x4a, 0x40, 0x1f, 0xfd, 0x81, 0x37, 0xac,
    0xa5, 0x10, 0xf, 0xfe, 0x9, 0xc7, 0xca, 0x8,
    0x7, 0xff, 0x7c, 0x56, 0xb5, 0xc8, 0x3, 0xf8,
    0x9f, 0xdc, 0x80, 0x3f, 0xfc, 0xa7, 0x12, 0xa2,
    0x1, 0xe2, 0xaa, 0x18, 0x7, 0xff, 0xa5, 0x25,
    0x84, 0x3, 0x12, 0xa1, 0x0, 0x7f, 0xf2, 0x44,
    0xde, 0xb3, 0x76, 0xca, 0x62, 0x0, 0xff, 0xe5,
    0x1e, 0x38, 0x80, 0x4f, 0xa6, 0x1, 0xff, 0xc9,
    0x38, 0xd8, 0x53, 0x22, 0x8d, 0x67, 0xdc, 0x80,
    0x3f, 0xf9, 0x2b, 0xea, 0x0, 0x13, 0x10, 0xf,
    0xfe, 0x49, 0xda, 0x8, 0x7, 0xf1, 0x5a, 0x8,
    0x7, 0xff, 0x20, 0x4c, 0x40, 0x6, 0x2c, 0x1,
    0xff, 0xc9, 0x62, 0x20, 0x7, 0xfc, 0x5e, 0x40,
    0x1f, 0xfc, 0x96, 0x31, 0x0, 0x78, 0x7, 0xff,
    0x2c, 0x40, 0x3f, 0xf8, 0x2, 0xe, 0x1, 0xff,
    0xff, 0x0, 0xff, 0xff, 0x80, 0x7f, 0xff, 0xc0,
    0x3f, 0xff, 0xe0, 0x1f, 0xff, 0xf0, 0xf, 0xff,
    0xf8, 0x7, 0xff, 0xfc, 0x3, 0xff, 0xfe, 0x1,
    0xff, 0xff, 0x0, 0xff, 0xff, 0x80, 0x7f, 0xff,
    0xc0, 0x3f, 0xff, 0xe0, 0x1f, 0xff, 0xf0, 0xf,
    0xff, 0xf8, 0x7, 0xff, 0xfc, 0x3, 0xff, 0x97,
    0xe0, 0x1f, 0xfc, 0xb1, 0x0, 0xff, 0xe0, 0x8,
    0x38, 0x7, 0xff, 0x34, 0xc4, 0x40, 0x1f, 0xfc,
    0x97, 0x22, 0x0, 0x7f, 0xc5, 0xe4, 0x1, 0xff,
    0xcd, 0x10, 0x70, 0xf, 0xfe, 0x49, 0x5a, 0x90,
    0x7, 0xf1, 0xda, 0x8, 0x7, 0xff, 0x39, 0x4c,
    0x40, 0x3f, 0xf9, 0x27, 0x1f, 0x4e, 0xa8, 0x93,
    0x45, 0xeb, 0x90, 0x7, 0xff, 0x3c, 0xf5, 0x40,
    0x3f, 0xf9, 0x64, 0xb1, 0x57, 0x74, 0xba, 0x8,
    0x7, 0xff, 0x49, 0x35, 0x0, 0x3f, 0xfe, 0x62,
    0xdc, 0xa2, 0x1, 0xff, 0xf3, 0x5b, 0xb2, 0x8,
    0x7, 0xff, 0x40, 0xdd, 0xc8, 0x1, 0xff, 0xd2,
    0x15, 0xbd, 0x73, 0x0, 0xff, 0xe5, 0x93, 0x56,
    0xc7, 0x0, 0x7f, 0xf5, 0x8e, 0x33, 0x69, 0xd0,
    0x40, 0x3f, 0xf8, 0x24, 0x8d, 0x3b, 0xa9, 0x51,
    0x0, 0xff, 0xed, 0x92, 0xc5, 0xf7, 0xee, 0x5d,
    0xaa, 0x97, 0x6c, 0xde, 0xfd, 0xb9, 0x62, 0x0,
    0xff, 0xf2, 0x91, 0xa2, 0x15, 0x48, 0x83, 0x21,
    0x0, 0xff, 0xff, 0x80, 0x7f, 0xf4, 0xc4, 0xd1,
    0x3f, 0xf9, 0x4, 0x20, 0x1f, 0xfd, 0xd1, 0x7f,
    0xbb, 0xff, 0xe4, 0x42, 0x80, 0x7f, 0xff, 0xc0,
    0x3f, 0xff, 0xe0, 0x1f, 0xff, 0xf0, 0xf, 0xff,
    0xf8, 0x7, 0xff, 0xfc, 0x3, 0xff, 0xfe, 0x1,
    0xff, 0xff, 0x0, 0xff, 0xff, 0x80, 0x7f, 0xff,
    0xc0, 0x3f, 0xff, 0xe0, 0x1f, 0xff, 0xf0, 0xf,
    0xff, 0xf8, 0x7, 0xff, 0xfc, 0x3, 0xff, 0xfe,
    0x1, 0xff, 0xff, 0x0, 0xff, 0xf9, 0x8, 0x7,
    0xff, 0x0, 0x41, 0xc0, 0x3f, 0xf9, 0xc2, 0x6c,
    0x1, 0xff, 0xc8, 0x62, 0x20, 0x7, 0xfc, 0x5c,
    0x40, 0x1f, 0xfc, 0x96, 0x31, 0x0, 0x84, 0xc4,
    0x3, 0xff, 0x8e, 0x78, 0x82, 0x1, 0xfc, 0x48,
    0xa2, 0x1, 0xff, 0xc8, 0x13, 0x10, 0xc, 0xbe,
    0xa0, 0x1f, 0xfc, 0x84, 0x9d, 0x85, 0x32, 0x21,
    0xa3, 0x4f, 0xc1, 0x0, 0x7f, 0xf2, 0x57, 0xd4,
    0x3, 0xb, 0xe1, 0x80, 0x7f, 0xf2, 0x4d, 0xeb,
    0x37, 0x59, 0x72, 0xc4, 0x1, 0xff, 0xca, 0x3c,
    0x71, 0x0, 0xe1, 0x69, 0x40, 0xf, 0xff, 0x42,
    0x4b, 0x8, 0x7, 0xc2, 0xb3, 0x6, 0x1, 0xff,
    0xe4, 0x38, 0x95, 0x10, 0xf, 0xf1, 0x3e, 0xd2,
    0x88, 0x7, 0xff, 0x78, 0x56, 0xb5, 0xc8, 0x3,
    0xff, 0x84, 0x2b, 0x59, 0x4c, 0x62, 0x1, 0xff,
    0xd6, 0x13, 0x6a, 0xca, 0x51, 0x0, 0xff, 0xe3,
    0x92, 0xce, 0x7e, 0x4b, 0xa1, 0x0, 0x7f, 0xf3,
    0x9, 0x1e, 0x73, 0xf2, 0x54, 0x80, 0x3f, 0xf9,
    0xc2, 0x6d, 0x17, 0xbf, 0xdb, 0x97, 0x53, 0x28,
    0x8c, 0xf1, 0x14, 0xca, 0xaf, 0x37, 0xbf, 0x6e,
    0x18, 0xc4, 0x3, 0xff, 0x86,

    /* U+3A ":" */
    0x15, 0x9d, 0xdf, 0xfe, 0x4e, 0x41, 0x81, 0x91,
    0x7f, 0xf2, 0xc5, 0xc0, 0x3f, 0xff, 0xe0, 0x1f,
    0xff, 0xf0, 0xf, 0xff, 0xb0, 0xb5, 0xff, 0xff,
    0xf2, 0x7a, 0x50, 0x3, 0xff, 0xfe, 0x1, 0xff,
    0xff, 0x0, 0xff, 0xff, 0x80, 0x7f, 0xff, 0xc0,
    0x3f, 0xff, 0xe0, 0x1f, 0xff, 0xf0, 0xf, 0xff,
    0xf8, 0x7, 0xff, 0x78, 0x56, 0x77, 0x7f, 0xf9,
    0x39, 0x6, 0x6, 0x45, 0xff, 0xcb, 0x17, 0x0,
    0xff, 0xff, 0x80, 0x7f, 0xff, 0xc0, 0x3f, 0xfe,
    0xc0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 378, .box_w = 66, .box_h = 72, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 472, .adv_w = 278, .box_w = 48, .box_h = 70, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 676, .adv_w = 378, .box_w = 66, .box_h = 71, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1332, .adv_w = 378, .box_w = 66, .box_h = 72, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1956, .adv_w = 424, .box_w = 78, .box_h = 70, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2460, .adv_w = 378, .box_w = 66, .box_h = 71, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 2936, .adv_w = 378, .box_w = 66, .box_h = 72, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 3527, .adv_w = 328, .box_w = 60, .box_h = 70, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 4159, .adv_w = 378, .box_w = 66, .box_h = 72, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 4841, .adv_w = 378, .box_w = 66, .box_h = 72, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 5430, .adv_w = 211, .box_w = 27, .box_h = 42, .ofs_x = 2, .ofs_y = 0}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 48, .range_length = 11, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    }
};



/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

/*Store all the custom data of the font*/
static lv_font_fmt_txt_dsc_t font_dsc = {
    .glyph_bitmap = gylph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = NULL,
    .kern_scale = 0,
    .cmap_num = 1,
    .bpp = 4,
    .kern_classes = 0,
    .bitmap_format = 1
};


/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
lv_font_t Morganite_100 = {
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 72,          /*The maximum line height required by the font*/
    .base_line = 1,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_HOR,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};

#endif /*#if MORGANITE_100*/

