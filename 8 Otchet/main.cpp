#include "rccregisters.hpp" // Для модуля RCC
#include "gpiocregisters.hpp" // регистр для порта с
#include "gpioaregisters.hpp" // регистр для порта a
#include "pin.h"

#include "rccregisters.hpp" // Для модуля RCC
#include "gpiocregisters.hpp" // регистр для порта с
#include "gpioaregisters.hpp" // регистр для порта a







#include <iostream>
#include <array> // подключение библиотек для работы с массивами
// -------------------------Функция задержки-----------------------------------
int Delay(int value)
{
  for(int i = 0;i<value;++i)
  {
    volatile int j = i; 
  }
}
//------------------------------------------------------------------------------

int main()
{ 
  //Подать тактирование на порт С
  RCC::AHB1ENR::GPIOCEN::Enable::Set();

  //Порт С перевести в режим вывода (С.6 С.7 С.8 С.9 - линии светодиодов)
  GPIOC::MODER::MODER6::Output::Set();
  GPIOC::MODER::MODER7::Output::Set();
  GPIOC::MODER::MODER8::Output::Set();
  GPIOC::MODER::MODER9::Output::Set();

 //---------------------------Порт и номер порта--------------------------------
Led led1(pinC6);
Led led2(pinC7);
Led led3(pinC8);
Led led4(pinC9);



//------------------------------------------------------------------------------

    std::array<ILed*,4> leds = // массив из пинов
    { 
      &led1,
      &led2,
      &led3,
      &led4
    };

  for(;;)
  {
    for(auto &led:leds)
    {
      led->Toggle();
    }

    Delay(5000000);
  }

}
