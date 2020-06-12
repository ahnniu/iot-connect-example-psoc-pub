#include "mbed.h"


// Blinking rate in milliseconds
#define BLINKING_RATE_MS     500


int main()
{
    // Initialise the digital pin LED1 as an output
    DigitalOut led(LED2);

    while (true) {
        led = !led;
        ThisThread::sleep_for(BLINKING_RATE_MS);
    }
}