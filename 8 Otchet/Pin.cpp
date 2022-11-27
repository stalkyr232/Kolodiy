#include "pin.h"

Pin::Pin(std::uint8_t pinNumber):pinNum(pinNumber)
{
 
}

void Pin::Set()
{
  port::ODR::Set(1U << pinNum);
}

void Pin::Reset()
{
  auto value = GPIOC::ODR::Get();
  value &=~(1U << pinNum);
  port::ODR::Write(value);
} 

void Pin::Toggle()
{
  GPIOC::ODR::Toggle(1U << pinNum);
}