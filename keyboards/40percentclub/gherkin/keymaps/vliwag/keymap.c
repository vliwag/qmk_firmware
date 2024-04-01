#include QMK_KEYBOARD_H

#define FN1_SPC     LT(1, KC_SPC)
#define FN2_BSPC    LT(2, KC_BSPC)
#define FN3_C       LT(3, KC_C)
#define FN4_V       LT(4, KC_V)
#define FN5_B       LT(5, KC_B)
#define CTL_Z       CTL_T(KC_Z)
#define ALT_X       ALT_T(KC_X)
#define ALT_N       ALGR_T(KC_N)
#define CTL_M       RCTL_T(KC_M)
#define SFT_ENT     RSFT_T(KC_ENT)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_ortho_3x10(
	KC_MPRV, KC_MNXT, KC_F13, KC_F14, KC_F15, KC_PMNS, KC_P7, KC_P8, KC_P9, KC_PPLS, 
	KC_VOLU, KC_MUTE, KC_F16, KC_F17, KC_F18, KC_PAST, KC_P4, KC_P5, KC_P6, KC_P0, 
	KC_VOLD, KC_MPLY, MO(1),  KC_INS, KC_NUM, KC_PSLS, KC_P1, KC_P2, KC_P3, KC_PENT
	),
	[1] = LAYOUT_ortho_3x10(
	RGB_HUD, RGB_HUI, RGB_SPI, RGB_MOD,  KC_NO, KC_NO, RGB_M_X,  RGB_M_G,  RGB_M_TW, KC_NO,
	RGB_VAI, RGB_SAI, RGB_SPD, RGB_RMOD, KC_NO, KC_NO, RGB_M_SW, RGB_M_SN, RGB_M_K,  QK_BOOT, 
	RGB_VAD, RGB_SAD, KC_TRNS, RGB_TOG,  KC_NO, KC_NO, RGB_M_P,  RGB_M_B,  RGB_M_R,  KC_NO
	)
};