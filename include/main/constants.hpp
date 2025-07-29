#include "Arduino.h"

// The rate at which the serial communication operates
const int BAUD_RATE = 9600;

// The pin number for the status LED
// Usually 13 to indicate the in board LED as well as the 
// 13 pin on the Arduino Uno and similar boards
const int STATUS_LED_PIN = 13;

// The beats to beat at to indicate an exception
const int exceptionBeatRate[] = { 100, 800, 300 };

// The beats to beat at to indicate a warning
const int warningBeatRate[] = { 200, 400, 200 };

// The beats to beat at to indicate a success
const int successBeatRate[] = { 100, 100, 100 };

// Pins that should be pinned as outputs
const int OUTPUT_PINS[] = { 14, 15 };

// Pins that should be pinned as inputs
const int INPUT_PINS[] = { 16, 17 };