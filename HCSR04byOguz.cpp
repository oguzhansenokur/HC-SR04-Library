#include "HCSR04byOguz.h"

void Sensor::trigger(int t)
{
    pinMode(t,OUTPUT);
}
void Sensor::echo(int e)
{
    pinMode(e,INPUT);
}
double Sensor::uzaklikolc(double uzecho,double uztrigger)
{
   digitalWrite(uztrigger,HIGH);
   delayMicroseconds(10);
   digitalWrite(uztrigger,LOW);
  double sure=pulseIn(uzecho,HIGH);
  double mesafe=sure/2*0.0234;
  return mesafe;
}
