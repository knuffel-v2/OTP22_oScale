/**
 * OTP-22 oScale Firmware
 * Copyright (c) 2020 Sebastian Oberschwendtner, sebastian.oberschwendtner@gmail.com
 *
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
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */
#ifndef ADC_H_
#define ADC_H_
// ****** Includes ******
#include "oScale.h"

// ****** Defines ******
// IOs
#define DDRADC      DDRD
#define PORTADC     PORTD
#define PINADC      PIND
#define ADC_CS      PD5
#define ADC_DATA    PD6
#define ADC_CLK     PD7


// ****** Functions ******
void            Task_ADC                (void);
void            adc_InitTask            (void);
unsigned int    adc_Sample              (void);
unsigned int    adc_GetValue            (void);
#endif