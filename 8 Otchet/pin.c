#ifndef PIN_H
#define PIN_H
#include <cinttypes> 

class Pin()
{
Public:
  Void Set();
  Void Reset();
  Void Toggle();
Private:
  GPIOC port;
  std::uint8_t pinNum;

};


#endif 






