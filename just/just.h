/*
  just.h - Library for flashing just code.
  Created by David A. Mellis, November 2, 2007.
  Released into the public domain.
*/
#ifndef just_h
#define just_h

#include "Arduino.h"

class just
{
    public:
    just(int pin);
    void OU();
    void IN();
    void HI();
    void LO();
    void Seln();
    void Se();
  private:
    int _pin;
};

#endif

