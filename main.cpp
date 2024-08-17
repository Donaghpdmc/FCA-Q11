#include "mbed.h"

DigitalIn BlueButton (PC_13);
DigitalOut Led1 (LED1);
DigitalOut Led2 (LED2);


bool ButtonPress = false;

// main() runs in its own thread in the OS
int main()
{
    while (true) {

        if (BlueButton)
        {
        if (!ButtonPress)
        {
        Led1 = !Led1;
    

        ButtonPress = true;
        wait_us (10);
        }
        if (ButtonPress)
        {
        Led2 = !Led1;
    

        ButtonPress = true;
        wait_us (10);
        }
        }
        else { //button not pressed
        ButtonPress = false;
        }

    }
}