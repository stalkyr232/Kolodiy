//��������� ��� ��������� �������
#ifndef IMODE_H
#define IMODE_H

#include <array>
#include "ILED.h"

using tArrayLeds = std::array<ILed*,4>; // ������ � Ledsconfig.h

class IMode
{
public: 
  
  IMode(const tArrayLeds& leds): _leds(leds)
  {
  
  }
  
  virtual void Update() const 
  {
     for(auto& it:_leds) 
     {
        it->Toggle();
     }
  };
  
  virtual void Clear() const 
  {
    for(auto& it:_leds) 
    {
       it->SwithOff();
    }
  };
protected:
   const tArrayLeds& _leds;
};

#endif