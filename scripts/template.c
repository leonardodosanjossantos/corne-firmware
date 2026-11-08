// Keymap do Corne v4 (crkbd rev4_1) do Leonardo, gerada a partir do corne_1.vil
#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/*LAYERS*/
};

// Encoders (girar para um lado / para o outro) - mesmo que estava no Vial
#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
/*ENCODERS*/
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
