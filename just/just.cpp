/*
  just.cpp - Library for flashing just code.
  Created by David A. Mellis, November 2, 2007.
  Released into the public domain.
*/

#include "Arduino.h"
#include "just.h"

just::just(int pin)
{
  pinMode(pin, OUTPUT);
  _pin = pin;
}

void just::OU()
{
    pinMode(_pin, OUTPUT);
}

void just::IN()
{
   pinMode(_pin, INPUT); 
}

void just::HI()
{
    digitalWrite(_pin, HIGH);
}

void just::LO()
{
  digitalWrite(_pin, LOW);  
}
