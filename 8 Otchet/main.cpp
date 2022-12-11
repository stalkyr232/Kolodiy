#include "rccregisters.hpp" // ��� ������ RCC
#include "gpiocregisters.hpp" // ������� ��� ����� �
#include "gpioaregisters.hpp" // ������� ��� ����� a
#include "pin.h"

#include "rccregisters.hpp" // ��� ������ RCC
#include "gpiocregisters.hpp" // ������� ��� ����� �
#include "gpioaregisters.hpp" // ������� ��� ����� a







#include <iostream>
#include <array> // ����������� ��������� ��� ������ � ���������
// -------------------------������� ��������-----------------------------------
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
  //������ ������������ �� ���� �
  RCC::AHB1ENR::GPIOCEN::Enable::Set();

  //���� � ��������� � ����� ������ (�.6 �.7 �.8 �.9 - ����� �����������)
  GPIOC::MODER::MODER6::Output::Set();
  GPIOC::MODER::MODER7::Output::Set();
  GPIOC::MODER::MODER8::Output::Set();
  GPIOC::MODER::MODER9::Output::Set();

 //---------------------------���� � ����� �����--------------------------------
Led led1(pinC6);
Led led2(pinC7);
Led led3(pinC8);
Led led4(pinC9);



//------------------------------------------------------------------------------

    std::array<ILed*,4> leds = // ������ �� �����
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
