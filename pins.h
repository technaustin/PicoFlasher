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
