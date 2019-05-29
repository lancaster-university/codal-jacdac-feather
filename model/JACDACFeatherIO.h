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

#ifndef JACDAC_FEATHER_IO_H
#define JACDAC_FEATHER_IO_H

#include "CodalConfig.h"
#include "ZPin.h"

//
// Unique Pin number for each pin (synonymous with mbedos PinName)
//


//
// Component IDs for each pin.
// The can be user defined, but uniquely identify a pin when using the eventing APIs/
//
#define ID_PIN_PA0           (DEVICE_ID_IO_P0 + 0)
#define ID_PIN_PB0           (DEVICE_ID_IO_P0 + 16)
#define ID_PIN_PC0           (DEVICE_ID_IO_P0 + 32)

namespace codal
{
    /**
     * Represents a collection of all I/O pins exposed by the device.
     */
    class JACDACFeatherIO
    {
        public:
            ZPin pins[0];
            // ZPin a0;
            // ZPin a1;
            // ZPin a2;
            // ZPin a3;
            // ZPin a4;
            // ZPin a5;
            // ZPin sck;
            // ZPin mosi;
            // ZPin miso;
            ZPin rx;
            ZPin tx;
            ZPin jacdac;
            // ZPin sda;
            // ZPin scl;
            // ZPin d5;
            // ZPin d6;
            // ZPin d9;
            // ZPin d10;
            // ZPin d11;
            // ZPin d12;
            // ZPin d13;

            ZPin ledRed;
            ZPin ledGreen;
            ZPin ledBlue;

            ZPin jacdacEn;
            ZPin buttonA;

            /**
             * Constructor.
             */
            JACDACFeatherIO();
    };
}

#endif
