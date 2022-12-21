#include "rccregisters.hpp" // Для модуля RCC
#include "gpiocregisters.hpp" // регистр для порта с
#include "gpioaregisters.hpp" // регистр для порта a

#include "pinconfig.h" // подкючение привязанных пинов к портам МК
#include "LED.h"   // подключение заголовочного файла
#include  "Button.h" // для кнопки
#include "AllMode.h" // режим горят все
#include "ChessMode.h" // режим шахматы
#include "TreeMode.h" // режим ёлочка
#include "SlideMode.h" // режим горочка
#include "Garland.h" // гирлянда

#include <iostream> // подключение стандартной библиотеки С++
#include <array> // подключение библиотек для работы с массивами
// -------------------------Функция задержки-----------------------------------
void Delay(uint64_t value)
{
  for(uint64_t i = 0;i<value;++i)
  {
    volatile uint64_t j = i;
  }
}
//------------------------------------------------------------------------------

//-------Создание объектов (компонентов гирлянды) с привязкой к пинам-----------
Led led1(pinA5); // светодиод 1
Led led2(pinC9); // светодиод 2
Led led3(pinC8); // светодиод 3
//Led led4(pinC5); // светодиод 4
Button userButton1(pinC13); // кнопка
//------------------------------------------------------------------------------

//---------------------------------Массива из светодиодов-----------------------
    tArrayLeds leds =
    {
      &led1,
      &led2,
      &led3,
     // &led4,
    };
//------------------------------------------------------------------------------

//-------------Создание объектов (режимов) с массивом из светодиодов------------
  AllMode allMode(leds);
  ChessMode chessMode(leds);
  TreeMode treeMode(leds);
  SlideMode slideMode(leds);
//------------------------------------------------------------------------------

//----------------------------------Массив из режимов--------------------------
    using tArrayModes = std::array<IMode*,4>;
    tArrayModes modes =
    {
      &allMode,
      &chessMode,
      &treeMode,
      &slideMode,
    };
//------------------------------------------------------------------------------

//-------------Создание объекта (гирлянда) с привязкой к режимам----------------
  Garland garland(modes);
//------------------------------------------------------------------------------

int main()
{
  //Подать тактирование на порт С
  RCC::AHB1ENR::GPIOCEN::Enable::Set();
  RCC::AHB1ENR::GPIOAEN::Enable::Set();


  //Порт С перевести в режим вывода 
  GPIOC::MODER::MODER5::Output::Set();
  GPIOC::MODER::MODER8::Output::Set();
  GPIOC::MODER::MODER9::Output::Set();
  GPIOA::MODER::MODER5::Output::Set();

  for(;;)  // вечный цикл
  {
    if(userButton1.IsPressed()) // Если кнопка нажата
    {
      garland.SwithNextMode(); // Меняем режим
    }
    Delay(1000000);
    garland.UpdateCurrentMode(); // обновляем текущий режим светодиодов
  }
}