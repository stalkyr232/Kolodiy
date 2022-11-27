#ifndef  LED_H
#define  LED_H

#include "ILED.h"
#include "ipin.h"


class Led : public ILed
{
public: 
   Led(const IPin& pin) ; 
   
//----------����������������, �.�. ��� ��� ���� � ����������--------------------
   void SwithOff() const override; 
   void Toggle() const override; 
//------------------------------------------------------------------------------  
   
private:
    const IPin& _pin; 
};

#endif