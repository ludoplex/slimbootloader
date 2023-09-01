/**@file
  GPIO ASL header

  Copyright (c) 2021 - 2023, Intel Corporation. All rights reserved.<BR>
  SPDX-License-Identifier: BSD-2-Clause-Patent

@par Specification Reference:
**/

//
// Definition for GPIO groups and pads
//
#ifndef _GPIO_ACPI_DEFINES_MTL_SOC_
#define _GPIO_ACPI_DEFINES_MTL_SOC_

#include <Pins/GpioPinsVer6SocM.h>

#define GPIO_VER6_SOC_M_ACPI_HID "INTC1083"
#define GPIO_HID_MTL_SOC_S "INTC1082"

//
// PCH GPIO Community address
//
#define PCH_GPIO_COM0 0x00D10000 // PID_GPIOCOM0 = 0xD1
#define PCH_GPIO_COM1 0x00D20000 // PID_GPIOCOM1 = 0xD2
#define PCH_GPIO_COM3 0x00D30000 // PID_GPIOCOM3 = 0xD3
#define PCH_GPIO_COM4 0x00D40000 // PID_GPIOCOM4 = 0xD4
#define PCH_GPIO_COM5 0x00D50000 // PID_GPIOCOM5 = 0xD5
#define PCH_GPIO_COM2 0x006c0000 // PID_GPIOCOM2 = 0x6C // Not required for MTL -M/P Added for build issues.


//
// MTL-M
//
#define  GPIO_VER6_SOC_M_DRIVER_CPU_PECI  0
#define  GPIO_VER6_SOC_M_DRIVER_CPU_RESET_B  1
#define  GPIO_VER6_SOC_M_DRIVER_CPU_SOUT  2
#define  GPIO_VER6_SOC_M_DRIVER_CPU_SCK  3
#define  GPIO_VER6_SOC_M_DRIVER_CPU_ALERT_B  4

#define  GPIO_VER6_SOC_M_DRIVER_GPP_V0  32
#define  GPIO_VER6_SOC_M_DRIVER_GPP_V1  33
#define  GPIO_VER6_SOC_M_DRIVER_GPP_V2  34
#define  GPIO_VER6_SOC_M_DRIVER_GPP_V3  35
#define  GPIO_VER6_SOC_M_DRIVER_GPP_V4  36
#define  GPIO_VER6_SOC_M_DRIVER_GPP_V5  37
#define  GPIO_VER6_SOC_M_DRIVER_GPP_V6  38
#define  GPIO_VER6_SOC_M_DRIVER_GPP_V7  39
#define  GPIO_VER6_SOC_M_DRIVER_GPP_V8  40
#define  GPIO_VER6_SOC_M_DRIVER_GPP_V9  41
#define  GPIO_VER6_SOC_M_DRIVER_GPP_V10  42
#define  GPIO_VER6_SOC_M_DRIVER_GPP_V11  43
#define  GPIO_VER6_SOC_M_DRIVER_GPP_V12  44
#define  GPIO_VER6_SOC_M_DRIVER_GPP_V13  45
#define  GPIO_VER6_SOC_M_DRIVER_GPP_V14  46
#define  GPIO_VER6_SOC_M_DRIVER_GPP_V15  47
#define  GPIO_VER6_SOC_M_DRIVER_GPP_V16  48
#define  GPIO_VER6_SOC_M_DRIVER_GPP_V17  49
#define  GPIO_VER6_SOC_M_DRIVER_GPP_V18  50
#define  GPIO_VER6_SOC_M_DRIVER_GPP_V19  51
#define  GPIO_VER6_SOC_M_DRIVER_GPP_V20  52
#define  GPIO_VER6_SOC_M_DRIVER_GPP_V21  53
#define  GPIO_VER6_SOC_M_DRIVER_GPP_V22  54
#define  GPIO_VER6_SOC_M_DRIVER_GPP_V23  55

