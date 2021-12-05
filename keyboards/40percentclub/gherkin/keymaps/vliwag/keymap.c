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
	KC_PPLS,  KC_P1,  KC_P4,  KC_P7,  KC_PSLS,  KC_NLCK,  KC_F16,  MO(1),   KC_MPRV,  KC_VOLD, 
	KC_P0,    KC_P2,  KC_P5,  KC_P8,  KC_PAST,  KC_F19,   KC_F17,  KC_F14,  KC_MNXT,  KC_VOLU, 
	KC_PENT,  KC_P3,  KC_P6,  KC_P9,  KC_PMNS,  KC_F20,   KC_F18,  KC_F15,  KC_MPLY,  KC_MUTE
	),
	
	[1] = LAYOUT_ortho_3x10(
	KC_NO,  RGB_M_P,  RGB_M_SW,  RGB_M_X,  KC_NO,  KC_NO,  RGB_TOG,  KC_TRNS,   RGB_SAD,  RGB_HUD, 
	KC_NO,  RGB_M_B,  RGB_M_SN,  RGB_M_G,  KC_NO,  KC_NO,  RGB_VAD,  RGB_RMOD,  RGB_SAI,  RGB_HUI, 
	KC_NO,  RGB_M_R,  RGB_M_K,   RGB_M_T,  KC_NO,  KC_NO,  RGB_VAI,  RGB_MOD,   RGB_SPD,  RGB_SPI
	)
};

void keyboard_pre_init_user(void) {
  // Call the keyboard pre init code.

  // Set our LED pins as output
  setPinOutput(D5);
  setPinOutput(B0);
}

void led_set_user(uint8_t usb_led) {
  if (IS_LED_ON(usb_led, USB_LED_NUM_LOCK)) {
    writePinLow(D5);
  } else {
    writePinHigh(D5);
  }

  if (IS_LED_ON(usb_led, USB_LED_CAPS_LOCK)) {
    writePinLow(B0);
  } else {
    writePinHigh(B0);
  }
}
