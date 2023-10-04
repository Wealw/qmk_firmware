/* Copyright 2021 Gopolar
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "quantum.h"

#define ANIM_SIZE 525  // number of bytes in array, minimize for adequate firmware size, max is 1024

void render_logo(void) {
    static const char PROGMEM gopolar[][ANIM_SIZE] = {
        {
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xc0, 0xe0, 0xf0, 0xf0, 0xf8, 0x78, 0x78,
        0x38, 0x3c, 0x3c, 0x3c, 0x3c, 0x38, 0xf8, 0xf8, 0xf8, 0xf0, 0x78, 0x3c, 0x1e, 0x0f, 0x07, 0x03,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xc0, 0xc0, 0xc0, 0xe0, 0xe0, 0xe0,
        0xe0, 0xe0, 0xc0, 0xc0, 0xc0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0xc0, 0xc0, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0xfe, 0xff, 0xff, 0x0f, 0x07, 0x01, 0x00, 0xe0, 0xf0, 0xf8,
        0xf8, 0xfc, 0xfc, 0x3c, 0x1e, 0x8f, 0xc7, 0xe3, 0xe1, 0x00, 0x00, 0x07, 0x1f, 0xff, 0xff, 0xfc,
        0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0xfe, 0xff, 0x0f, 0x03, 0x01, 0x01, 0x00, 0xe0, 0xe0,
        0xe0, 0xe0, 0xe1, 0xe1, 0xe3, 0xe7, 0xe7, 0xe6, 0x00, 0x80, 0xe0, 0xf0, 0x70, 0x38, 0x38, 0x38,
        0x38, 0x70, 0xf0, 0xe0, 0x80, 0x00, 0xc0, 0xe0, 0xf0, 0x70, 0x38, 0x38, 0x38, 0x38, 0x38, 0x70,
        0xf0, 0xe0, 0xc0, 0x00, 0x80, 0xe0, 0xf0, 0x70, 0x38, 0x38, 0x38, 0x38, 0x70, 0xf0, 0xe0, 0x80,
        0x00, 0xff, 0xff, 0xff, 0x00, 0xc0, 0xe0, 0xf0, 0x70, 0x38, 0x38, 0x38, 0x38, 0x38, 0x70, 0xf0,
        0xe0, 0xc0, 0x00, 0xf8, 0xf8, 0xf8, 0xf0, 0x70, 0x38, 0x38, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x3f, 0x7f, 0xff, 0xf8, 0x60, 0x00, 0x00, 0x07, 0x0f, 0x1f,
        0x1f, 0x3f, 0x3f, 0x3f, 0x3f, 0x1f, 0x1f, 0x0f, 0x07, 0x80, 0xc0, 0xe0, 0xf8, 0xff, 0x7f, 0x3f,
        0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x07, 0x0f, 0x1f, 0x3c, 0x38, 0x38, 0x70, 0x70, 0x70,
        0x70, 0x70, 0x38, 0x38, 0x3c, 0x1f, 0x0f, 0x07, 0x00, 0x07, 0x1f, 0x3f, 0x38, 0x70, 0x70, 0x70,
        0x70, 0x38, 0x3f, 0x1f, 0x07, 0x00, 0xff, 0xff, 0xff, 0x00, 0x60, 0x60, 0x60, 0x60, 0x70, 0x78,
        0x3f, 0x1f, 0x0f, 0x00, 0x07, 0x1f, 0x3f, 0x38, 0x70, 0x70, 0x70, 0x70, 0x38, 0x3f, 0x1f, 0x07,
        0x00, 0x7f, 0x7f, 0x7f, 0x00, 0x0f, 0x3f, 0x7f, 0x78, 0x70, 0x60, 0x60, 0x60, 0x60, 0x00, 0x7f,
        0x7f, 0x7f, 0x00, 0x7f, 0x7f, 0x7f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xe0, 0xf0, 0x78, 0x3c, 0x1e, 0x0f, 0x0f, 0x1e, 0x1e,
        0x1e, 0x1e, 0x1c, 0x1c, 0x1e, 0x1e, 0x1e, 0x1e, 0x0f, 0x0f, 0x07, 0x07, 0x03, 0x01, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x0f, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
        }
    };

    oled_write_raw_P(gopolar[0], ANIM_SIZE);
}