#define  GPIO_VER6_SOC_M_DRIVER_GPP_C0  64
#define  GPIO_VER6_SOC_M_DRIVER_GPP_C1  65
#define  GPIO_VER6_SOC_M_DRIVER_GPP_C2  66
#define  GPIO_VER6_SOC_M_DRIVER_GPP_C3  67
#define  GPIO_VER6_SOC_M_DRIVER_GPP_C4  68
#define  GPIO_VER6_SOC_M_DRIVER_GPP_C5  69
#define  GPIO_VER6_SOC_M_DRIVER_GPP_C6  70
#define  GPIO_VER6_SOC_M_DRIVER_GPP_C7  71
#define  GPIO_VER6_SOC_M_DRIVER_GPP_C8  72
#define  GPIO_VER6_SOC_M_DRIVER_GPP_C9  73
#define  GPIO_VER6_SOC_M_DRIVER_GPP_C10  74
#define  GPIO_VER6_SOC_M_DRIVER_GPP_C11  75
#define  GPIO_VER6_SOC_M_DRIVER_GPP_C12  76
#define  GPIO_VER6_SOC_M_DRIVER_GPP_C13  77
#define  GPIO_VER6_SOC_M_DRIVER_GPP_C14  78
#define  GPIO_VER6_SOC_M_DRIVER_GPP_C15  79
#define  GPIO_VER6_SOC_M_DRIVER_GPP_C16  80
#define  GPIO_VER6_SOC_M_DRIVER_GPP_C17  81
#define  GPIO_VER6_SOC_M_DRIVER_GPP_C18  82
#define  GPIO_VER6_SOC_M_DRIVER_GPP_C19  83
#define  GPIO_VER6_SOC_M_DRIVER_GPP_C20  84
#define  GPIO_VER6_SOC_M_DRIVER_GPP_C21  85
#define  GPIO_VER6_SOC_M_DRIVER_GPP_C22  86
#define  GPIO_VER6_SOC_M_DRIVER_GPP_C23  87

// COM1
#define  GPIO_VER6_SOC_M_DRIVER_GPP_A0  96
#define  GPIO_VER6_SOC_M_DRIVER_GPP_A1  97
#define  GPIO_VER6_SOC_M_DRIVER_GPP_A2  98
#define  GPIO_VER6_SOC_M_DRIVER_GPP_A3  99
#define  GPIO_VER6_SOC_M_DRIVER_GPP_A4  100
#define  GPIO_VER6_SOC_M_DRIVER_GPP_A5  101
#define  GPIO_VER6_SOC_M_DRIVER_GPP_A6  102
#define  GPIO_VER6_SOC_M_DRIVER_GPP_A7  103
#define  GPIO_VER6_SOC_M_DRIVER_GPP_A8  104
#define  GPIO_VER6_SOC_M_DRIVER_GPP_A9  105
#define  GPIO_VER6_SOC_M_DRIVER_GPP_A10  106
#define  GPIO_VER6_SOC_M_DRIVER_GPP_A11  107
#define  GPIO_VER6_SOC_M_DRIVER_GPP_A12  108
#define  GPIO_VER6_SOC_M_DRIVER_GPP_A13  109
#define  GPIO_VER6_SOC_M_DRIVER_GPP_A14  110
#define  GPIO_VER6_SOC_M_DRIVER_GPP_A15  111
#define  GPIO_VER6_SOC_M_DRIVER_GPP_A16  112
#define  GPIO_VER6_SOC_M_DRIVER_GPP_A17  113
#define  GPIO_VER6_SOC_M_DRIVER_GPP_A18  114
#define  GPIO_VER6_SOC_M_DRIVER_GPP_A19  115
#define  GPIO_VER6_SOC_M_DRIVER_GPP_A20  116
#define  GPIO_VER6_SOC_M_DRIVER_GPP_A21  117
#define  GPIO_VER6_SOC_M_DRIVER_GPP_A22  118
#define  GPIO_VER6_SOC_M_DRIVER_GPP_A23  119
#define  GPIO_VER6_SOC_M_DRIVER_ESPI_CLK_LOOPBK  120

