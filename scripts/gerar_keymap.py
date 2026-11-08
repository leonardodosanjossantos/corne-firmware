# Gera keymap.c a partir do backup do Vial (corne_1.vil)
import json, re, sys
REN = {'KC_GESC':'QK_GESC','KC_PSCREEN':'KC_PSCR','KC_CAPSLOCK':'KC_CAPS','KC_BSPACE':'KC_BSPC',
'KC_SPACE':'KC_SPC','KC_ENTER':'KC_ENT','KC_ESCAPE':'KC_ESC','KC_LSHIFT':'KC_LSFT','KC_RSHIFT':'KC_RSFT',
'KC_LCTRL':'KC_LCTL','KC_RCTRL':'KC_RCTL','KC_SCOLON':'KC_SCLN','KC_QUOTE':'KC_QUOT','KC_SLASH':'KC_SLSH',
'KC_COMMA':'KC_COMM','KC_BSLASH':'KC_BSLS','KC_RBRACKET':'KC_RBRC','KC_LBRACKET':'KC_LBRC','KC_EQUAL':'KC_EQL',
'KC_MINUS':'KC_MINS','KC_GRAVE':'KC_GRV','KC_NONUS_BSLASH':'KC_NUBS','KC_PGDOWN':'KC_PGDN','KC_DELETE':'KC_DEL',
'KC_INSERT':'KC_INS','KC_TRNS':'_______','KC_NO':'XXXXXXX',
'KC_BTN1':'MS_BTN1','KC_BTN2':'MS_BTN2','KC_MS_U':'MS_UP','KC_MS_D':'MS_DOWN','KC_MS_L':'MS_LEFT','KC_MS_R':'MS_RGHT',
'KC_WH_U':'MS_WHLU','KC_WH_D':'MS_WHLD',
'RGB_TOG':'RM_TOGG','RGB_MOD':'RM_NEXT','RGB_RMOD':'RM_PREV','RGB_HUI':'RM_HUEU','RGB_HUD':'RM_HUED',
'RGB_SAI':'RM_SATU','RGB_SAD':'RM_SATD','RGB_VAI':'RM_VALU','RGB_VAD':'RM_VALD'}
def conv(k):
    k = re.sub(r'LT(\d)\(', r'LT(\1, ', k)
    return re.sub(r'(?:KC|RGB)_[A-Z0-9_]+', lambda m: REN.get(m.group(0), m.group(0)), k)
d = json.load(open(sys.argv[1]))
out = []
for n, L in enumerate(d['layout']):
    rows = []
    for r in range(3):
        left  = [conv(k) for k in L[r] if k != -1]
        right = [conv(k) for k in reversed(L[r+4]) if k != -1]
        rows.append(', '.join(left) + ',      ' + ', '.join(right))
    thumbs = ', '.join(conv(k) for k in L[3][3:6]) + ',      ' + ', '.join(conv(k) for k in reversed(L[7][3:6]))
    body = ',\n        '.join(rows + [' '*30 + thumbs])
    out.append(f'    [{n}] = LAYOUT_split_3x6_3_ex2(\n        {body}\n    )')
enc = []
for n, L in enumerate(d['encoder_layout']):
    enc.append(f'    [{n}] = {{ ' + ', '.join(f'ENCODER_CCW_CW({conv(a)}, {conv(b)})' for a, b in L) + ' }')
print(open(sys.argv[2]).read().replace('/*LAYERS*/', ',\n'.join(out)).replace('/*ENCODERS*/', ',\n'.join(enc)))
