# Build Options
#   change yes to no to disable
#
BOOTMAGIC_ENABLE = yes      # Enable Bootmagic Lite
MOUSEKEY_ENABLE = no	  # Mouse keys
EXTRAKEY_ENABLE = yes	  # Audio control and System control
CONSOLE_ENABLE = no	    # Console for debug
COMMAND_ENABLE = no     # Commands for debug and configuration
NKRO_ENABLE = yes           # Enable N-Key Rollover
BACKLIGHT_ENABLE = yes  # Enable keyboard backlight functionality
AUDIO_ENABLE = no
RGBLIGHT_ENABLE = yes

WS2812_DRIVER_REQUIRED = yes // https://docs.qmk.fm/#/ws2812_driver

# Disable unsupported hardware
RGBLIGHT_SUPPORTED = yes
AUDIO_SUPPORTED = no
