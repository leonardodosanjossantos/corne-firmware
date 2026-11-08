// Keymap do Corne v4 (crkbd rev4_1) do Leonardo, gerada a partir do corne_1.vil
#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split_3x6_3_ex2(
        QK_GESC, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_PSCR,      KC_CAPS, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSPC,
        LT(3, KC_TAB), KC_A, KC_S, KC_D, KC_F, KC_G, TG(4),      TG(5), KC_H, KC_J, KC_K, KC_L, KC_SCLN, TD(3),
        KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B,      KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT,
                                      TD(1), LT(1, KC_VOLD), KC_SPC,      KC_ENT, LT(2, KC_VOLU), TD(0)
    ),
    [1] = LAYOUT_split_3x6_3_ex2(
        KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, XXXXXXX,      XXXXXXX, KC_6, KC_7, KC_8, KC_9, KC_0, KC_BSPC,
        KC_TAB, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX, KC_MINS, KC_EQL, KC_LBRC, KC_RBRC, KC_BSLS, KC_GRV,
        _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,      LSFT(KC_MINS), LSFT(KC_EQL), LSFT(KC_LBRC), LSFT(KC_RBRC), LSFT(KC_NUBS), _______,
                                      KC_LCTL, _______, KC_SPC,      KC_ENT, _______, KC_RCTL
    ),
    [2] = LAYOUT_split_3x6_3_ex2(
        KC_TAB, LSFT(KC_1), LSFT(KC_2), LSFT(KC_3), LSFT(KC_4), LSFT(KC_5), XXXXXXX,      XXXXXXX, LSFT(KC_6), LSFT(KC_7), LSFT(KC_8), LSFT(KC_9), LSFT(KC_0), KC_BSPC,
        KC_LCTL, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, XXXXXXX,      XXXXXXX, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, XXXXXXX,
        KC_LSFT, KC_F11, KC_F12, XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                                      KC_LGUI, _______, KC_SPC,      KC_ENT, _______, KC_RGUI
    ),
    [3] = LAYOUT_split_3x6_3_ex2(
        XXXXXXX, XXXXXXX, MS_BTN1, MS_UP, MS_BTN2, XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, KC_PGUP, KC_UP, KC_PGDN, KC_PSCR, XXXXXXX,
        XXXXXXX, XXXXXXX, MS_LEFT, MS_DOWN, MS_RGHT, XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, KC_LEFT, KC_DOWN, KC_RIGHT, KC_INS, KC_DEL,
        XXXXXXX, XXXXXXX, XXXXXXX, MS_WHLD, MS_WHLU, XXXXXXX,      XXXXXXX, KC_HOME, KC_END, KC_VOLD, KC_VOLU, KC_MUTE,
                                      XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX
    ),
    [4] = LAYOUT_split_3x6_3_ex2(
        KC_ESC, KC_Q, KC_W, KC_E, KC_R, KC_T, _______,      _______, _______, _______, _______, _______, _______, RM_TOGG,
        KC_TAB, KC_A, KC_S, KC_D, KC_F, KC_G, TG(4),      _______, KC_H, _______, _______, _______, _______, XXXXXXX,
        KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B,      _______, _______, _______, _______, _______, _______,
                                      _______, KC_VOLU, KC_SPC,      _______, _______, _______
    ),
    [5] = LAYOUT_split_3x6_3_ex2(
        QK_BOOT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        RM_TOGG, RM_HUEU, RM_SATU, RM_VALU, XXXXXXX, XXXXXXX, XXXXXXX,      TG(5), XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        RM_NEXT, RM_HUED, RM_SATD, RM_VALD, XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                                      XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX
    )
};

// Encoders (girar para um lado / para o outro) - mesmo que estava no Vial
#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [0] = { ENCODER_CCW_CW(RM_NEXT, RM_PREV), ENCODER_CCW_CW(RM_HUEU, RM_HUED), ENCODER_CCW_CW(RM_VALU, RM_VALD), ENCODER_CCW_CW(RM_SATU, RM_SATD) },
    [1] = { ENCODER_CCW_CW(RM_NEXT, RM_PREV), ENCODER_CCW_CW(RM_HUEU, RM_HUED), ENCODER_CCW_CW(RM_VALU, RM_VALD), ENCODER_CCW_CW(RM_SATU, RM_SATD) },
    [2] = { ENCODER_CCW_CW(RM_NEXT, RM_PREV), ENCODER_CCW_CW(RM_HUEU, RM_HUED), ENCODER_CCW_CW(RM_VALU, RM_VALD), ENCODER_CCW_CW(RM_SATU, RM_SATD) },
    [3] = { ENCODER_CCW_CW(RM_NEXT, RM_PREV), ENCODER_CCW_CW(RM_HUEU, RM_HUED), ENCODER_CCW_CW(RM_VALU, RM_VALD), ENCODER_CCW_CW(RM_SATU, RM_SATD) },
    [4] = { ENCODER_CCW_CW(_______, _______), ENCODER_CCW_CW(_______, _______), ENCODER_CCW_CW(_______, _______), ENCODER_CCW_CW(_______, _______) },
    [5] = { ENCODER_CCW_CW(_______, _______), ENCODER_CCW_CW(_______, _______), ENCODER_CCW_CW(_______, _______), ENCODER_CCW_CW(_______, _______) }
};
#endif

// ===== FUNCIONALIDADE 1: teclado liga com LED verde =====
// "_noeeprom" = não grava na memória: toda vez que ligar, volta para verde.
void keyboard_post_init_user(void) {
    rgb_matrix_enable_noeeprom();
    rgb_matrix_mode_noeeprom(RGB_MATRIX_SOLID_COLOR);
    rgb_matrix_sethsv_noeeprom(HSV_GREEN);
}

// ===== FUNCIONALIDADE 2: Caps Lock ligado = teclado todo vermelho =====
bool rgb_matrix_indicators_user(void) {
    if (host_keyboard_led_state().caps_lock) {
        rgb_matrix_set_color_all(RGB_RED);
    }
    return false;
}

