/**
 * @file bitaxe_oled_gen.c
 */

/*********************
 *      INCLUDES
 *********************/

#include "bitaxe_oled_gen.h"

#if LV_USE_XML
#endif /* LV_USE_XML */

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 *  STATIC PROTOTYPES
 **********************/

/**********************
 *  STATIC VARIABLES
 **********************/

/*----------------
 * Translations
 *----------------*/

/**********************
 *  GLOBAL VARIABLES
 **********************/

/*--------------------
 *  Permanent screens
 *-------------------*/

/*----------------
 * Fonts
 *----------------*/

lv_font_t * font_portfolio_6x8;
extern lv_font_t font_portfolio_6x8_data;

/*----------------
 * Images
 *----------------*/

/*----------------
 * Global styles
 *----------------*/

lv_style_t style_oled_screen;
lv_style_t style_oled_text;
lv_style_t style_oled_muted;
lv_style_t style_oled_rule;

/*----------------
 * Subjects
 *----------------*/

lv_subject_t miner_name;
lv_subject_t hashrate;
lv_subject_t temperature;
lv_subject_t power;
lv_subject_t accepted;
lv_subject_t network;

/**********************
 *      MACROS
 **********************/

/**********************
 *   GLOBAL FUNCTIONS
 **********************/

void bitaxe_oled_init_gen(const char * asset_path)
{
    char buf[256];


    /*----------------
     * Fonts
     *----------------*/

    /* get font 'font_portfolio_6x8' from a C array */
    font_portfolio_6x8 = &font_portfolio_6x8_data;


    /*----------------
     * Images
     *----------------*/
    /*----------------
     * Global styles
     *----------------*/

    static bool style_inited = false;

    if (!style_inited) {
        lv_style_init(&style_oled_screen);
        lv_style_set_bg_color(&style_oled_screen, OLED_BLACK);
        lv_style_set_bg_opa(&style_oled_screen, (255 * 100 / 100));
        lv_style_set_border_width(&style_oled_screen, 0);
        lv_style_set_radius(&style_oled_screen, 0);
        lv_style_set_pad_all(&style_oled_screen, 0);
        lv_style_set_text_color(&style_oled_screen, OLED_WHITE);
        lv_style_set_text_font(&style_oled_screen, font_portfolio_6x8);

        lv_style_init(&style_oled_text);
        lv_style_set_text_color(&style_oled_text, OLED_WHITE);
        lv_style_set_text_font(&style_oled_text, font_portfolio_6x8);
        lv_style_set_bg_opa(&style_oled_text, 0);
        lv_style_set_pad_all(&style_oled_text, 0);
        lv_style_set_border_width(&style_oled_text, 0);

        lv_style_init(&style_oled_muted);
        lv_style_set_text_color(&style_oled_muted, OLED_WHITE);
        lv_style_set_text_opa(&style_oled_muted, (255 * 75 / 100));
        lv_style_set_bg_opa(&style_oled_muted, 0);
        lv_style_set_pad_all(&style_oled_muted, 0);
        lv_style_set_border_width(&style_oled_muted, 0);

        lv_style_init(&style_oled_rule);
        lv_style_set_bg_color(&style_oled_rule, OLED_WHITE);
        lv_style_set_bg_opa(&style_oled_rule, (255 * 100 / 100));
        lv_style_set_border_width(&style_oled_rule, 0);
        lv_style_set_radius(&style_oled_rule, 0);
        lv_style_set_pad_all(&style_oled_rule, 0);

        style_inited = true;
    }

    /*----------------
     * Subjects
     *----------------*/
    static char miner_name_buf[UI_SUBJECT_STRING_LENGTH];
    static char miner_name_prev_buf[UI_SUBJECT_STRING_LENGTH];
    lv_subject_init_string(&miner_name,
                           miner_name_buf,
                           miner_name_prev_buf,
                           UI_SUBJECT_STRING_LENGTH,
                           "bitaxe"
                          );
    static char hashrate_buf[UI_SUBJECT_STRING_LENGTH];
    static char hashrate_prev_buf[UI_SUBJECT_STRING_LENGTH];
    lv_subject_init_string(&hashrate,
                           hashrate_buf,
                           hashrate_prev_buf,
                           UI_SUBJECT_STRING_LENGTH,
                           "0.00 TH/s"
                          );
    static char temperature_buf[UI_SUBJECT_STRING_LENGTH];
    static char temperature_prev_buf[UI_SUBJECT_STRING_LENGTH];
    lv_subject_init_string(&temperature,
                           temperature_buf,
                           temperature_prev_buf,
                           UI_SUBJECT_STRING_LENGTH,
                           "-- C"
                          );
    static char power_buf[UI_SUBJECT_STRING_LENGTH];
    static char power_prev_buf[UI_SUBJECT_STRING_LENGTH];
    lv_subject_init_string(&power,
                           power_buf,
                           power_prev_buf,
                           UI_SUBJECT_STRING_LENGTH,
                           "-- W"
                          );
    static char accepted_buf[UI_SUBJECT_STRING_LENGTH];
    static char accepted_prev_buf[UI_SUBJECT_STRING_LENGTH];
    lv_subject_init_string(&accepted,
                           accepted_buf,
                           accepted_prev_buf,
                           UI_SUBJECT_STRING_LENGTH,
                           "A:0"
                          );
    static char network_buf[UI_SUBJECT_STRING_LENGTH];
    static char network_prev_buf[UI_SUBJECT_STRING_LENGTH];
    lv_subject_init_string(&network,
                           network_buf,
                           network_prev_buf,
                           UI_SUBJECT_STRING_LENGTH,
                           "WiFi"
                          );

    /*----------------
     * Translations
     *----------------*/

#if LV_USE_XML
    /* Register widgets */

    /* Register fonts */
    lv_xml_register_font(NULL, "font_portfolio_6x8", font_portfolio_6x8);

    /* Register subjects */
    lv_xml_register_subject(NULL, "miner_name", &miner_name);
    lv_xml_register_subject(NULL, "hashrate", &hashrate);
    lv_xml_register_subject(NULL, "temperature", &temperature);
    lv_xml_register_subject(NULL, "power", &power);
    lv_xml_register_subject(NULL, "accepted", &accepted);
    lv_xml_register_subject(NULL, "network", &network);

    /* Register callbacks */
#endif

    /* Register all the global assets so that they won't be created again when globals.xml is parsed.
     * While running in the editor skip this step to update the preview when the XML changes */
#if LV_USE_XML && !defined(LV_EDITOR_PREVIEW)
    /* Register images */
#endif

#if LV_USE_XML == 0
    /*--------------------
     *  Permanent screens
     *-------------------*/
    /* If XML is enabled it's assumed that the permanent screens are created
     * manaully from XML using lv_xml_create() */
#endif
}

/* Callbacks */

/**********************
 *   STATIC FUNCTIONS
 **********************/