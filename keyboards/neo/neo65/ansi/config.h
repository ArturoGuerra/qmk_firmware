/*
Copyright 2023 NEO

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#ifdef RGB_MATRIX_ENABLE
/* i2c setting */
#    define USE_I2CV1
#    define I2C1_SCL_PIN B6                   // 8 I2C1_SCL_PIN B6// //AT403
#    define I2C1_SDA_PIN B7                   // 9 I2C1_SDA_PIN B7//  //AT403
#    define I2C1_CLOCK_SPEED 400000           // AT403
#    define I2C1_DUTY_CYCLE FAST_DUTY_CYCLE_2 // AT403

/* RGB matrix */
#    define RGB_MATRIX_LED_COUNT 68

/* IS31FL3741 */
#    define IS31FL3741_I2C_ADDRESS_1 IS31FL3741_I2C_ADDRESS_GND

#endif
