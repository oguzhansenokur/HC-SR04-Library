



#ifndef hcsr04byoguzh
#define HCSR04byOguz.h
#include "Arduino.h"






class Sensor {

public:
    void trigger( int t);
    void echo (int e);
    double uzaklikolc(double uzecho,double uztrigger);
};

#endif
