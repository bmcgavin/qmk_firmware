/*
Copyright 2015 Jun Wako <wakojun@gmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef CONFIG_H
#define CONFIG_H

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x5453 //TS
#define PRODUCT_ID      0x0065
#define DEVICE_VER      0x0001
#define MANUFACTURER    PendulumKB
#define PRODUCT         PendulumKB TS65AVR
#define DESCRIPTION     PendulumKB TS65AVR

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS_LEFT 7
#define MATRIX_COLS_RIGHT 9
#define MATRIX_COLS (MATRIX_COLS_LEFT + MATRIX_COLS_RIGHT)

#define MATRIX_ROW_PINS {  B0, B1, B2, B3, B6 }
#define UNUSED_PINS

/* define if matrix has ghost */
//#define MATRIX_HAS_GHOST

/* Set 0 if debouncing isn't needed */
#define DEBOUNCING_DELAY    5

#define RGB_DI_PIN B7
#define RGBLED_NUM 18
#define RGBLIGHT_ANIMATIONS
                                    //#define RGBLIGHT_TIMER
                                    //#define ws2812_PORTREG PORTB
                                    //#define ws2812_DDRREG DDRB

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* key combination for command */
#define IS_COMMAND() ( \
    keyboard_report->mods == (MOD_BIT(KC_LSHIFT) | MOD_BIT(KC_RSHIFT)) \
)

#define USE_I2C

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT
//#define NO_ACTION_MACRO
//#define NO_ACTION_FUNCTION

#endif
