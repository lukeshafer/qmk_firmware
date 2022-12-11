#pragma once

#include "config_common.h"

/* key matrix size */
// Rows are doubled-up
#define MATRIX_ROWS 12
#define MATRIX_COLS 6

// wiring of each half
// left
#define MATRIX_COL_PINS { GP22, GP21, GP20, GP19, GP3, GP2 }
#define MATRIX_ROW_PINS { GP13, GP12, GP11, GP14, GP10, GP27, GP28 }
// right
#define MATRIX_COL_PINS_RIGHT { GP22, GP21, GP20, GP19, GP3, GP2 }
#define MATRIX_ROW_PINS_RIGHT { GP13, GP12, GP11, GP14, GP10, GP27, GP28 }

#define DIODE_DIRECTION COL2ROW

/* PMW3360 Settings */
// FIXME
#define POINTING_DEVICE_CS_PIN B0
/* pmw3360 config  */
#define PMW33XX_CS_PIN                       B9
#define PMW33XX_SPI_DIVISOR                  8

/* serial.c configuration for split keyboard */
// FIXME
#define SERIAL_USART_HALF_DUPLEX  // Enable full duplex operation mode.
#define SERIAL_USART_TX_PIN      GP1
#define SERIAL_PIO_USE_PIO1 // Force the usage of PIO1 peripheral, by default the Serial implementation uses the PIO0 peripheral
#define SERIAL_USART_TX_PAL_MODE 7    // Pin "alternate function", see the respective datasheet for the appropriate values for your MCU. default: 7
#define SERIAL_USART_TIMEOUT     100  // USART driver timeout. default 100

// SPI Configuration
// FIXME
#define SPI_DRIVER SPID0
#define SPI_SCK_PIN GP22
#define SPI_MOSI_PIN GP23
#define SPI_MISO_PIN GP20

