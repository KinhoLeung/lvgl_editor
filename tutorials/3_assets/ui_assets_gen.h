/**
 * @file ui_assets_gen.h
 */

#ifndef UI_ASSETS_GEN_H
#define UI_ASSETS_GEN_H

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
#else
    #include "lvgl/lvgl.h"
#endif

/*********************
 *      DEFINES
 *********************/

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

/*----------------
 * Fonts
 *----------------*/

extern lv_font_t * montserrat_14_c_array;

extern lv_font_t * montserrat_16_bin_file;

extern lv_font_t * montserrat_18_tiny_ttf_data;

extern lv_font_t * montserrat_20_tiny_ttf_file;

/*----------------
 * Images
 *----------------*/

extern const void * flower_data;
extern const void * flower_file;

/*----------------
 * Subjects
 *----------------*/

/**********************
 * GLOBAL PROTOTYPES
 **********************/

/*----------------
 * Event Callbacks
 *----------------*/

/**
 * Initialize the component library
 */

void ui_assets_init_gen(const char * asset_path);

/**********************
 *      MACROS
 **********************/

/**********************
 *   POST INCLUDES
 **********************/

/*Include all the widget and components of this library*/
#include "screens/screen_assets_gen.h"

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif /*UI_ASSETS_GEN_H*/