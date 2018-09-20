#include QMK_KEYBOARD_H
#include "satan.h"
#include "action_layer.h"

#define ______ KC_TRNS

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
    [0] = LAYOUT_60_ansi_split_bs_rshift(
        KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSLS, KC_GRV, \
        KC_TAB,  KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC,  KC_BSPC, \
        MT(MOD_LCTL, KC_ESC), KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT,  \
        KC_LSFT,   KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH ,  KC_RSFT,  KC_NO, \
        MO(1), KC_LALT, KC_LGUI,           KC_SPC,                    KC_RGUI, KC_RALT, MO(1), KC_RCTRL),
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
    [1] = LAYOUT_60_ansi_split_bs_rshift(
        ______, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, F(2), F(3), \
        KC_CAPS, ______, ______, ______, ______, ______, ______, KC_PGDN, KC_HOME, KC_PGUP, ______, ______,  F(4), KC_DEL, \
        ______, ______, KC_VOLD, KC_VOLU, KC_MUTE, ______, KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT, ______, ______, ______, \
        ______, KC_MPRV, KC_MPLY, KC_MNXT, ______, ______, KC_PPLS, KC_PMNS, KC_END, ______, ______,  ______, ______, \
        ______, ______, ______,                 ______,                    ______, ______, ______, ______),
};

/*
 * Fn action definition
 */
const uint16_t PROGMEM fn_actions[] = {
    [0] = ACTION_LAYER_MOMENTARY(1),
    [1] = ACTION_LAYER_TAP_KEY(MOD_LCTL, KC_ESC),
    [2] = ACTION_BACKLIGHT_DECREASE(),
    [3] = ACTION_BACKLIGHT_INCREASE(),
    [4] = ACTION_BACKLIGHT_TOGGLE(),
};
