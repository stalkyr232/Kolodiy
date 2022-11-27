#ifndef PIN_H
#define PIN_H

#include "gpiocregisters.hpp" 
#include <cinttypes> 

class Pin
{
public:
  Pin(std::uint8_t pinNumber);
  void Set();
  void Reset();
  void Toggle();
private:
  using port = GPIOC;
  std::uint8_t pinNum;

};



#endif