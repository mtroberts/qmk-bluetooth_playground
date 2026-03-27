/* Copyright 2023 @ Keychron (https://www.keychron.com)
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

enum layers {
    MAC_BASE,
    MAC_FN,
    WIN_BASE,
    WIN_FN,
};

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    // Colemak DH ISO Wide (en_GB)
    [MAC_BASE] = LAYOUT_tkl_iso(
        KC_ESC,             KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   KC_PSCR,  KC_CTANA, RGB_MOD,
        KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_EQL,   KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_BSPC,  KC_INS,   KC_HOME,  KC_PGUP,
        KC_TAB,   KC_Q,     KC_W,     KC_F,     KC_P,     KC_B,     KC_LBRC,  KC_J,     KC_L,     KC_U,     KC_Y,     KC_SCLN,  KC_SLSH,            KC_DEL,   KC_END,   KC_PGDN,
        HYPR_T(KC_ESC), LSFT_T(KC_A), LALT_T(KC_R), LCTL_T(KC_S), LGUI_T(KC_T), KC_G, KC_RBRC, KC_M, RGUI_T(KC_N), RCTL_T(KC_E), LALT_T(KC_I), RSFT_T(KC_O),  KC_QUOT,  KC_ENT,
        KC_LSFT,  KC_Z,     KC_X,     KC_C,     KC_D,     KC_V,     KC_NUBS,  KC_NUHS,  KC_K,     KC_H,     KC_COMM,  KC_DOT,             KC_RSFT,            KC_UP,
        KC_LCTL,  KC_LWIN,  OSM(MOD_LSFT),                              KC_SPC,                             OSM(MOD_RSFT), KC_RALT,  MO(WIN_FN), KC_RCTL, KC_LEFT, KC_DOWN,  KC_RGHT),

    [MAC_FN] = LAYOUT_tkl_iso(
        _______,            KC_BRID,  KC_BRIU,  KC_TASK,  KC_FILE,  RGB_VAD,  RGB_VAI,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,  KC_VOLD,  KC_VOLU,  _______,  _______,  RGB_TOG,
        _______,  BT_HST1,  BT_HST2,  BT_HST3,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,
        RGB_TOG,  RGB_MOD,  RGB_VAI,  RGB_HUI,  RGB_SAI,  RGB_SPI,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,  _______,  _______,
        _______,  RGB_RMOD, RGB_VAD,  RGB_HUD,  RGB_SAD,  RGB_SPD,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,  BAT_LVL,  NK_TOGG,  _______,  _______,  _______,  _______,            _______,            _______,
        _______,  _______,  _______,                                _______,                                _______,  _______,  _______,  _______,  _______,  _______,  _______),

    [WIN_BASE] = LAYOUT_tkl_iso(
        KC_ESC,             KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   KC_PSCR,  KC_CTANA, RGB_MOD,
        KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_EQL,   KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_BSPC,  KC_INS,   KC_HOME,  KC_PGUP,
        KC_TAB,   KC_Q,     KC_W,     KC_F,     KC_P,     KC_B,     KC_LBRC,  KC_J,     KC_L,     KC_U,     KC_Y,     KC_SCLN,  KC_SLSH,            KC_DEL,   KC_END,   KC_PGDN,
        LCTL_T(KC_ESC),  KC_A,     KC_R,     KC_S,     KC_T,     KC_G,     KC_RBRC,  KC_M,     KC_N,     KC_E,     KC_I,     KC_O,     KC_QUOT,  KC_ENT,
        KC_LSFT,  KC_Z,     KC_X,     KC_C,     KC_D,     KC_V,     KC_NUBS,  KC_NUHS,  KC_K,     KC_H,     KC_COMM,  KC_DOT,             KC_RSFT,            KC_UP,
        KC_LCTL,  KC_LWIN,  KC_LALT,                                KC_SPC,                                 KC_RALT,  KC_RGUI, MO(WIN_FN),KC_RCTL,  KC_LEFT,  KC_DOWN,  KC_RGHT),

    [WIN_FN] = LAYOUT_tkl_iso(
        _______,            KC_BRID,  KC_BRIU,  KC_TASK,  KC_FILE,  RGB_VAD,  RGB_VAI,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,  KC_VOLD,  KC_VOLU,  _______,  _______,  RGB_TOG,
        _______,  BT_HST1,  BT_HST2,  BT_HST3,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,
        RGB_TOG,  RGB_MOD,  RGB_VAI,  RGB_HUI,  RGB_SAI,  RGB_SPI,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,  _______,  _______,
        _______,  RGB_RMOD, RGB_VAD,  RGB_HUD,  RGB_SAD,  RGB_SPD,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,  BAT_LVL,  NK_TOGG,  _______,  _______,  _______,  _______,            _______,            _______,
        _______,  _______,  _______,                                _______,                                _______,  _______,  _______,  _______,  _______,  _______,  _______)
};

#ifdef CHORDAL_HOLD
// Chordal Hold hand assignment for the K1 Pro ISO RGB matrix (6 rows x 17 cols).
//
//   'L' = left hand     'R' = right hand
//   '*' = always hold   (modifiers, thumb cluster, and unused matrix positions)
//
// Adjust this table if you remap keys to non-standard positions.
//
// For alpha and common typing keys, return false so the combo is treated as
// a tap (resolved on the other key's release). Deliberate shortcuts still
// work: hold the mod past TAPPING_TERM alone, then press the key.
// Chordal Hold fires immediately (true) only for navigation, function, etc.
bool get_chordal_hold(uint16_t tap_hold_keycode, keyrecord_t *tap_hold_record, uint16_t other_keycode, keyrecord_t *other_record) {
    switch (get_tap_keycode(other_keycode)) {
        case KC_A ... KC_Z:
        case KC_1 ... KC_9:
        case KC_0:
        case KC_SPC:
        case KC_COMM:
        case KC_DOT:
        case KC_SCLN:
        case KC_QUOT:
        case KC_SLSH:
        case KC_LBRC:
        case KC_RBRC:
        case KC_NUHS:
        case KC_NUBS:
        case KC_GRV:
        case KC_MINS:
        case KC_EQL:
            return false;
    }
    return get_chordal_hold_default(tap_hold_record, other_record);
}

// clang-format off
const char chordal_hold_layout[MATRIX_ROWS][MATRIX_COLS] PROGMEM = {
//  col:  0    1    2    3    4    5    6    7    8    9   10   11   12   13   14   15   16
    //   ESC  F1   F2   F3   F4   F5   F6   F7   F8   F9  F10  F11  F12 PScr CTNA RGBM  ---
    {    'L', 'L', 'L', 'L', 'L', '*', '*', '*', '*', 'R', 'R', 'R', 'R', '*', 'R', 'R', 'R'  },
    //    `    1    2    3    4    5    6    =    7    8    9    0    -   Bksp INS  Home PgUp
    {    'L', 'L', 'L', 'L', 'L', 'L', 'L', '*', 'R', 'R', 'R', 'R', 'R', 'R', 'R', 'R', 'R'  },
    //   Tab   Q    W    F    P    B    [    J    L    U    Y    ;    /   ---  Del  End  PgDn
    {    'L', 'L', 'L', 'L', 'L', 'L', '*', 'R', 'R', 'R', 'R', 'R', 'R', '*', 'R', 'R', 'R'  },
    // CtlEsc  A    R    S    T    G    ]    M    N    E    I    O    '   Enter ---  ---  ---
    {    'L', 'L', 'L', 'L', 'L', 'L', '*', 'R', 'R', 'R', 'R', 'R', 'R', 'R', '*', '*', '*'  },
    //   LSft  Z    X    C    D    V   NUBS NUHS   K    H    ,    .  ---  RSft ---  Up   ---
    {    'L', 'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', '*', 'R', '*', 'R', '*'  },
    //   LCtl LWin LAlt ---  ---  ---   Spc   ---  ---  ---  RAlt RGui  Fn  RCtl Left Down Right
    {    'L', 'L', 'L', '*', '*', '*', '*',   '*', '*', '*', 'R', 'R', 'R', 'R', 'R', 'R', 'R'  },
};
// clang-format on
#endif // CHORDAL_HOLD
