#ifndef Blink_h
#define Blink_h

class Blink {

public:
    Blink(int pinNum);
    void now(void);

private:
    int _pin;
    int _timeBetweenOnOffmillis = 1000;
}

#endif Blink_h