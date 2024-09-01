#include "radio.h"
#include "pico/stdlib.h"

int main() {
    stdio_init_all();
    
    // Initialize the radio module
    radio_init();
    
    SensorData received_data;

    while (1) {
        // Receive and display data
        radio_receive_data(&received_data);

        // Delay to avoid flooding the serial output
        sleep_ms(1000);
    }

    return 0;
}
