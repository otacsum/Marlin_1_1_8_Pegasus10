/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

/**
 * Custom Bitmap for splashscreen
 *
 * You may use one of the following tools to generate the C++ bitmap array from
 * a black and white image:
 *
 *  - http://www.marlinfw.org/tools/u8glib/converter.html
 *  - http://www.digole.com/tools/PicturetoC_Hex_converter.php
 */
#include <avr/pgmspace.h>

#define CUSTOM_BOOTSCREEN_TIMEOUT   2500
#define CUSTOM_BOOTSCREEN_BMPWIDTH  128
#define CUSTOM_BOOTSCREEN_BMPHEIGHT 64

const unsigned char custom_start_bmp[1024] PROGMEM = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x07, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x1f, 0xff, 0xf8, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x7f, 0xff, 0xfe, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0xff, 0x00, 0xff, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x01, 0xf8, 0x00, 0x1f, 0x80, 0x1e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x03, 0xf0, 0x00, 0x0f, 0xc0, 0x1e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x07, 0xc0, 0x08, 0x03, 0xe0, 0x7f, 0xe1, 0xf8, 0x00, 0x78, 0x3f, 0x1e, 0x1e, 0x1e, 0x78, 0x78, 
0x0f, 0x80, 0x0c, 0x01, 0xf0, 0x7f, 0xe1, 0xfe, 0x01, 0xf8, 0x7f, 0x1e, 0x1e, 0x1e, 0xfd, 0xfc, 
0x0f, 0x00, 0x0c, 0x00, 0xf0, 0x7f, 0xe1, 0xfe, 0x03, 0xf8, 0xff, 0x1e, 0x1e, 0x1f, 0xff, 0xfc, 
0x1f, 0x00, 0x1e, 0x00, 0xf8, 0x7f, 0xe1, 0xff, 0x07, 0xf9, 0xff, 0x1e, 0x1e, 0x1f, 0xff, 0xfe, 
0x1e, 0x00, 0x1f, 0x00, 0x78, 0x1e, 0x00, 0x0f, 0x0f, 0xc1, 0xf0, 0x1e, 0x1e, 0x1f, 0x1f, 0x3e, 
0x3c, 0x00, 0x1f, 0x80, 0x3c, 0x1e, 0x00, 0x07, 0x8f, 0x01, 0xe0, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 
0x3c, 0x00, 0x1f, 0x80, 0x3c, 0x1e, 0x00, 0x07, 0x9f, 0x01, 0xe0, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 
0x3c, 0x02, 0x3f, 0xe0, 0x3c, 0x1e, 0x00, 0x3f, 0x9e, 0x01, 0xf0, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 
0x78, 0x07, 0x3f, 0xf0, 0x1e, 0x1e, 0x00, 0xff, 0x9e, 0x00, 0xfc, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 
0x78, 0x0f, 0xbf, 0xff, 0x9e, 0x1e, 0x03, 0xff, 0x9e, 0x00, 0xfe, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 
0x78, 0x0f, 0xff, 0xff, 0xfe, 0x1e, 0x03, 0xe7, 0x9e, 0x00, 0x3e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 
0x78, 0x1f, 0xff, 0xff, 0xfe, 0x1e, 0x07, 0x87, 0x9e, 0x00, 0x1f, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 
0x78, 0x3f, 0xff, 0xff, 0xfe, 0x1e, 0x07, 0x87, 0x9f, 0x00, 0x0f, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 
0x78, 0x7f, 0xff, 0xff, 0xfe, 0x1e, 0x07, 0x87, 0x8f, 0x00, 0x0f, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 
0x79, 0xff, 0xff, 0xff, 0xfe, 0x1f, 0x07, 0xc7, 0x8f, 0xc0, 0x1f, 0x1e, 0x3e, 0x1e, 0x1e, 0x1e, 
0x7b, 0xff, 0xff, 0xff, 0xfe, 0x1f, 0xe7, 0xff, 0x87, 0xf9, 0xff, 0x1f, 0xfe, 0x1e, 0x1e, 0x1e, 
0x3f, 0xff, 0xff, 0xff, 0xfc, 0x0f, 0xe3, 0xff, 0x83, 0xf9, 0xfe, 0x0f, 0xfe, 0x1e, 0x1e, 0x1e, 
0x3f, 0xff, 0xff, 0xdf, 0xfc, 0x07, 0xe1, 0xff, 0x81, 0xf9, 0xfc, 0x0f, 0xde, 0x1e, 0x1e, 0x1e, 
0x3f, 0xff, 0xef, 0x8f, 0xfc, 0x03, 0xe0, 0x7f, 0x80, 0x79, 0xf8, 0x07, 0x9e, 0x1e, 0x1e, 0x1e, 
0x1f, 0xff, 0xc7, 0x03, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x1f, 0xff, 0x82, 0x00, 0x78, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x0f, 0xfe, 0x00, 0x00, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x0f, 0xe0, 0x00, 0x01, 0xf0, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x07, 0xc0, 0x00, 0x03, 0xe0, 0x00, 0x00, 0x20, 0x00, 0x00, 0x77, 0x10, 0x00, 0x00, 0x00, 0x00, 
0x03, 0xf0, 0x00, 0x0f, 0xc0, 0x00, 0x00, 0x20, 0x00, 0x00, 0x22, 0x10, 0x00, 0x00, 0x00, 0x00, 
0x01, 0xf8, 0x00, 0x1f, 0x80, 0xd2, 0x1c, 0x2e, 0x1e, 0x37, 0x14, 0x7f, 0x37, 0x1e, 0xd2, 0x3c, 
0x00, 0xff, 0x00, 0xff, 0x00, 0x6d, 0x22, 0x24, 0x21, 0x18, 0x08, 0x10, 0x18, 0x21, 0x6d, 0x42, 
0x00, 0x7f, 0xff, 0xfe, 0x00, 0x49, 0x1e, 0x38, 0x3f, 0x10, 0x08, 0x10, 0x10, 0x3f, 0x49, 0x7e, 
0x00, 0x1f, 0xff, 0xf8, 0x00, 0x49, 0x22, 0x28, 0x20, 0x10, 0x14, 0x10, 0x10, 0x20, 0x49, 0x40, 
0x00, 0x07, 0xff, 0xe0, 0x00, 0x49, 0x22, 0x24, 0x21, 0x10, 0x22, 0x10, 0x90, 0x21, 0x49, 0x42, 
0x00, 0x00, 0xff, 0x00, 0x00, 0xed, 0x9f, 0x67, 0x1e, 0x3e, 0x77, 0x0f, 0x3e, 0x1e, 0xed, 0xbc, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x01, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0xc3, 0x00, 0x01, 0x00, 0x00, 0x08, 0x00, 0x80, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0xc3, 0x00, 0x01, 0x00, 0x00, 0x38, 0x03, 0x80, 0x42, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0xa5, 0x1e, 0x2d, 0x25, 0xc0, 0x08, 0x00, 0x80, 0x42, 0x07, 0xb8, 0xf7, 0x00, 0x00, 
0x00, 0x00, 0xa5, 0x01, 0x31, 0x26, 0x20, 0x08, 0x00, 0x80, 0x42, 0x04, 0x44, 0x88, 0x80, 0x00, 
0x00, 0x00, 0xa5, 0x01, 0x21, 0x24, 0x20, 0x08, 0x00, 0x80, 0x3c, 0x04, 0x44, 0x88, 0x80, 0x00, 
0x00, 0x00, 0x99, 0x1f, 0x21, 0x24, 0x20, 0x08, 0x00, 0x80, 0x42, 0x04, 0x44, 0x88, 0x80, 0x00, 
0x00, 0x00, 0x99, 0x21, 0x21, 0x24, 0x20, 0x08, 0x00, 0x80, 0x42, 0x04, 0x44, 0x88, 0x80, 0x00, 
0x00, 0x00, 0x81, 0x21, 0x21, 0x24, 0x20, 0x08, 0x20, 0x82, 0x42, 0x24, 0x44, 0x88, 0x80, 0x00, 
0x00, 0x00, 0x81, 0x1f, 0x21, 0x24, 0x20, 0x3e, 0x23, 0xe2, 0x3c, 0x24, 0x44, 0x88, 0x80, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};
