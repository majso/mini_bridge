#include "radio.h"
#include "pico/stdlib.h"
#include <stdio.h>

int main() {
    stdio_init_all();
    
    printf("Radio starting..\n");
    radio_init();

    printf("Hello, IoT world from RP2040!\n");

    SensorData received_data;

    while (1) {
        // Receive and display data
        radio_receive_data(&received_data);

        // Delay to avoid flooding the serial output
        sleep_ms(1000);
    }

    return 0;
}
