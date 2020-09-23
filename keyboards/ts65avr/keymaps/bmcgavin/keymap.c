#include "ts65avr.h"

#define _______ KC_TRNS

#define _QWERTY 0
#define _FUNC 1

//enum custom_keycodes {
//    QWERTY = SAFE_RANGE,
//    FUNC,
//};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* 0: qwerty */
    [_QWERTY] = LAYOUT_all( \
        /* <------------- LEFT SIDE -------------------------->             <------------------------- RIGHT SIDE ----------------------------------------> */
        KC_GRV,           KC_1,     KC_2,    KC_3,     KC_4,    KC_5, KC_6, KC_7,   KC_8, KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC, KC_DEL,  KC_INS,  \
        KC_TAB,           KC_Q,     KC_W,    KC_E,     KC_R,    KC_T,       KC_Y,   KC_U, KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS, KC_PGUP, \
        LT(_FUNC,KC_ESC), KC_A,     KC_S,    KC_D,     KC_F,    KC_G,       KC_H,   KC_J, KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_NUHS, KC_ENT,  KC_PGDN, \
        KC_LSFT,          KC_NUBS,  KC_Z,    KC_X,     KC_C,    KC_V, KC_B, KC_N,   KC_M, KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,          KC_UP,   MO(_FUNC), \
        KC_LCTL,          KC_LGUI,  KC_LALT, KC_HYPR,  KC_SPC,              KC_SPC,       KC_RCTL, KC_RALT, KC_RGUI, KC_LEFT,          KC_DOWN, KC_RIGHT),

    [_FUNC] = LAYOUT_all( \
        KC_ESC,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,       KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F11,  KC_F12,   _______, _______, _______, \
        _______, RESET,   RGB_TOG, RGB_MOD, RGB_HUD, RGB_HUI,               RGB_SAD, RGB_SAI, RGB_VAD, RGB_VAI, _______, _______, _______, _______, KC_HOME, \
        _______, _______, _______, _______, _______, _______,               _______, _______, _______, _______, _______, _______, _______, _______, KC_END, \
        _______, _______, KC_MPRV, KC_MPLY, KC_MNXT, KC_MUTE, KC_VOLD,      KC_VOLU, _______, _______, _______, _______, _______,          _______, _______, \
        _______, _______, _______, _______, _______,                        _______,          _______, _______, _______, _______,          _______, _______),

};
const uint16_t PROGMEM fn_actions[] = {};

void matrix_init_user(void) {

}

void matrix_scan_user(void) {

}
