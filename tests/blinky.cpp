#include "JACDACFeather.h"

JACDACFeather feather;

int main()
{
    feather.init();

    int state = 0;

    while(1)
    {
        feather.io.ledRed.setDigitalValue(state);
        feather.io.ledGreen.setDigitalValue(state);
        feather.io.ledBlue.setDigitalValue(state);
        fiber_sleep(1000);
        state = !state;
    }
}
