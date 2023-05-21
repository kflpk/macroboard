// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum custom_keycodes {
    MACRO_SW1 = SAFE_RANGE,
    // MACRO_SW2,
    // MACRO_SW3,
    // MACRO_SW4,
    // MACRO_SW5,
    // MACRO_SW6,
    // MACRO_SW7,
    // MACRO_SW8,
    // MACRO_SW9,
    // MACRO_SW10,
    // MACRO_SW11,
    // MACRO_SW12,
    // MACRO_SW13,
    // MACRO_SW14,
    // MACRO_SW15,
    // MACRO_SW16,
};

bool process_record_user(uint16_t keycode, keyrecord_t* record) {
    switch(keycode) {
        case MACRO_SW1:
            if(record->event.pressed) {
                SEND_STRING("email@example.com");
            }
            return false;
        break;
        // case MACRO_SW2:
        //     if(record->event.pressed) {
        //         SEND_STRING("");
        //     }
        //     return false;
        // break;
        // case MACRO_SW3:
        //     if(record->event.pressed) {
        //         SEND_STRING("w ");
        //     }
        //     return false;
        // break;
        // case MACRO_SW4:
        //     if(record->event.pressed) {
        //         SEND_STRING("mojej ");
        //     }
        //     return false;
        // break;
        // case MACRO_SW5:
        //     if(record->event.pressed) {
        //         SEND_STRING("kuchni! ");
        //     }
        //     return false;
        // break;
        // case MACRO_SW6:
        //     if(record->event.pressed) {
        //         SEND_STRING("Siemanko");
        //     }
        //     return false;
        // break;
        // case MACRO_SW7:
        //     if(record->event.pressed) {
        //         SEND_STRING("Siemanko");
        //     }
        //     return false;
        // break;
        // case MACRO_SW8:
        //     if(record->event.pressed) {
        //         SEND_STRING("Siemanko");
        //     }
        //     return false;
        // break;
    }
    return true;
}

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    // [0] = LAYOUT_ortho_4x4(
    //     KC_P7,   KC_P8,   KC_P9,   KC_PSLS,
    //     KC_P4,   KC_P5,   KC_P6,   KC_PAST,
    //     KC_P1,   KC_P2,   KC_P3,   KC_PMNS,
    //     KC_P0,   KC_PDOT, KC_PENT, KC_PPLS
    // )

    // [0] = LAYOUT_ortho_4x4(
    //     MACRO_SW1,   MACRO_SW2,  MACRO_SW3,  MACRO_SW4,
    //     MACRO_SW5,   MACRO_SW6,  MACRO_SW7,  MACRO_SW8,
    //     MACRO_SW9,   MACRO_SW10, MACRO_SW11, MACRO_SW12,
    //     MACRO_SW13,  MACRO_SW14, MACRO_SW15, MACRO_SW16
    // )

    [0] = LAYOUT_ortho_4x4(
        KC_A,   KC_B,  KC_C, KC_D, KC_E, KC_F, KC_G, KC_H, KC_I, KC_J, KC_K, KC_L, KC_M, KC_N, KC_O, KC_P)
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][1] = {
    [0] =   { ENCODER_CCW_CW(KC_MS_WH_UP, KC_MS_WH_DOWN) },
};
#endif

bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) { /* First encoder */
        if (clockwise) {
            tap_code_delay(KC_VOLU, 10);
        } else {
            tap_code_delay(KC_VOLD, 10);
        }
    }
    return false;
}


