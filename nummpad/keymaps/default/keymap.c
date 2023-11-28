// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT_ortho_4x7(
        KC_MPRV, KC_MPLY, KC_MNXT,  KC_NUM,
        KC_KP_PLUS, KC_KP_ASTERISK, KC_KP_MINUS,  LCTL(KC_Z),
        KC_P7,   KC_P8,   KC_P9,    KC_KP_SLASH,
        KC_P4,   KC_P5,   KC_P6,    LCTL(KC_P),
        KC_P1,   KC_P2,   KC_P3,    LCTL(KC_C),
        KC_0, KC_UP, KC_DOT,  LCTL(KC_X),
        KC_LEFT, KC_DOWN, KC_RIGHT, KC_ENTER
    ),
    [1] = LAYOUT_ortho_4x7(
        KC_P1,   KC_P2,   KC_P3,   KC_P4,
        KC_P5,   KC_P6,   KC_P7,   KC_P8,
        KC_P1,   KC_P2,   KC_P3,   KC_P4,
        KC_P5,   KC_P6,   KC_P7,   KC_P8,
        KC_P7,   KC_P8,   KC_P9,   KC_PSLS,
        KC_P4,   KC_P5,   KC_P6,   KC_PAST,
        KC_P1,   KC_P2,   KC_P3,   KC_PMNS
    ),
    [2] = LAYOUT_ortho_4x7(
        KC_P1,   KC_P2,   KC_P3,   KC_P4,
        KC_P5,   KC_P6,   KC_P7,   KC_P8,
        KC_P1,   KC_P2,   KC_P3,   KC_P4,
        KC_P5,   KC_P6,   KC_P7,   KC_P8,
        KC_P7,   KC_P8,   KC_P9,   KC_PSLS,
        KC_P4,   KC_P5,   KC_P6,   KC_PAST,
        KC_P1,   KC_P2,   KC_P3,   KC_PMNS
    ),
    [3] = LAYOUT_ortho_4x7(
        KC_P1,   KC_P2,   KC_P3,   KC_P4,
        KC_P5,   KC_P6,   KC_P7,   KC_P8,
        KC_P1,   KC_P2,   KC_P3,   KC_P4,
        KC_P5,   KC_P6,   KC_P7,   KC_P8,
        KC_P7,   KC_P8,   KC_P9,   KC_PSLS,
        KC_P4,   KC_P5,   KC_P6,   KC_PAST,
        KC_P1,   KC_P2,   KC_P3,   KC_PMNS
    )
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [0] = {ENCODER_CCW_CW(KC_VOLU,KC_VOLD), ENCODER_CCW_CW(KC_MS_WH_RIGHT, KC_MS_WH_LEFT)},
    [1] = {ENCODER_CCW_CW(RGB_HUD, RGB_HUI), ENCODER_CCW_CW(RGB_SAD, RGB_SAI) },
    [2] = {ENCODER_CCW_CW(RGB_VAD, RGB_VAI), ENCODER_CCW_CW(RGB_SPD, RGB_SPI)},
    [3] = {ENCODER_CCW_CW(RGB_RMOD, RGB_MOD), ENCODER_CCW_CW(KC_RIGHT, KC_LEFT)},
};
#endif


/*
  led_config_t g_led_config = { {
  // Key Matrix to LED Index
  {1, 2, 9, 16},
  {23, 24, 17, 10},
  {3, 4, 11, 18},
  {25, 26, 14, 12},
  {5, 6, 13, 20},
  {27, 28, 21, 15},
  {7, 8, 13, 22}
  },
  {
  // LED Index to Physical Position
  {0,0},{1,0},{2,0},{3,0},
  {0,1},{1,1},{2,1},{3,1},
  {0,2},{1,2},{2,2},{3,2},
  {0,3},{1,3},{2,3},{3,3},
  {0,4},{1,4},{2,4},{3,4},
  {0,5},{1,5},{2,5},{3,5},
  {0,6},{1,6},{2,6},{3,6}
} };
*/
