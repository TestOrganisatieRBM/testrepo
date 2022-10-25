#include "Blink.h"

Blink::Blink(int pinNum) {
    _pin = pinNum;
}

void Blink::now(void) {
    digitalWrite(_pin, HIGH);
}