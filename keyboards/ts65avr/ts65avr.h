/*
Copyright 2012,2013 Jun Wako <wakojun@gmail.com>

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
#ifndef TS65AVR_H
#define TS65AVR_H

#include "quantum.h"

/* TS65AVR keymap definition macro */
#define LAYOUT_all( \
    K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0a, K0b, K0c, K0d, K0e, K0f, \
    K10, K11, K12, K13, K14, K15,      K17, K18, K19, K1a, K1b, K1c, K1d, K1e, K1f, \
    K20, K21, K22, K23, K24, K25,      K27, K28, K29, K2a, K2b, K2c, K2d, K2e, K2f, \
    K30, K31, K32, K33, K34, K35, K36, K37, K38, K39, K3a, K3b, K3c,      K3e, K3f, \
    K40, K41, K42, K43, K44,           K47,      K49, K4a, K4b, K4c,      K4e, K4f  \
) { \
    { K00, K01, K02, K03, K04, K05,   K06,   K07, K08,   K09, K0a, K0b, K0c, K0d,   K0e, K0f }, \
    { K10, K11, K12, K13, K14, K15,   KC_NO, K17, K18,   K19, K1a, K1b, K1c, K1d,   K1e, K1f }, \
    { K20, K21, K22, K23, K24, K25,   KC_NO, K27, K28,   K29, K2a, K2b, K2c, K2d,   K2e, K2f }, \
    { K30, K31, K32, K33, K34, K35,   K36,   K37, K38,   K39, K3a, K3b, K3c, KC_NO, K3e, K3f }, \
    { K40, K41, K42, K43, K44, KC_NO, KC_NO, K47, KC_NO, K49, K4a, K4b, K4c, KC_NO, K4e, K4f }, \
}

#endif
