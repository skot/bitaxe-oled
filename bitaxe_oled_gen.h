/**
 * @file bitaxe_oled_gen.h
 */

#ifndef BITAXE_OLED_GEN_H
#define BITAXE_OLED_GEN_H

#ifndef UI_SUBJECT_STRING_LENGTH
#define UI_SUBJECT_STRING_LENGTH 256
#endif

#ifdef __cplusplus
extern "C" {
#endif

/*********************
 *      INCLUDES
 *********************/

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
    #include "lvgl.h"
    #include "lvgl_private.h"
#else
    #include "lvgl/lvgl.h"
    #include "lvgl/lvgl_private.h"
#endif

#ifdef LV_USE_XML
    #include "lv_xml/lv_xml.h"
#endif



/*********************
 *      DEFINES
 *********************/

#define OLED_BLACK lv_color_hex(0x000000)

#define OLED_WHITE lv_color_hex(0xffffff)

#define OLED_WIDTH 128

#define OLED_HEIGHT 32

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 * GLOBAL VARIABLES
 **********************/

/*-------------------
 * Permanent screens
 *------------------*/

/*----------------
 * Global styles
 *----------------*/

extern lv_style_t style_oled_screen;
extern lv_style_t style_oled_text;
extern lv_style_t style_oled_muted;
extern lv_style_t style_oled_rule;

/*----------------
 * Fonts
 *----------------*/

extern lv_font_t * font_portfolio_6x8;

/*----------------
 * Images
 *----------------*/

/*----------------
 * Subjects
 *----------------*/

extern lv_subject_t miner_name;
extern lv_subject_t hashrate;
extern lv_subject_t temperature;
extern lv_subject_t power;
extern lv_subject_t accepted;
extern lv_subject_t network;

/**********************
 * GLOBAL PROTOTYPES
 **********************/

/*----------------
 * Event Callbacks
 *----------------*/

/**
 * Initialize the component library
 */

void bitaxe_oled_init_gen(const char * asset_path);

/**********************
 *      MACROS
 **********************/

/**********************
 *   POST INCLUDES
 **********************/

/*Include all the widgets, components and screens of this library*/
#include "screens/screen_status_gen.h"

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif /*BITAXE_OLED_GEN_H*/