#define  GPIO_VER6_SOC_M_DRIVER_GPP_E0  128
#define  GPIO_VER6_SOC_M_DRIVER_GPP_E1  129
#define  GPIO_VER6_SOC_M_DRIVER_GPP_E2  130
#define  GPIO_VER6_SOC_M_DRIVER_GPP_E3  131
#define  GPIO_VER6_SOC_M_DRIVER_GPP_E4  132
#define  GPIO_VER6_SOC_M_DRIVER_GPP_E5  133
#define  GPIO_VER6_SOC_M_DRIVER_GPP_E6  134
#define  GPIO_VER6_SOC_M_DRIVER_GPP_E7  135
#define  GPIO_VER6_SOC_M_DRIVER_GPP_E8  136
#define  GPIO_VER6_SOC_M_DRIVER_GPP_E9  137
#define  GPIO_VER6_SOC_M_DRIVER_GPP_E10  138
#define  GPIO_VER6_SOC_M_DRIVER_GPP_E11  139
#define  GPIO_VER6_SOC_M_DRIVER_GPP_E12  140
#define  GPIO_VER6_SOC_M_DRIVER_GPP_E13  141
#define  GPIO_VER6_SOC_M_DRIVER_GPP_E14  142
#define  GPIO_VER6_SOC_M_DRIVER_GPP_E15  143
#define  GPIO_VER6_SOC_M_DRIVER_GPP_E16  144
#define  GPIO_VER6_SOC_M_DRIVER_GPP_E17  145
#define  GPIO_VER6_SOC_M_DRIVER_GPP_E18  146
#define  GPIO_VER6_SOC_M_DRIVER_GPP_E19  147
#define  GPIO_VER6_SOC_M_DRIVER_GPP_E20  148
#define  GPIO_VER6_SOC_M_DRIVER_GPP_E21  149
#define  GPIO_VER6_SOC_M_DRIVER_GPP_E22  150
#define  GPIO_VER6_SOC_M_DRIVER_GPP_E23  151
#define  GPIO_VER6_SOC_M_DRIVER_THC0_GPSI0_CLK_LOOPBK  152

// COM2
// COM3
#define  GPIO_VER6_SOC_M_DRIVER_GPP_H0  160
#define  GPIO_VER6_SOC_M_DRIVER_GPP_H1  161
#define  GPIO_VER6_SOC_M_DRIVER_GPP_H2  162
#define  GPIO_VER6_SOC_M_DRIVER_GPP_H3  163
#define  GPIO_VER6_SOC_M_DRIVER_GPP_H4  164
#define  GPIO_VER6_SOC_M_DRIVER_GPP_H5  165
#define  GPIO_VER6_SOC_M_DRIVER_GPP_H6  166
#define  GPIO_VER6_SOC_M_DRIVER_GPP_H7  167
#define  GPIO_VER6_SOC_M_DRIVER_GPP_H8  168
#define  GPIO_VER6_SOC_M_DRIVER_GPP_H9  169
#define  GPIO_VER6_SOC_M_DRIVER_GPP_H10  170
#define  GPIO_VER6_SOC_M_DRIVER_GPP_H11  171
#define  GPIO_VER6_SOC_M_DRIVER_GPP_H12  172
#define  GPIO_VER6_SOC_M_DRIVER_GPP_H13  173
#define  GPIO_VER6_SOC_M_DRIVER_GPP_H14  174
#define  GPIO_VER6_SOC_M_DRIVER_GPP_H15  175
#define  GPIO_VER6_SOC_M_DRIVER_GPP_H16  176
#define  GPIO_VER6_SOC_M_DRIVER_GPP_H17  177
#define  GPIO_VER6_SOC_M_DRIVER_GPP_H18  178
#define  GPIO_VER6_SOC_M_DRIVER_GPP_H19  179
#define  GPIO_VER6_SOC_M_DRIVER_GPP_H20  180
#define  GPIO_VER6_SOC_M_DRIVER_GPP_H21  181
#define  GPIO_VER6_SOC_M_DRIVER_GPP_H22  182
#define  GPIO_VER6_SOC_M_DRIVER_GPP_H23  183
#define  GPIO_VER6_SOC_M_DRIVER_LPI3C1_CLK_LOOPBK  184
#define  GPIO_VER6_SOC_M_DRIVER_LPI3C0_CLK_LOOPBK  185

