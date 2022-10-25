#ifndef Blink_h
#define Blink_h

class Blink {

private:
    Blink(int pinNum);
    void now(void);

public:
    int _pin;
    int _timeBetweenOnOffmillis = 1000;

}

#endif Blink_h