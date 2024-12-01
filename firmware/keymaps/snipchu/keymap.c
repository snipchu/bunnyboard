/* keymap.c */
#include QMK_KEYBOARD_H
#include "print.h"

enum bunnyboard_layers { _PLOVER, };
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    /* bunnyboard plover layout
    *  ,------------------------------------------------.
    *  | # | T | P | H | * |    | * | F | P | L | T | D |
    *  | S | K | W | R | * |    | * | R | B | G | S | Z |
    *  `-------| # | A | O |    | E | U | # |-----------'
    *          `----------------------------'
    */

    [_PLOVER] = LAYOUT(
        STN_N1,  STN_TL,  STN_PL,  STN_HL,  STN_ST1,        STN_ST3,  STN_FR,  STN_PR,  STN_LR,  STN_TR,  STN_DR,
        STN_S1,  STN_KL,  STN_WL,  STN_RL,  STN_ST2,        STN_ST4,  STN_RR,  STN_BR,  STN_GR,  STN_SR,  STN_ZR,
                          STN_N1,  STN_A,   STN_O,          STN_E,    STN_U,   STN_N2
    ),
};

void keyboard_post_init_user(void) {
  // Customise these values to desired behaviour
  debug_enable=true;
  debug_matrix=true;
  debug_keyboard=true;
  //debug_mouse=true;
}
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  // If console is enabled, it will print the matrix position and status of each key pressed
#ifdef CONSOLE_ENABLE
    uprintf("KL: kc: 0x%04X, col: %2u, row: %2u, pressed: %u, time: %5u, int: %u, count: %u\n", keycode, record->event.key.col, record->event.key.row, record->event.pressed, record->event.time, record->tap.interrupted, record->tap.count);
#endif
  return true;
}
