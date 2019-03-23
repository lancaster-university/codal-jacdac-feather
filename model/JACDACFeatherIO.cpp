/*
The MIT License (MIT)

Copyright (c) 2017 Lancaster University.

Permission is hereby granted, free of charge, to any person obtaining a
copy of this software and associated documentation files (the "Software"),
to deal in the Software without restriction, including without limitation
the rights to use, copy, modify, merge, publish, distribute, sublicense,
and/or sell copies of the Software, and to permit persons to whom the
Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
DEALINGS IN THE SOFTWARE.
*/

/**
 * Class definition for MicroBit NEXT IO.
 * Represents a collection of all I/O pins on the device.
 */

#include "CodalConfig.h"
#include "JACDACFeatherIO.h"

using namespace codal;

/**
 * Constructor.
 *
 * Create a representation of all given I/O pins on the edge connector
 *
 * Accepts a sequence of unique ID's used to distinguish events raised
 * by MicroBitPin instances on the default EventModel.
 */
JACDACFeatherIO::JACDACFeatherIO()
    : a0(ID_PIN_PA0 + 0, PA_0, PIN_CAPABILITY_AD),
      a1(ID_PIN_PA0 + 1, PA_1, PIN_CAPABILITY_AD),
      a2(ID_PIN_PA0 + 2, PA_2, PIN_CAPABILITY_AD),
      a3(ID_PIN_PA0 + 3, PA_3, PIN_CAPABILITY_AD),
      a4(ID_PIN_PA0 + 4, PA_4, PIN_CAPABILITY_AD),
      a5(ID_PIN_PA0 + 5, PB_0, PIN_CAPABILITY_AD),
      sck(ID_PIN_PA0 + 6, PA_5, PIN_CAPABILITY_DIGITAL),
      mosi(ID_PIN_PA0 + 7, PA_7, PIN_CAPABILITY_DIGITAL),
      miso(ID_PIN_PA0 + 8, PA_6, PIN_CAPABILITY_DIGITAL),
      rx(ID_PIN_PA0 + 9, PA_10, PIN_CAPABILITY_DIGITAL),
      tx(ID_PIN_PA0 + 10, PA_9, PIN_CAPABILITY_DIGITAL),
      jacdac(ID_PIN_PA0 + 11, PB_10, PIN_CAPABILITY_DIGITAL),
      sda(ID_PIN_PA0 + 12, PB_7, PIN_CAPABILITY_DIGITAL),
      scl(ID_PIN_PA0 + 13, PB_6, PIN_CAPABILITY_DIGITAL),
      d5(ID_PIN_PA0 + 14, PB_3, PIN_CAPABILITY_DIGITAL),
      d6(ID_PIN_PA0 + 15, PB_4, PIN_CAPABILITY_DIGITAL),
      d9(ID_PIN_PA0 + 16, PA_15, PIN_CAPABILITY_DIGITAL),
      d10(ID_PIN_PA0 + 17, PB_9, PIN_CAPABILITY_DIGITAL),
      d11(ID_PIN_PA0 + 18, PB_5, PIN_CAPABILITY_DIGITAL),
      d12(ID_PIN_PA0 + 19, PB_11, PIN_CAPABILITY_DIGITAL),
      d13(ID_PIN_PA0 + 20, PB_13, PIN_CAPABILITY_DIGITAL),
      ledRed(d13),
      ledGreen(ID_PIN_PA0 + 21, PB_14, PIN_CAPABILITY_DIGITAL),
      ledBlue(ID_PIN_PA0 + 22, PB_15, PIN_CAPABILITY_DIGITAL),
      jacdacEn(ID_PIN_PA0 + 23, PB_8, PIN_CAPABILITY_DIGITAL),
      buttonA(ID_PIN_PA0 + 24, PB_12, PIN_CAPABILITY_DIGITAL)
{
}
