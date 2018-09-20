#include QMK_KEYBOARD_H

#define ______ KC_TRNS
#define   _x_  KC_NO

// [0,13] is either left key of split backspace (e.g. HHKB \| key) or 2U backspace
// [1,13] is either backslash or ISO Enter
// [2,12] is either ANSI Enter or key left of ISO Enter
// [2,13] is right key of split backspace (e.g. HHKB `~ key)
// [3,1] is right key of split left-shift (e.g ISO key)
// [3,13] is right key of split right-shift (e.g. HHKB Fn key)

/*
 * Malcolm's Layout
 */
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Keymap 0: Default Qwerty Layer
     * ,-----------------------------------------------------------.
     * |~ |  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =| \ | ~ |
     * |-----------------------------------------------------------|
     * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|Bspc |
     * |-----------------------------------------------------------|
     * |ESC  |  A|  S|  D|  F|  G|  H|  J|  K|  L| ; |  ' |Return  |
     * |-----------------------------------------------------------|
     * |Shift   |  Z|  X|  C|  V|  B|  N|  M|  ,|  .| / |Shift     |
     * |-----------------------------------------------------------|
     * |Ctrl|Gui |Alt |      Space             |Alt |Fn4 |Fn4 |Fn1 |
     * `-----------------------------------------------------------'
     */
    [0] = {
        {KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSLS},
        {KC_TAB,  KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC,  KC_BSPC},
        {MT(MOD_LCTL, KC_ESC), KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT, KC_GRV},
        {KC_LSFT, _x_ ,KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH ,  KC_RSFT,  _x_   },
        {MO(1), KC_LALT, KC_LGUI, _x_, _x_, _x_, _x_,      LT(1, KC_SPC),      _x_, _x_, KC_RGUI,  KC_RALT,   MO(1),  KC_RCTRL  }
    },
    /* 1: Fn layer
     * ,-----------------------------------------------------------.
     * |   | F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|BLD|BLI|
     * |-----------------------------------------------------------|
     * |Caps |   |   |   |   |   |   |   |PgD |H|PgU|    |TogBL|   |
     * |-----------------------------------------------------------|
     * |      | |VolD|VolU|MUT|   | |Left|Down|Up|Right|   |       |
     * |-----------------------------------------------------------|
     * |       |Prev|P/Paus|Next|  |   |  +|  -|End|   |   |   |   |
     * |-----------------------------------------------------------|
     * |    |    |    |                        |    |    |    |    |
     * `-----------------------------------------------------------'
     */
    [1] = {
        {______, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, ______},
        {KC_CAPS, ______, ______, ______, ______, ______, ______, KC_PGDN, KC_HOME, KC_PGUP, ______, ______,  ______, KC_DEL},
        {______, ______, KC_VOLD, KC_VOLU, KC_MUTE, ______, KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT, ______, ______, ______, TG(2)},
        {______, _x_, KC_MPRV, KC_MPLY, KC_MNXT, ______, ______, KC_PPLS, KC_MINS, KC_END, ______, ______,  ______, ______},
        {______, ______, ______, _x_, _x_, _x_, _x_,      ______,           _x_, _x_, ______, ______, ______, ______},
    },


    // Lighting configuration
    [2] = {
        {______, EF_DEC,  EF_INC,  H1_DEC,  H1_INC,  H2_DEC,  H2_INC,  ______, ______, ______, ______, BR_DEC,  BR_INC,  ______},
        {______, ______, ______, S1_DEC,  S1_INC,  S2_DEC,  S2_INC,  ______, ______, ______, ______, ______, ______, TG(2)},
        {______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______},
        {______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______},
        {______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______}
    }
};
