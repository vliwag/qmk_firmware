#pragma once

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* Make layout upside down = USB port on left side */
#undef MATRIX_COL_PINS
#undef MATRIX_ROW_PINS
#define MATRIX_COL_PINS { D0, D4, C6, D7, E6, B4 }
#define MATRIX_ROW_PINS { B6, B2, B3, B1, F7 }

/* Enable RGB Lighting and Settings */
#define WS2812_DI_PIN D3			// The pin on the microcontroller the LED strip DIN is connected to
#define RGBLIGHT_LED_COUNT 8		// Number of LEDs in your strip
#define WS2812_TIMING	1250		// The total length of a bit (TH+TL) in nanoseconds
#define WS2812_T1H	900				// The length of a “1” bit’s high phase in nanoseconds
#define WS2812_T0H	350				// The length of a “0” bit’s high phase in nanoseconds
#define WS2812_TRST_US	280			// The length of the reset phase in microseconds
#define WS2812_BYTE_ORDER WS2812_BYTE_ORDER_GRB // The byte order of the RGB data

/* Default RGB Mode (RGBLIGHT_MODE_RAINBOW_MOOD) after EEPROM Clear */
#define RGBLIGHT_DEFAULT_ON	true
#define RGBLIGHT_DEFAULT_MODE RGBLIGHT_MODE_RAINBOW_MOOD

//#define RGBLIGHT_ANIMATIONS				// Enable all additional animation modes. (deprecated)
#define RGBLIGHT_EFFECT_ALTERNATING		// Enable alternating animation mode.
#define RGBLIGHT_EFFECT_BREATHING		// Enable breathing animation mode.
#define RGBLIGHT_EFFECT_CHRISTMAS		// Enable christmas animation mode.
#define RGBLIGHT_EFFECT_KNIGHT			// Enable knight animation mode.
#define RGBLIGHT_EFFECT_RAINBOW_MOOD	// Enable rainbow mood animation mode.
#define RGBLIGHT_EFFECT_RAINBOW_SWIRL	// Enable rainbow swirl animation mode.
#define RGBLIGHT_EFFECT_RGB_TEST		// Enable RGB test animation mode.
#define RGBLIGHT_EFFECT_SNAKE			// Enable snake animation mode.
#define RGBLIGHT_EFFECT_STATIC_GRADIENT	// Enable static gradient mode.
#define RGBLIGHT_EFFECT_TWINKLE			// Enable twinkle animation mode.