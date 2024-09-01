#ifndef RADIO_H
#define RADIO_H

#include <stdbool.h>

typedef struct {
    float temperature;
    float pressure;
    float exterior_temperature;
    float exterior_humidity;
    float battery_voltage;
    float battery_current;
    float battery_power;
    float solar_voltage;
    float solar_current;
    float solar_power;
} SensorData;

// Initialize the radio module
void radio_init();

// Send sensor data using the radio module
void radio_send_data(const SensorData *data);
void radio_receive_data(SensorData *data);
void radio_switch_mode(bool is_transmitting);

#endif // RADIO_H
