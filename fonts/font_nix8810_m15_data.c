/*******************************************************************************
 * Size: 16 px
 * Bpp: 1
 * Opts: --font /fonts/Px437_Nix8810_M15.ttf -o /fonts/font_nix8810_m15_data.c --no-compress --size 16 --bpp 1 --format lvgl --symbols °↑↓↕ --range 0x20-0x7F
 ******************************************************************************/

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif

#ifndef FONT_NIX8810_M15_DATA
#define FONT_NIX8810_M15_DATA 1
#endif

#if FONT_NIX8810_M15_DATA

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xff, 0xfc, 0x3c,

    /* U+0022 "\"" */
    0xcf, 0x3c, 0xc0,

    /* U+0023 "#" */
    0x44, 0x8d, 0xff, 0xec, 0x48, 0x91, 0xbf, 0xfd,
    0x89, 0x10,

    /* U+0024 "$" */
    0x10, 0xfb, 0xfe, 0xb7, 0x7, 0x7, 0x6b, 0xfe,
    0xf8, 0x40,

    /* U+0025 "%" */
    0x43, 0xce, 0x97, 0x64, 0x83, 0xc, 0x12, 0x6e,
    0x97, 0x3c, 0x20,

    /* U+0026 "&" */
    0x38, 0xd9, 0xb1, 0xc3, 0x7, 0x1e, 0xe7, 0xcc,
    0xf8, 0xd8,

    /* U+0027 "'" */
    0x77, 0x6c,

    /* U+0028 "(" */
    0x19, 0xdc, 0xce, 0x73, 0x8c, 0x71, 0xc6,

    /* U+0029 ")" */
    0xc7, 0x1c, 0x63, 0x9c, 0xe6, 0x77, 0x30,

    /* U+002A "*" */
    0x6c, 0xd8, 0xe7, 0xff, 0xe7, 0x1b, 0x36,

    /* U+002B "+" */
    0x30, 0xc3, 0x3f, 0xfc, 0xc3, 0xc,

    /* U+002C "," */
    0x77, 0x6c,

    /* U+002D "-" */
    0xff, 0xfc,

    /* U+002E "." */
    0xff, 0x80,

    /* U+002F "/" */
    0xc, 0x31, 0x86, 0x30, 0xc6, 0x18, 0xc3, 0xc,
    0x0,

    /* U+0030 "0" */
    0x7d, 0xff, 0x1e, 0x7d, 0xfe, 0xf9, 0xe3, 0xc7,
    0xfd, 0xf0,

    /* U+0031 "1" */
    0x10, 0xc7, 0x3c, 0x30, 0xc3, 0xc, 0x33, 0xff,
    0xc0,

    /* U+0032 "2" */
    0x7d, 0xff, 0x1e, 0x30, 0xe3, 0x8e, 0x38, 0xe1,
    0xff, 0xf8,

    /* U+0033 "3" */
    0x7d, 0xff, 0x18, 0x33, 0xc7, 0x81, 0x83, 0xc7,
    0xfd, 0xf0,

    /* U+0034 "4" */
    0x4, 0x18, 0x71, 0xe6, 0xd9, 0xbf, 0xff, 0xc,
    0x3c, 0x78,

    /* U+0035 "5" */
    0xff, 0xff, 0x6, 0xf, 0xdf, 0xc1, 0x83, 0xc7,
    0xfd, 0xf0,

    /* U+0036 "6" */
    0x38, 0xe3, 0x86, 0xf, 0xdf, 0xf1, 0xe3, 0xc7,
    0xfd, 0xf0,

    /* U+0037 "7" */
    0xff, 0xff, 0x18, 0x30, 0xe1, 0x87, 0xc, 0x18,
    0x30, 0x60,

    /* U+0038 "8" */
    0x7d, 0xff, 0x1e, 0x37, 0xcf, 0xb1, 0xe3, 0xc7,
    0xfd, 0xf0,

    /* U+0039 "9" */
    0x7d, 0xff, 0x1e, 0x3c, 0x7f, 0xdf, 0x83, 0x6,
    0xfd, 0xf0,

    /* U+003A ":" */
    0xfc, 0xf, 0xc0,

    /* U+003B ";" */
    0xfc, 0x3f, 0x60,

    /* U+003C "<" */
    0x6, 0x18, 0x61, 0x86, 0x18, 0x18, 0x18, 0x18,
    0x18, 0x18,

    /* U+003D "=" */
    0xff, 0xfc, 0x0, 0xf, 0xff, 0xc0,

    /* U+003E ">" */
    0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc3, 0xc, 0x30,
    0xc3, 0x0,

    /* U+003F "?" */
    0x7b, 0xfc, 0xf3, 0xc, 0x73, 0x8c, 0x0, 0xc3,
    0x0,

    /* U+0040 "@" */
    0x7d, 0xff, 0x1e, 0xfd, 0xfb, 0xf7, 0xef, 0xc1,
    0xe1, 0xc0,

    /* U+0041 "A" */
    0x38, 0xfb, 0xbe, 0x3c, 0x78, 0xff, 0xff, 0xc7,
    0x8f, 0x18,

    /* U+0042 "B" */
    0xfd, 0xfd, 0x9b, 0x37, 0xcf, 0x99, 0xb3, 0x67,
    0xff, 0xf0,

    /* U+0043 "C" */
    0x7d, 0xff, 0x1e, 0x3c, 0x18, 0x30, 0x63, 0xc7,
    0xfd, 0xf0,

    /* U+0044 "D" */
    0xf9, 0xf9, 0xbb, 0x36, 0x6c, 0xd9, 0xb3, 0x6f,
    0xfb, 0xe0,

    /* U+0045 "E" */
    0xff, 0xfd, 0x9b, 0x7, 0x8f, 0x18, 0x30, 0x67,
    0xff, 0xf8,

    /* U+0046 "F" */
    0xff, 0xfd, 0x9b, 0x7, 0x8f, 0x18, 0x30, 0x61,
    0xe3, 0xc0,

    /* U+0047 "G" */
    0x3c, 0xff, 0x9e, 0xc, 0x19, 0xf1, 0xe3, 0xe6,
    0xfc, 0xf8,

    /* U+0048 "H" */
    0xc7, 0x8f, 0x1e, 0x3f, 0xff, 0xf1, 0xe3, 0xc7,
    0x8f, 0x18,

    /* U+0049 "I" */
    0xff, 0x66, 0x66, 0x66, 0x6f, 0xf0,

    /* U+004A "J" */
    0x1e, 0x3c, 0x30, 0x60, 0xc1, 0x83, 0x66, 0xcd,
    0xf9, 0xe0,

    /* U+004B "K" */
    0xc7, 0x9f, 0x77, 0xcf, 0x1c, 0x3c, 0x7c, 0xdd,
    0x9f, 0x18,

    /* U+004C "L" */
    0xf1, 0xe1, 0x83, 0x6, 0xc, 0x18, 0x31, 0x67,
    0xff, 0xf8,

    /* U+004D "M" */
    0x83, 0x8f, 0x1f, 0x7f, 0xff, 0xf5, 0xe3, 0xc7,
    0x8f, 0x18,

    /* U+004E "N" */
    0xc7, 0x8f, 0x9f, 0x3f, 0x7f, 0xff, 0xef, 0xcf,
    0x9f, 0x18,

    /* U+004F "O" */
    0x38, 0xfb, 0xbe, 0x3c, 0x78, 0xf1, 0xe3, 0xee,
    0xf8, 0xe0,

    /* U+0050 "P" */
    0xfd, 0xff, 0x1e, 0x3f, 0xff, 0xb0, 0x60, 0xc1,
    0x83, 0x0,

    /* U+0051 "Q" */
    0x38, 0xfb, 0xbe, 0x3c, 0x78, 0xf1, 0xf3, 0xfe,
    0xf8, 0xe0, 0xe0,

    /* U+0052 "R" */
    0xfd, 0xff, 0x1e, 0x3f, 0xff, 0xbc, 0x7c, 0xdd,
    0x9f, 0x18,

    /* U+0053 "S" */
    0x7d, 0xff, 0x1e, 0xf, 0xf, 0x87, 0x83, 0xc7,
    0xfd, 0xf0,

    /* U+0054 "T" */
    0xff, 0xfb, 0x4c, 0x30, 0xc3, 0xc, 0x31, 0xe7,
    0x80,

    /* U+0055 "U" */
    0xc7, 0x8f, 0x1e, 0x3c, 0x78, 0xf1, 0xe3, 0xc7,
    0xfd, 0xf0,

    /* U+0056 "V" */
    0xc7, 0x8f, 0x1e, 0x3c, 0x78, 0xf1, 0xf7, 0x7c,
    0x70, 0x40,

    /* U+0057 "W" */
    0xc7, 0x8f, 0x1e, 0xbd, 0x7a, 0xf5, 0xff, 0xfe,
    0xf9, 0xb0,

    /* U+0058 "X" */
    0xc7, 0x8f, 0xbb, 0x67, 0xc7, 0x1f, 0x36, 0xef,
    0x8f, 0x18,

    /* U+0059 "Y" */
    0xcf, 0x3c, 0xf3, 0xcf, 0xf7, 0x8c, 0x31, 0xe7,
    0x80,

    /* U+005A "Z" */
    0xff, 0xfc, 0x18, 0x71, 0xc7, 0x1c, 0x70, 0xc1,
    0xff, 0xf8,

    /* U+005B "[" */
    0xfc, 0xcc, 0xcc, 0xcc, 0xcc, 0xf0,

    /* U+005C "\\" */
    0xc3, 0x6, 0x18, 0x30, 0xc1, 0x86, 0xc, 0x30,
    0xc0,

    /* U+005D "]" */
    0xf3, 0x33, 0x33, 0x33, 0x33, 0xf0,

    /* U+005E "^" */
    0x23, 0xb6,

    /* U+005F "_" */
    0xff, 0xff,

    /* U+0060 "`" */
    0xd9, 0x10,

    /* U+0061 "a" */
    0x78, 0xf8, 0x33, 0xef, 0xd9, 0xbf, 0xbb,

    /* U+0062 "b" */
    0xe1, 0xc1, 0x83, 0xc7, 0xcc, 0xd9, 0xb3, 0x67,
    0xff, 0xf0,

    /* U+0063 "c" */
    0x7d, 0xff, 0x1e, 0xc, 0x18, 0xff, 0xbe,

    /* U+0064 "d" */
    0x1c, 0x18, 0x31, 0xe7, 0xd9, 0xb3, 0x66, 0xcd,
    0xfd, 0xd8,

    /* U+0065 "e" */
    0x7d, 0xff, 0x1f, 0xff, 0xf8, 0x3f, 0xbe,

    /* U+0066 "f" */
    0x1c, 0x7c, 0xd9, 0x8f, 0xdf, 0x8c, 0x18, 0x30,
    0xf1, 0xe0,

    /* U+0067 "g" */
    0x7b, 0xff, 0x1e, 0x3f, 0xef, 0xc1, 0xbf, 0x7c,

    /* U+0068 "h" */
    0xe0, 0xc1, 0x83, 0xc7, 0xcc, 0xd9, 0xb3, 0x66,
    0xcf, 0x98,

    /* U+0069 "i" */
    0x66, 0xe, 0xe6, 0x66, 0xff,

    /* U+006A "j" */
    0xc, 0x30, 0x7, 0x1c, 0x30, 0xf3, 0xcf, 0xf7,
    0x80,

    /* U+006B "k" */
    0xc1, 0x83, 0x6, 0x7d, 0xdf, 0x3c, 0x78, 0xf9,
    0xbb, 0x38,

    /* U+006C "l" */
    0xee, 0x66, 0x66, 0x66, 0x6f, 0xf0,

    /* U+006D "m" */
    0xad, 0xff, 0xfe, 0xbd, 0x7a, 0xf5, 0xe3,

    /* U+006E "n" */
    0xdd, 0xfd, 0x9b, 0x36, 0x6c, 0xd9, 0xb3,

    /* U+006F "o" */
    0x7d, 0xff, 0x1e, 0x3c, 0x78, 0xff, 0xbe,

    /* U+0070 "p" */
    0xfd, 0xfd, 0x9b, 0x37, 0xef, 0x98, 0x78, 0xf0,

    /* U+0071 "q" */
    0x77, 0xff, 0x36, 0x6f, 0xcf, 0x83, 0xf, 0x1e,

    /* U+0072 "r" */
    0xdd, 0xfd, 0xdb, 0x36, 0xc, 0x18, 0x30,

    /* U+0073 "s" */
    0x7d, 0xff, 0x8b, 0xc1, 0xd9, 0xff, 0xbe,

    /* U+0074 "t" */
    0x60, 0xc1, 0x87, 0xcf, 0x8c, 0x18, 0x33, 0x66,
    0xfc, 0xf0,

    /* U+0075 "u" */
    0xcd, 0x9b, 0x36, 0x6c, 0xd9, 0xbf, 0xbb,

    /* U+0076 "v" */
    0xc7, 0x8f, 0x1e, 0x3e, 0xef, 0x8e, 0x8,

    /* U+0077 "w" */
    0xc7, 0x8f, 0x5e, 0xbd, 0x7f, 0xff, 0xb6,

    /* U+0078 "x" */
    0xc7, 0xdd, 0xf1, 0xc3, 0x8f, 0xbb, 0xe3,

    /* U+0079 "y" */
    0xe7, 0xcd, 0x9b, 0x37, 0xe7, 0xc1, 0xbf, 0x7c,

    /* U+007A "z" */
    0xff, 0xfc, 0x38, 0xe3, 0x8e, 0x3f, 0xff,

    /* U+007B "{" */
    0x36, 0x66, 0xcc, 0x66, 0x66, 0x30,

    /* U+007C "|" */
    0xff, 0xcf, 0xfc,

    /* U+007D "}" */
    0xc6, 0x66, 0x33, 0x66, 0x66, 0xc0,

    /* U+007E "~" */
    0x47, 0x6e, 0x20,

    /* U+007F "" */
    0x10, 0x20, 0xe1, 0x46, 0xc8, 0xbf, 0x80,

    /* U+00B0 "°" */
    0x31, 0x28, 0x61, 0x48, 0xc0,

    /* U+2191 "↑" */
    0x31, 0xeb, 0x4c, 0x30, 0xc3, 0xc, 0x30, 0xc3,
    0x0,

    /* U+2193 "↓" */
    0x30, 0xc3, 0xc, 0x30, 0xc3, 0xc, 0xb5, 0xe3,
    0x0,

    /* U+2195 "↕" */
    0x31, 0xeb, 0x4c, 0x30, 0xc3, 0xc, 0xb5, 0xe3,
    0x0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 128, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 128, .box_w = 2, .box_h = 11, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 4, .adv_w = 128, .box_w = 6, .box_h = 3, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 7, .adv_w = 128, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 17, .adv_w = 128, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 27, .adv_w = 128, .box_w = 7, .box_h = 12, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 38, .adv_w = 128, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 48, .adv_w = 128, .box_w = 4, .box_h = 4, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 50, .adv_w = 128, .box_w = 5, .box_h = 11, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 57, .adv_w = 128, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 64, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 71, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 77, .adv_w = 128, .box_w = 4, .box_h = 4, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 79, .adv_w = 128, .box_w = 7, .box_h = 2, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 81, .adv_w = 128, .box_w = 3, .box_h = 3, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 83, .adv_w = 128, .box_w = 6, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 92, .adv_w = 128, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 102, .adv_w = 128, .box_w = 6, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 111, .adv_w = 128, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 121, .adv_w = 128, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 131, .adv_w = 128, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 141, .adv_w = 128, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 151, .adv_w = 128, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 161, .adv_w = 128, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 171, .adv_w = 128, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 181, .adv_w = 128, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 191, .adv_w = 128, .box_w = 2, .box_h = 9, .ofs_x = 2, .ofs_y = 1},
    {.bitmap_index = 194, .adv_w = 128, .box_w = 2, .box_h = 10, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 197, .adv_w = 128, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 207, .adv_w = 128, .box_w = 7, .box_h = 6, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 213, .adv_w = 128, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 223, .adv_w = 128, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 232, .adv_w = 128, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 242, .adv_w = 128, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 252, .adv_w = 128, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 262, .adv_w = 128, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 272, .adv_w = 128, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 282, .adv_w = 128, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 292, .adv_w = 128, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 302, .adv_w = 128, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 312, .adv_w = 128, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 322, .adv_w = 128, .box_w = 4, .box_h = 11, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 328, .adv_w = 128, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 338, .adv_w = 128, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 348, .adv_w = 128, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 358, .adv_w = 128, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 368, .adv_w = 128, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 378, .adv_w = 128, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 388, .adv_w = 128, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 398, .adv_w = 128, .box_w = 7, .box_h = 12, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 409, .adv_w = 128, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 419, .adv_w = 128, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 429, .adv_w = 128, .box_w = 6, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 438, .adv_w = 128, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 448, .adv_w = 128, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 458, .adv_w = 128, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 468, .adv_w = 128, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 478, .adv_w = 128, .box_w = 6, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 487, .adv_w = 128, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 497, .adv_w = 128, .box_w = 4, .box_h = 11, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 503, .adv_w = 128, .box_w = 6, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 512, .adv_w = 128, .box_w = 4, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 518, .adv_w = 128, .box_w = 5, .box_h = 3, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 520, .adv_w = 128, .box_w = 8, .box_h = 2, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 522, .adv_w = 128, .box_w = 3, .box_h = 4, .ofs_x = 3, .ofs_y = 7},
    {.bitmap_index = 524, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 531, .adv_w = 128, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 541, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 548, .adv_w = 128, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 558, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 565, .adv_w = 128, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 575, .adv_w = 128, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 583, .adv_w = 128, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 593, .adv_w = 128, .box_w = 4, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 598, .adv_w = 128, .box_w = 6, .box_h = 11, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 607, .adv_w = 128, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 617, .adv_w = 128, .box_w = 4, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 623, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 630, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 637, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 644, .adv_w = 128, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 652, .adv_w = 128, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 660, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 667, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 674, .adv_w = 128, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 684, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 691, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 698, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 705, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 712, .adv_w = 128, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 720, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 727, .adv_w = 128, .box_w = 4, .box_h = 11, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 733, .adv_w = 128, .box_w = 2, .box_h = 11, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 736, .adv_w = 128, .box_w = 4, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 742, .adv_w = 128, .box_w = 5, .box_h = 4, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 745, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 752, .adv_w = 128, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 757, .adv_w = 128, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 766, .adv_w = 128, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 775, .adv_w = 128, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/

static const uint16_t unicode_list_1[] = {
    0x0, 0x20e1, 0x20e3, 0x20e5
};

/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 96, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 176, .range_length = 8422, .glyph_id_start = 97,
        .unicode_list = unicode_list_1, .glyph_id_ofs_list = NULL, .list_length = 4, .type = LV_FONT_FMT_TXT_CMAP_SPARSE_TINY
    }
};



/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LVGL_VERSION_MAJOR == 8
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
#endif

#if LVGL_VERSION_MAJOR >= 8
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = NULL,
    .kern_scale = 0,
    .cmap_num = 2,
    .bpp = 1,
    .kern_classes = 0,
    .bitmap_format = 0,
#if LVGL_VERSION_MAJOR == 8
    .cache = &cache
#endif
};



/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LVGL_VERSION_MAJOR >= 8
const lv_font_t font_nix8810_m15_data = {
#else
lv_font_t font_nix8810_m15_data = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 14,          /*The maximum line height required by the font*/
    .base_line = 3,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -2,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc,          /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
#if LV_VERSION_CHECK(8, 2, 0) || LVGL_VERSION_MAJOR >= 9
    .fallback = NULL,
#endif
    .user_data = NULL,
};



#endif /*#if FONT_NIX8810_M15_DATA*/

