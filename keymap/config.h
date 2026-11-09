#pragma once
// Mesmo ID do firmware Vial que está no teclado hoje (extraído do .uf2),
// para o vial.rocks reconhecer o teclado e aceitar o corne_1.vil
#define VIAL_KEYBOARD_UID {0x89, 0x36, 0x2A, 0xC7, 0xFA, 0xD8, 0x89, 0x45}
// Combinação para desbloquear o Vial: Esc + Q
#define VIAL_UNLOCK_COMBO_ROWS {0, 0}
#define VIAL_UNLOCK_COMBO_COLS {0, 1}
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET

// Tap-hold (teclas LT): tempo padrão de 200 ms em vez de 600 ms
// (vale quando a memória do teclado é resetada; o Vial pode mudar depois)
#define TAPPING_TERM 200
