#include <Arduino.h>

#define ADC_PIN     8

void setup() {
    pinMode(ADC_PIN);
    Blink blink(ADC_PIN);    
}

void loop() {
    blink.now();
}