#define  GPIO_VER6_SOC_M_DRIVER_GPP_F0  192
#define  GPIO_VER6_SOC_M_DRIVER_GPP_F1  193
#define  GPIO_VER6_SOC_M_DRIVER_GPP_F2  194
#define  GPIO_VER6_SOC_M_DRIVER_GPP_F3  195
#define  GPIO_VER6_SOC_M_DRIVER_GPP_F4  196
#define  GPIO_VER6_SOC_M_DRIVER_GPP_F5  197
#define  GPIO_VER6_SOC_M_DRIVER_GPP_F6  198
#define  GPIO_VER6_SOC_M_DRIVER_GPP_F7  199
#define  GPIO_VER6_SOC_M_DRIVER_GPP_F8  200
#define  GPIO_VER6_SOC_M_DRIVER_GPP_F9  201
#define  GPIO_VER6_SOC_M_DRIVER_GPP_F10  202
#define  GPIO_VER6_SOC_M_DRIVER_GPP_F11  203
#define  GPIO_VER6_SOC_M_DRIVER_GPP_F12  204
#define  GPIO_VER6_SOC_M_DRIVER_GPP_F13  205
#define  GPIO_VER6_SOC_M_DRIVER_GPP_F14  206
#define  GPIO_VER6_SOC_M_DRIVER_GPP_F15  207
#define  GPIO_VER6_SOC_M_DRIVER_GPP_F16  208
#define  GPIO_VER6_SOC_M_DRIVER_GPP_F17  209
#define  GPIO_VER6_SOC_M_DRIVER_GPP_F18  210
#define  GPIO_VER6_SOC_M_DRIVER_GPP_F19  211
#define  GPIO_VER6_SOC_M_DRIVER_GPP_F20  212
#define  GPIO_VER6_SOC_M_DRIVER_GPP_F21  213
#define  GPIO_VER6_SOC_M_DRIVER_GPP_F22  214
#define  GPIO_VER6_SOC_M_DRIVER_GPP_F23  215
#define  GPIO_VER6_SOC_M_DRIVER_THC1_GSPI1_CLK_LOOPBK  216
#define  GPIO_VER6_SOC_M_DRIVER_GSPI0A_CLK_LOOPBK  217

#define  GPIO_VER6_SOC_M_DRIVER_SPI0_IO2  224
#define  GPIO_VER6_SOC_M_DRIVER_SPI0_IO3  225
#define  GPIO_VER6_SOC_M_DRIVER_SPI0_MOSI_IO_0  226
#define  GPIO_VER6_SOC_M_DRIVER_SPI0_MISO_IO_0  227
#define  GPIO_VER6_SOC_M_DRIVER_SPI0_TPM_CS_B  228
#define  GPIO_VER6_SOC_M_DRIVER_SPI0_FLASH_0_CS_B  229
#define  GPIO_VER6_SOC_M_DRIVER_SPI0_FLASH_1_CS_B  230
#define  GPIO_VER6_SOC_M_DRIVER_SPI0_CLK  231
#define  GPIO_VER6_SOC_M_DRIVER_BKLTEN  232
#define  GPIO_VER6_SOC_M_DRIVER_BKLTCTL  233
#define  GPIO_VER6_SOC_M_DRIVER_VDDEN  234
#define  GPIO_VER6_SOC_M_DRIVER_SYS_PWROK  235
#define  GPIO_VER6_SOC_M_DRIVER_SYS_RESET_B  236
#define  GPIO_VER6_SOC_M_DRIVER_MLK_RST_B  237
#define  GPIO_VER6_SOC_M_DRIVER_SPI0_CLK_LOOPBK  238

#define  GPIO_VER6_SOC_M_DRIVER_USB_0  256
#define  GPIO_VER6_SOC_M_DRIVER_USB_1  257
#define  GPIO_VER6_SOC_M_DRIVER_USB_2  258
#define  GPIO_VER6_SOC_M_DRIVER_USB_3  259
#define  GPIO_VER6_SOC_M_DRIVER_USB_4  260
#define  GPIO_VER6_SOC_M_DRIVER_USB_5  261
#define  GPIO_VER6_SOC_M_DRIVER_USB_6  262
#define  GPIO_VER6_SOC_M_DRIVER_USB_7  263
#define  GPIO_VER6_SOC_M_DRIVER_TS_0  264
#define  GPIO_VER6_SOC_M_DRIVER_TS_1  265
#define  GPIO_VER6_SOC_M_DRIVER_THC_0  266
#define  GPIO_VER6_SOC_M_DRIVER_THC_1  267
#define  GPIO_VER6_SOC_M_DRIVER_THC_2  268
#define  GPIO_VER6_SOC_M_DRIVER_THC_3  269

// COM4
#define  GPIO_VER6_SOC_M_DRIVER_GPP_S0  288
#define  GPIO_VER6_SOC_M_DRIVER_GPP_S1  289
#define  GPIO_VER6_SOC_M_DRIVER_GPP_S2  290
#define  GPIO_VER6_SOC_M_DRIVER_GPP_S3  291
#define  GPIO_VER6_SOC_M_DRIVER_GPP_S4  292
#define  GPIO_VER6_SOC_M_DRIVER_GPP_S5  293
#define  GPIO_VER6_SOC_M_DRIVER_GPP_S6  294
#define  GPIO_VER6_SOC_M_DRIVER_GPP_S7  295

