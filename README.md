# Firmware do meu Corne v4 (Vial)

A cada envio de alteração, o GitHub Actions compila o firmware sozinho.

## Como baixar o firmware
1. Abra a aba **Actions** do repositório.
2. Clique na execução mais recente (bolinha verde ✅).
3. Em **Artifacts**, baixe `firmware-corne-leonardo` (é um .zip com o `.uf2`).

## Como gravar no teclado
Faça em cada metade:
1. Ative a camada 5 e aperte Esc (`QK_BOOT`).
2. Arraste o `.uf2` para o drive **RPI-RP2** que vai aparecer.

Depois, no vial.rocks, use **File → Load** e escolha o `corne_1.vil`.

## Como mudar o layout
- **Teclas:** exporte o layout no Vial (**File → Save**) e substitua o `corne_1.vil` neste repositório. O `keymap.c` é gerado de novo a partir dele.
- **Código (LEDs, funções novas):** edite `scripts/template.c`.

## Arquivos
- `keymap/`: config.h, rules.mk e vial.json (a definição do teclado, extraída do firmware original).
- `scripts/gerar_keymap.py`: transforma o `.vil` em `keymap.c`.
- `scripts/template.c`: o código C (LED verde ao ligar, Caps Lock em vermelho).
