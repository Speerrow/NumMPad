// Copyright 2023 Matteo Iacono (@speerrow)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#define ENCODERS_PAD_A {GP25,GP0}
#define ENCODERS_PAD_B {GP24,GP1}
#define ENCODER_RESOLUTION 4
#define ENCODER_DEFAULT_POS 0x3
#define ENCODER_MAP_KEY_DELAY 10




/*
*RGB Implentation needs works.
*#define WS2812_DI_PIN GP22
*#define RGB_MATRIX_LED_COUNT 28
*#define RGBLED_NUM 28
*#define NOP_FUDGE 0.4
*
*#define RGBLIGHT_DEFAULT_HUE 190
*#define RGBLIGHT_DEFAULT_SAT 255
#define RGBLIGHT_DEFAULT_VAL 100
*/
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
