![PicoFlasher logo](https://raw.githubusercontent.com/X360Tools/PicoFlasher/master/picoflasher.png)
Updated Pins based on this post below, and fixed the clocks on some RP2040 zero's.

https://github.com/X360Tools/PicoFlasher/issues/24#issuecomment-1666996348 <--- these guys did all of the hard work I just merged with the clock fix

<img width="786" height="745" alt="image" src="https://github.com/user-attachments/assets/a2de2d79-7a03-48c2-92f5-8372acb9ba86" />


#ifndef __PINS_H__
#define __PINS_H__

// RP2040-Zero remap based on liquidzorch's PicoFlasher issue #24 mapping.
// 16MB NAND: stock GP16-GP21 remapped to GP0-GP5.
#define SPI_MISO 0
#define SPI_SS_N 1
#define SPI_CLK 2
#define SPI_MOSI 3
#define SMC_DBG_EN 4
#define SMC_RST_XDK_N 5

// ISD12xx audible feedback IC pins left unchanged.
#define NUVOTON_SPI_RDY 11
#define NUVOTON_SPI_MISO 12
#define NUVOTON_SPI_SS_N 13
#define NUVOTON_SPI_CLK 14
#define NUVOTON_SPI_MOSI 15

// Corona 4GB/eMMC: stock GP6-GP9 remapped to GP26-GP29.
#define MMC_DAT0_PIN 26
#define MMC_CMD_PIN 27
#define MMC_CLK_PIN 28
#define MMC_RST_PIN 29

#endif



# PicoFlasher

Open source XBOX 360 NAND flasher firmware for Raspberry Pi Pico

([Binary Build Guide](BUILD.md)) If you want, you can build your own binary.

## Wiring:

### Nand Flash
| Pico | Xbox |
| ------------- | ------------- |
| GP16  | SPI_MISO  |
| GP17  | SPI_SS_N |
| GP18  | SPI_CLK  |
| GP19  |  SPI_MOSI |
| GP20  |  SMC_DBG_EN |
| GP21  | SMC_RST_XDK_N  |
| GND  |  GND |

### ISD12xx Audible Feedback IC
|  | Pico | Trinity | Corona |
| ------------- | ------------- | ------------- | ------------- |
SPI_RDY | GP11 | FT2V4 | J2C2-A10
SPI_MISO | GP12 | FT2R7 | J2C2-B11
SPI_SS_N | GP13 | FT2R6 | J2C2-A11
SPI_CLK | GP14 | FT2T4 | J2C2-A8
SPI_MOSI | GP15 | FT2T5 | J2C2-B8

### EMMC Flash
| Pico | Xbox | Corona 4GB |
| ------------- | ------------- | ------------- |
| GP6  | FLSH_DATA<0> | U1D1 pin 16 |
| GP7  | FLSH_WP_N (CMD) | U1D1 pin 3 |
| GP8  |  FLSH_CE_N (CLK) | U1D1 pin 2 |
| GP9  |  MMC_RST_N | U1D1 pin 1 |
| GP21  | SMC_RST_XDK_N  | Same as 16MB flash |
| GND  |  GND | U1D1 PIN 4 |

**DO NOT SOLDER ANYTHING TO THE CRYISTAL**
