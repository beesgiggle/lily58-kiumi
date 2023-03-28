// ObliviousGmn // Dokuu // October 2020 // Config

#pragma once

/* Select hand configuration */
#undef PRODUCT
#define PRODUCT kiumi

#undef OLED_FONT_H
#define OLED_FONT_H "keyboards/lily58/keymaps/lily58-kiumi/glcdfont.c"
#ifdef OLED_DRIVER_ENABLE
    #define OLED_TIMEOUT 60000
    #define OLED_DISABLE_TIMEOUT
    #define SPLIT_OLED_ENABLE
#endif

#define MASTER_LEFT

#define USE_SERIAL_PD2
#define SPLIT_WPM_ENABLE
#define TAPPING_TERM 125
#define IGNORE_MOD_TAP_INTERRUPT
// #define TAPPING_FORCE_HOLD
// #define RETRO_TAPPING
#end
