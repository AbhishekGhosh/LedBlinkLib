#ifndef LEDBLINKLIB_H
#define LEDBLINKLIB_H
 
#include <Arduino.h>
 
class LedBlinkLib {
public:
        LedBlinkLib();
        ~LedBlinkLib();
        void on();
        void off();
        void blink(int time);
};
 
#endif
