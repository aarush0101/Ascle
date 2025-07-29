#include "Arduino.h"
#include "main/constants.hpp"

// Setups the primary functions and settings required
// for the project.
void primarySetupChain()
{
    // Initialize Serial Communicator
    Serial.begin(BAUD_RATE);
    // Pin the status LED pin as output
    pinMode(STATUS_LED_PIN, OUTPUT);
    // Pin certain pins as outputs and inputs
    for (size_t i = 0; i < static_cast<size_t>(sizeof(OUTPUT_PINS) / sizeof(OUTPUT_PINS[0])); i++)
    {
        pinMode(OUTPUT_PINS[i], OUTPUT);
    }
    for (size_t i = 0; i < static_cast<size_t>(sizeof(INPUT_PINS) / sizeof(INPUT_PINS[0])); i++)
    {
        pinMode(INPUT_PINS[i], INPUT);
    }
}

// Primary setup function (Arduino standard)
void setup()
{
    primarySetupChain();
}

// Repeatedly called function (Arduino standard)
// This function is called in a loop after setup() has completed.
void loop()
{
    Serial.println("Hello, World!");    // Example output to Serial Monitor
    digitalWrite(STATUS_LED_PIN, HIGH); // Turn on the status LED
    delay(1000);                        // Wait for 1 second
    digitalWrite(STATUS_LED_PIN, LOW);  // Turn off the status LED
    delay(1000);                        // Wait for 1 second
}
