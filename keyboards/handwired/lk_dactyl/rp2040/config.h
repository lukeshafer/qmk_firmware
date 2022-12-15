#pragma once

// wiring of each half
// left
#define MATRIX_COL_PINS { GP22, GP21, GP20, GP19, GP3, GP2 }
#define MATRIX_ROW_PINS { GP13, GP12, GP11, GP14, GP10, GP27, GP28 }
// right
#define MATRIX_COL_PINS_RIGHT { GP2, GP3, GP19, GP20, GP21, GP22 }
#define MATRIX_ROW_PINS_RIGHT { GP13, GP12, GP11, GP14, GP10, GP27, GP28 }

#define DIODE_DIRECTION COL2ROW

/* serial.c configuration for split keyboard */
#define SERIAL_USART_HALF_DUPLEX  // Enable half duplex operation mode.
#define SERIAL_USART_TX_PIN      GP1
#define SERIAL_PIO_USE_PIO1 // Force the usage of PIO1 peripheral, by default the Serial implementation uses the PIO0 peripheral

// SPI Configuration
#define SPI_DRIVER SPID0
#define SPI_SCK_PIN GP6
#define SPI_MOSI_PIN GP7
#define SPI_MISO_PIN GP4

/* PMW3360 Settings */
#define POINTING_DEVICE_RIGHT
#define POINTING_DEVICE_CS_PIN GP5
/* pmw3360 config  */
#define PMW33XX_CS_PIN GP5
