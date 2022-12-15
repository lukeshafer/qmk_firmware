#include QMK_KEYBOARD_H

enum custom_layers {
    _QWERTY,
    _LOWER,
    _RAISE,
};


#define RAISE MO(_RAISE)
#define LOWER MO(_LOWER)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_QWERTY] = LAYOUT_5x6(
     KC_GRV , KC_1  , KC_2  , KC_3  , KC_4   , KC_5  ,                         KC_6  , KC_7  , KC_8  , KC_9  , KC_0  ,KC_EQL,
     KC_TAB , KC_Q  , KC_W  , KC_E  , KC_R   , KC_T  ,                         KC_Y  , KC_U  , KC_I  , KC_O  , KC_P  ,KC_MINS,
     KC_ESC , KC_A  , KC_S  , KC_D  , KC_F   , KC_G  ,                         KC_H  , KC_J  , KC_K  , KC_L  ,KC_SCLN,KC_QUOT,
     KC_BSPC, KC_Z  , KC_X  , KC_C  , KC_V   , KC_B  ,                         KC_N  , KC_M  ,KC_COMM,KC_DOT ,KC_SLSH,KC_BSLS,
                      KC_LBRC,KC_RBRC,                                                       KC_MS_L, KC_MS_R,
                                      KC_LCTL, KC_LSFT,                                KC_SPC,
                                      RAISE  , KC_SPC ,                                KC_DEL,
                                      KC_LGUI, KC_DEL,                        KC_RGUI, KC_ENT
  ),

  [_RAISE] = LAYOUT_5x6(
       KC_F12 , KC_F1 , KC_F2 , KC_F3 , KC_F4 , KC_F5 ,                        KC_F6  , KC_F7 , KC_F8 , KC_F9 ,KC_F10 ,KC_F11 ,
       _______,_______,_______, KC_UP ,_______,KC_VOLU,                        _______,_______,_______, _______ ,_______,_______,
       _______,_______,KC_LEFT,KC_DOWN,KC_RGHT,KC_VOLD,                        _______,KC_MS_L,KC_BTN3,KC_MS_L,_______,KC_VOLU,
       _______,_______,_______,_______,_______,KC_MUTE,                        _______,_______,_______,_______,_______,KC_VOLD,
                       _______,_______,                                                        KC_MPRV,KC_MNXT,
                                               _______,_______,                _______,
                                               _______,_______,                _______,
                                               _______,_______,         _______,_______
  ),
};
