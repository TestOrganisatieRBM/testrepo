#include "Blink.h"
//qsfdsfdsqf

Blink::Blink(int pinNum) {
    _pin = pinNum;
    _timeBetweenOnOffmillis = 1000;
}

void Blink::now(void) {
    digitalWrite(_pin, HIGH);
    delay(_timeBetweenOnOffmillis);
}