/* Copyright 2015-2017 Jack Humbert
 * Updated 2020 mixedfeelings
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H

#define L2_ENT LT(2,KC_ENT)
#define L1_SPC LT(1,KC_SPC)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] =  LAYOUT_ortho_4x12 (
           KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,  KC_ESC,  KC_EQL,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,
           KC_A,    KC_S,    KC_D,    KC_F,    KC_G, KC_PGDN,  KC_END,    KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN,
           KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,  KC_TAB, KC_BSPC,    KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH,
        KC_LALT, KC_MINS, KC_LEFT, KC_RGHT, KC_LSFT, KC_LCTL,  L2_ENT,  L1_SPC, KC_DOWN,   KC_UP, KC_LBRC, KC_RBRC
    ),
    [1] = LAYOUT_ortho_4x12 (
           KC_1,    KC_2,    KC_3,    KC_4,    KC_5, _______, _______,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,
         KC_DEL, _______, _______, _______, _______, _______, _______, _______, KC_LBRC, KC_RBRC, _______, KC_QUOT,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_BSLS,
        _______,  KC_GRV, _______, _______, _______, _______,   MO(3), _______, _______, _______, _______, _______
    ),
    [2] = LAYOUT_ortho_4x12 (
          KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,  KC_F11,  KC_F12,   KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,
         KC_DEL, _______, _______, _______, _______, KC_PGUP, KC_HOME, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______,   MO(3), _______, _______, _______, _______
    ),
    [3] = LAYOUT_ortho_4x12 (
        QK_BOOT,   DEBUG, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
    )
};
