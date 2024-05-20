// This file is part of the CircuitPython project: https://circuitpython.org
//
// SPDX-FileCopyrightText: Copyright (c) 2017 Scott Shawcroft for Adafruit Industries
//
// SPDX-License-Identifier: MIT

#pragma once

#define MICROPY_HW_BOARD_NAME "Arduino MKR Zero"
#define MICROPY_HW_MCU_NAME "samd21g18"

#define DEFAULT_I2C_BUS_SCL (&pin_PA09)
#define DEFAULT_I2C_BUS_SDA (&pin_PA08)

#define DEFAULT_SPI_BUS_SCK (&pin_PA17)
#define DEFAULT_SPI_BUS_MOSI (&pin_PA16)
#define DEFAULT_SPI_BUS_MISO (&pin_PA19)

#define DEFAULT_UART_BUS_RX (&pin_PB23)
#define DEFAULT_UART_BUS_TX (&pin_PB22)

// USB is always used internally so skip the pin objects for it.
#define IGNORE_PIN_PA24     1
#define IGNORE_PIN_PA25     1
