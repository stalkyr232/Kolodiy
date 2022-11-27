#include "rccregisters.hpp" // Для модуля RCC
#include "gpiocregisters.hpp" // регистр для порта с
#include "gpioaregisters.hpp" // регистр для порта a
#include "pin.h"



#include <iostream>


int Delay(int value)
{
  for(int i = 0;i<value;++i)
  {
    volatile int j = i;
  }
}

int main()
{ 
  RCC::AHB1ENR::GPIOCEN::Enable::Set();

  GPIOA::MODER::MODER5::Output::Set();
  GPIOC::MODER::MODER5::Output::Set();
  GPIOC::MODER::MODER8::Output::Set(); 
  GPIOC::MODER::MODER9::Output::Set(); 
  
  Pin led1 (6);
  Pin led2 (7);
  Pin led3 (9);
  Pin led4 (8);

  for(;;)
  {
    led1.Toggle();
    led2.Toggle();
    led3.Toggle();
    led4.Toggle();
    Delay(5000000);
  }

}