#define  GPIO_VER6_SOC_M_DRIVER_MBPB0  320
#define  GPIO_VER6_SOC_M_DRIVER_MBPB1  321
#define  GPIO_VER6_SOC_M_DRIVER_MBPB2  322
#define  GPIO_VER6_SOC_M_DRIVER_MBPB3  323
#define  GPIO_VER6_SOC_M_DRIVER_JTAG_TDO  324
#define  GPIO_VER6_SOC_M_DRIVER_PRDY_B  325
#define  GPIO_VER6_SOC_M_DRIVER_PREQ_B  326
#define  GPIO_VER6_SOC_M_DRIVER_JTAG_TDI  327
#define  GPIO_VER6_SOC_M_DRIVER_JTAG_TMS  328
#define  GPIO_VER6_SOC_M_DRIVER_JTAG_TCK  329
#define  GPIO_VER6_SOC_M_DRIVER_DBG_PMODE  330
#define  GPIO_VER6_SOC_M_DRIVER_JTAG_TRST_B  331

// COM5
#define  GPIO_VER6_SOC_M_DRIVER_GPP_B0  352
#define  GPIO_VER6_SOC_M_DRIVER_GPP_B1  353
#define  GPIO_VER6_SOC_M_DRIVER_GPP_B2  354
#define  GPIO_VER6_SOC_M_DRIVER_GPP_B3  355
#define  GPIO_VER6_SOC_M_DRIVER_GPP_B4  356
#define  GPIO_VER6_SOC_M_DRIVER_GPP_B5  357
#define  GPIO_VER6_SOC_M_DRIVER_GPP_B6  358
#define  GPIO_VER6_SOC_M_DRIVER_GPP_B7  359
#define  GPIO_VER6_SOC_M_DRIVER_GPP_B8  360
#define  GPIO_VER6_SOC_M_DRIVER_GPP_B9  361
#define  GPIO_VER6_SOC_M_DRIVER_GPP_B10  362
#define  GPIO_VER6_SOC_M_DRIVER_GPP_B11  363
#define  GPIO_VER6_SOC_M_DRIVER_GPP_B12  364
#define  GPIO_VER6_SOC_M_DRIVER_GPP_B13  365
#define  GPIO_VER6_SOC_M_DRIVER_GPP_B14  366
#define  GPIO_VER6_SOC_M_DRIVER_GPP_B15  367
#define  GPIO_VER6_SOC_M_DRIVER_GPP_B16  368
#define  GPIO_VER6_SOC_M_DRIVER_GPP_B17  369
#define  GPIO_VER6_SOC_M_DRIVER_GPP_B18  370
#define  GPIO_VER6_SOC_M_DRIVER_GPP_B19  371
#define  GPIO_VER6_SOC_M_DRIVER_GPP_B20  372
#define  GPIO_VER6_SOC_M_DRIVER_GPP_B21  373
#define  GPIO_VER6_SOC_M_DRIVER_GPP_B22  374
#define  GPIO_VER6_SOC_M_DRIVER_GPP_B23  375
#define  GPIO_VER6_SOC_M_DRIVER_ISHI3C0_CLK_LOOPBK  376

#define  GPIO_VER6_SOC_M_DRIVER_GPP_D0  384
#define  GPIO_VER6_SOC_M_DRIVER_GPP_D1  385
#define  GPIO_VER6_SOC_M_DRIVER_GPP_D2  386
#define  GPIO_VER6_SOC_M_DRIVER_GPP_D3  387
#define  GPIO_VER6_SOC_M_DRIVER_GPP_D4  388
#define  GPIO_VER6_SOC_M_DRIVER_GPP_D5  389
#define  GPIO_VER6_SOC_M_DRIVER_GPP_D6  390
#define  GPIO_VER6_SOC_M_DRIVER_GPP_D7  391
#define  GPIO_VER6_SOC_M_DRIVER_GPP_D8  392
#define  GPIO_VER6_SOC_M_DRIVER_GPP_D9  393
#define  GPIO_VER6_SOC_M_DRIVER_GPP_D10  394
#define  GPIO_VER6_SOC_M_DRIVER_GPP_D11  395
#define  GPIO_VER6_SOC_M_DRIVER_GPP_D12  396
#define  GPIO_VER6_SOC_M_DRIVER_GPP_D13  397
#define  GPIO_VER6_SOC_M_DRIVER_GPP_D14  398
#define  GPIO_VER6_SOC_M_DRIVER_GPP_D15  399
#define  GPIO_VER6_SOC_M_DRIVER_GPP_D16  400
#define  GPIO_VER6_SOC_M_DRIVER_GPP_D17  401
#define  GPIO_VER6_SOC_M_DRIVER_GPP_D18  402
#define  GPIO_VER6_SOC_M_DRIVER_GPP_D19  403
#define  GPIO_VER6_SOC_M_DRIVER_GPP_D20  404
#define  GPIO_VER6_SOC_M_DRIVER_GPP_D21  405
#define  GPIO_VER6_SOC_M_DRIVER_GPP_D22  406
#define  GPIO_VER6_SOC_M_DRIVER_GPP_D23  407
#define  GPIO_VER6_SOC_M_DRIVER_BOOTHALT_B  408

