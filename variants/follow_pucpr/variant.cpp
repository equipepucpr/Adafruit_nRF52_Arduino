/*
  Copyright (c) 2014-2015 Arduino LLC.  All right reserved.
  Copyright (c) 2016 Sandeep Mistry All right reserved.
  Copyright (c) 2018, Adafruit Industries (adafruit.com)

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
  See the GNU Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/

#include "variant.h"
#include "wiring_constants.h"
#include "wiring_digital.h"
#include "nrf.h"

const uint32_t g_ADigitalPinMap[] =
{
  0, //D0
  6, //D1
  8, //D2
  9, //D3
  12, //D4
  13, //D5
  15, //D6
  17, //D7
  20, //D8
  22, //D9
  24, //D10
  26, //D11
  36, //D12
  38, //D13

  4, //D14 (A0)
  5, //D15 (A1)
  29, //D16 (A2)
  30, //D17 (A3)

  43, //D18 (LED1)
  34, //D19 (SWITCH1)
  10, //D20 (SWITCH2)

  41, //D21 (MISO)
  42, //D22 (MOSI)
  1, //D23 (SCK)
  7, //D24 (CSN_L)
  45, //D25 (CSN_R)

  3, //D26 (SDA)
  28, //D27 (SCL)

  2, //D28 (VBAT)
};

void initVariant()
{
  pinMode(PIN_LED1, OUTPUT);
  ledOff(PIN_LED1);
};

