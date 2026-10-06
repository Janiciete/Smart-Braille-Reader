#include <Arduino.h>

// Arduino Uno LED Blink Test

void setup() {
  // Set the built-in LED pin as an output
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // Turn LED on
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000);  // Wait 1 second

  // Turn LED off
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);  // Wait 1 second
}