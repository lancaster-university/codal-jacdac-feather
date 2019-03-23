#include "JACDACFeather.h"

JACDACFeather feather;

int blue_state = 0;

void toggle_blue(Event)
{
    feather.io.ledBlue.setDigitalValue(blue_state = !blue_state);
}

int main()
{
    feather.init();
    feather.messageBus.listen(feather.buttonA, DEVICE_BUTTON_EVT_CLICK, toggle_blue);

    int state = 0;

    while(1)
    {
        feather.io.ledRed.setDigitalValue(state);
        fiber_sleep(1000);
        state = !state;
    }
}
