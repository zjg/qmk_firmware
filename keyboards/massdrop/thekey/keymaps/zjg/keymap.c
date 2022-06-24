/* Copyright 2021 Joe Maples <joe@maples.dev>
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

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT(LT(1,_______), LT(4,KC_MPLY), LT(7,_______)),
	
    [1] = LAYOUT(XXXXXXX, LT(2,_______), LT(3,_______)),
    [2] = LAYOUT(XXXXXXX, XXXXXXX, _______),
    [3] = LAYOUT(XXXXXXX, _______, XXXXXXX),

    [4] = LAYOUT(LT(5,KC_MPRV), XXXXXXX, LT(6,KC_MNXT)),
    [5] = LAYOUT(XXXXXXX, XXXXXXX, _______),
    [6] = LAYOUT(_______, XXXXXXX, XXXXXXX),

    [7] = LAYOUT(LT(8,_______), LT(9,_______), XXXXXXX),
    [8] = LAYOUT(XXXXXXX, _______, XXXXXXX),
    [9] = LAYOUT(TD(0), XXXXXXX, XXXXXXX),

};

void rgb_brightness(qk_tap_dance_state_t* state, void* user_data) {
    if (state->count == 2) {
        rgblight_increase_val_noeeprom();
    } else {
        rgblight_decrease_val_noeeprom();
    }
}

qk_tap_dance_action_t tap_dance_actions[] = {
    [0] = ACTION_TAP_DANCE_FN(rgb_brightness),
};





// DEBUGGING

void keyboard_post_init_user(void) {
  // Customise these values to desired behaviour
  debug_enable=true;
//   debug_matrix=true;
//   debug_keyboard=true;
  //debug_mouse=true;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  // If console is enabled, it will print the matrix position and status of each key pressed
#ifdef CONSOLE_ENABLE
    uprintf("KL: kc: 0x%04X, col: %u, row: %u, pressed: %b, time: %u, interrupt: %b, count: %u\n", keycode, record->event.key.col, record->event.key.row, record->event.pressed, record->event.time, record->tap.interrupted, record->tap.count);
#endif 
  return true;
}