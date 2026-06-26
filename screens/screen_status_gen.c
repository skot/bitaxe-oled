/**
 * @file screen_status_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "screen_status_gen.h"
#include "../bitaxe_oled.h"

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/***********************
 *  STATIC VARIABLES
 **********************/

/***********************
 *  STATIC PROTOTYPES
 **********************/

/**********************
 *   GLOBAL FUNCTIONS
 **********************/

lv_obj_t * screen_status_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    static bool style_inited = false;

    if (!style_inited) {

        style_inited = true;
    }

    lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
    lv_obj_set_name_static(lv_obj_0, "screen_status_#");

    lv_obj_add_style(lv_obj_0, &style_oled_screen, 0);
    lv_obj_t * lv_obj_1 = lv_obj_create(lv_obj_0);
    lv_obj_set_width(lv_obj_1, 128);
    lv_obj_set_height(lv_obj_1, 32);
    lv_obj_set_style_bg_opa(lv_obj_1, 0, 0);
    lv_obj_set_style_border_width(lv_obj_1, 0, 0);
    lv_obj_set_style_radius(lv_obj_1, 0, 0);
    lv_obj_set_style_pad_all(lv_obj_1, 0, 0);
    lv_obj_t * lv_label_0 = lv_label_create(lv_obj_1);
    lv_obj_set_x(lv_label_0, 0);
    lv_obj_set_y(lv_label_0, 0);
    lv_label_set_text(lv_label_0, "0.00 TH/s");
    lv_obj_set_style_text_color(lv_label_0, OLED_WHITE, 0);
    lv_obj_set_style_bg_opa(lv_label_0, 0, 0);
    
    lv_obj_t * lv_label_1 = lv_label_create(lv_obj_1);
    lv_obj_set_x(lv_label_1, 0);
    lv_obj_set_y(lv_label_1, 25);
    lv_label_set_text(lv_label_1, "123G");
    lv_obj_set_style_text_color(lv_label_1, OLED_WHITE, 0);
    lv_obj_set_style_text_font(lv_label_1, font_portfolio_6x8, 0);
    lv_obj_set_style_bg_opa(lv_label_1, 0, 0);
    
    lv_obj_t * lv_label_2 = lv_label_create(lv_obj_1);
    lv_obj_set_x(lv_label_2, 50);
    lv_obj_set_y(lv_label_2, 25);
    lv_label_set_text(lv_label_2, "75%");
    lv_obj_set_style_text_color(lv_label_2, OLED_WHITE, 0);
    lv_obj_set_style_text_font(lv_label_2, font_portfolio_6x8, 0);
    lv_obj_set_style_bg_opa(lv_label_2, 0, 0);
    
    lv_obj_t * lv_label_3 = lv_label_create(lv_obj_1);
    lv_obj_set_x(lv_label_3, 90);
    lv_obj_set_y(lv_label_3, 25);
    lv_label_set_text(lv_label_3, "69ºC");
    lv_obj_set_style_text_color(lv_label_3, OLED_WHITE, 0);
    lv_obj_set_style_text_font(lv_label_3, font_portfolio_6x8, 0);
    lv_obj_set_style_bg_opa(lv_label_3, 0, 0);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

