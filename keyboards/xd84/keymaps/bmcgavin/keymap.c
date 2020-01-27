#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	//[0] = LAYOUT_75_iso(KC_ESC, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_INS, TO(1), KC_DEL, KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSPC, KC_HOME, KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_ENT, KC_PGUP, LCTL_T(KC_ESC), KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_NUHS, KC_PGDN, KC_LSFT, KC_BSLS, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_UP, KC_END, KC_CAPS, KC_LALT, KC_LGUI, KC_SPC, KC_LALT, KC_RGUI, KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT),
   [0] = LAYOUT_75_iso( 
/* ┌─────────┬─────────┬─────────┬─────────┬─────────┬─────────┬─────────┬─────────┬─────────┬─────────┬─────────┬─────────┬─────────┬─────────┬─────────┬─────────┐ */
	  KC_ESC,   KC_F1,   KC_F2,    KC_F3,     KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   KC_INS,   MO(1),   KC_DEL,
/* ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┴─────────┼─────────┤ */
      KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,           KC_HOME,
/* ├─────────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬──────────────┼─────────┤ */
      KC_TAB,        KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,                KC_PGUP,
/* ├──────────────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──┬           ├─────────┤ */
      KC_CAPS,          KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,    KC_SCLN,  KC_QUOT,  KC_NUHS,   KC_ENT,    KC_PGDN,
/* ├───────────┬─────┴───┬─────┴───┬─────┴───┬─────┴───┬─────┴───┬─────┴───┬─────┴───┬─────┴───┬─────┴───┬─────┴───┬─────┴───┬─────┴─────────┴─┬─────────┼─────────┤ */
      KC_LSFT,   KC_NUBS,   KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,  KC_RSFT,          KC_UP,   KC_END,
/* ├───────────┼─────────┴─┬───────┴───┬─────┴─────────┴─────────┴─────────┴─────────┴─────────┴───────┬─┴───────┬─┴───────┬─┴───────┬─────────┼─────────┼─────────┤ */
      KC_LCTL,   KC_LALT,     KC_LGUI,                            KC_SPC,                                KC_RALT,  MO(1),    KC_RCTL,  KC_LEFT,  KC_DOWN,  KC_RGHT
/* └───────────┴───────────┴───────────┴───────────────────────────────────────────────────────────────┴─────────┴─────────┴─────────┴─────────┴─────────┴─────────┘ */
    ),
	[1] = LAYOUT_75_iso(
/* ┌─────────┬─────────┬─────────┬─────────┬─────────┬─────────┬─────────┬─────────┬─────────┬─────────┬─────────┬─────────┬─────────┬─────────┬─────────┬─────────┐ */
      RGB_TOG,  RESET,   DEBUG,    EEP_RST,   KC_NO,    BL_INC,   BL_DEC,   KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,  KC_VOLD,  KC_VOLU,   KC_NO,   KC_TRNS,  KC_PWR,
/* ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┴─────────┼─────────┤ */
      KC_NO,    KC_F13,  KC_F14,   KC_F15,    KC_F16,   KC_F17,   KC_F18,   KC_F19,   KC_F20,   KC_F21,   KC_F22,   KC_F23,   KC_F24,    KC_NO,            RGB_HUI,
/* ├─────────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬──────────────┼─────────┤ */
      KC_NO,         KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,                  RGB_HUD,
/* ├──────────────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──┬           ├─────────┤ */
      KC_NO,            KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,     RGB_MOD,
/* ├───────────┬─────┴───┬─────┴───┬─────┴───┬─────┴───┬─────┴───┬─────┴───┬─────┴───┬─────┴───┬─────┴───┬─────┴───┬─────┴───┬─────┴─────────┴─┬─────────┼─────────┤ */
      KC_NO,     KC_NO,    KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_VOLD,  KC_VOLU,   KC_MUTE,  KC_NO,    KC_NO,    KC_NO,   KC_APP,    KC_NO,           RGB_VAI,  RGB_RMOD,
/* ├───────────┼─────────┴─┬───────┴───┬─────┴─────────┴─────────┴─────────┴─────────┴─────────┴───────┬─┴───────┬─┴───────┬─┴───────┬─────────┼─────────┼─────────┤ */
      KC_NO,     KC_NO,       KC_NO,                              KC_NO,                                  KC_NO,   KC_NO,    KC_NO,    RGB_SAD,  RGB_VAD,  RGB_SAI)
/* └───────────┴───────────┴───────────┴───────────────────────────────────────────────────────────────┴─────────┴─────────┴─────────┴─────────┴─────────┴─────────┘ */
};