#define  GPIO_VER6_SOC_M_DRIVER_VGPIO0  416
#define  GPIO_VER6_SOC_M_DRIVER_VGPIO4  417
#define  GPIO_VER6_SOC_M_DRIVER_VGPIO5  418
#define  GPIO_VER6_SOC_M_DRIVER_VGPIO6  419
#define  GPIO_VER6_SOC_M_DRIVER_VGPIO7  420
#define  GPIO_VER6_SOC_M_DRIVER_VGPIO8  421
#define  GPIO_VER6_SOC_M_DRIVER_VGPIO9  422
#define  GPIO_VER6_SOC_M_DRIVER_VGPIO10  423
#define  GPIO_VER6_SOC_M_DRIVER_VGPIO11  424
#define  GPIO_VER6_SOC_M_DRIVER_VGPIO12  425
#define  GPIO_VER6_SOC_M_DRIVER_VGPIO13  426
#define  GPIO_VER6_SOC_M_DRIVER_VGPIO18  427
#define  GPIO_VER6_SOC_M_DRIVER_VGPIO19  428
#define  GPIO_VER6_SOC_M_DRIVER_VGPIO20  429
#define  GPIO_VER6_SOC_M_DRIVER_VGPIO21  430
#define  GPIO_VER6_SOC_M_DRIVER_VGPIO22  431
#define  GPIO_VER6_SOC_M_DRIVER_VGPIO23  432
#define  GPIO_VER6_SOC_M_DRIVER_VGPIO24  433
#define  GPIO_VER6_SOC_M_DRIVER_VGPIO25  434
#define  GPIO_VER6_SOC_M_DRIVER_VGPIO30  435
#define  GPIO_VER6_SOC_M_DRIVER_VGPIO31  436
#define  GPIO_VER6_SOC_M_DRIVER_VGPIO32  437
#define  GPIO_VER6_SOC_M_DRIVER_VGPIO33  438
#define  GPIO_VER6_SOC_M_DRIVER_VGPIO34  439
#define  GPIO_VER6_SOC_M_DRIVER_VGPIO35  440
#define  GPIO_VER6_SOC_M_DRIVER_VGPIO36  441
#define  GPIO_VER6_SOC_M_DRIVER_VGPIO37  442
#define  GPIO_VER6_SOC_M_DRIVER_VGPIO40  443
#define  GPIO_VER6_SOC_M_DRIVER_VGPIO41  444
#define  GPIO_VER6_SOC_M_DRIVER_VGPIO42  445
#define  GPIO_VER6_SOC_M_DRIVER_VGPIO43  446
#define  GPIO_VER6_SOC_M_DRIVER_VGPIO44  447
#define  GPIO_VER6_SOC_M_DRIVER_VGPIO45  448
#define  GPIO_VER6_SOC_M_DRIVER_VGPIO46  449
#define  GPIO_VER6_SOC_M_DRIVER_VGPIO47  450


//
//  GPP_A
//
#define GPIO_VER6_SOC_S_DRIVER_GPP_A0              0

//
// VGPIO_0
//
#define GPIO_VER6_SOC_S_DRIVER_VGPIO_LPC_0         32

//
// GPP_C
//
#define GPIO_VER6_SOC_S_DRIVER_GPP_C0              64

//
// GPP_B
//
#define GPIO_VER6_SOC_S_DRIVER_GPP_B0              96

//
//
// VGPIO_3
#define GPIO_VER6_SOC_S_DRIVER_VGPIO_USB_0         128

//
//  GPP_D
//
#define GPIO_VER6_SOC_S_DRIVER_GPP_D0              160

//
// JTAG
//
#define GPIO_VER6_SOC_S_DRIVER_PECI                192

//
// vGPIO
//
#define GPIO_VER6_SOC_S_DRIVER_VGPIO_ISCLK0        224

#endif // _GPIO_ACPI_DEFINES_MTL_