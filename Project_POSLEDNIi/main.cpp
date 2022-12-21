#include "rccregisters.hpp" // ��� ������ RCC
#include "gpiocregisters.hpp" // ������� ��� ����� �
#include "gpioaregisters.hpp" // ������� ��� ����� a

#include "pinconfig.h" // ���������� ����������� ����� � ������ ��
#include "LED.h"   // ����������� ������������� �����
#include  "Button.h" // ��� ������
#include "AllMode.h" // ����� ����� ���
#include "ChessMode.h" // ����� �������
#include "TreeMode.h" // ����� ������
#include "SlideMode.h" // ����� �������
#include "Garland.h" // ��������

#include <iostream> // ����������� ����������� ���������� �++
#include <array> // ����������� ��������� ��� ������ � ���������
// -------------------------������� ��������-----------------------------------
void Delay(uint64_t value)
{
  for(uint64_t i = 0;i<value;++i)
  {
    volatile uint64_t j = i;
  }
}
//------------------------------------------------------------------------------

//-------�������� �������� (����������� ��������) � ��������� � �����-----------
Led led1(pinA5); // ��������� 1
Led led2(pinC9); // ��������� 2
Led led3(pinC8); // ��������� 3
//Led led4(pinC5); // ��������� 4
Button userButton1(pinC13); // ������
//------------------------------------------------------------------------------

//---------------------------------������� �� �����������-----------------------
    tArrayLeds leds =
    {
      &led1,
      &led2,
      &led3,
     // &led4,
    };
//------------------------------------------------------------------------------

//-------------�������� �������� (�������) � �������� �� �����������------------
  AllMode allMode(leds);
  ChessMode chessMode(leds);
  TreeMode treeMode(leds);
  SlideMode slideMode(leds);
//------------------------------------------------------------------------------

//----------------------------------������ �� �������--------------------------
    using tArrayModes = std::array<IMode*,4>;
    tArrayModes modes =
    {
      &allMode,
      &chessMode,
      &treeMode,
      &slideMode,
    };
//------------------------------------------------------------------------------

//-------------�������� ������� (��������) � ��������� � �������----------------
  Garland garland(modes);
//------------------------------------------------------------------------------

int main()
{
  //������ ������������ �� ���� �
  RCC::AHB1ENR::GPIOCEN::Enable::Set();
  RCC::AHB1ENR::GPIOAEN::Enable::Set();


  //���� � ��������� � ����� ������ 
  GPIOC::MODER::MODER5::Output::Set();
  GPIOC::MODER::MODER8::Output::Set();
  GPIOC::MODER::MODER9::Output::Set();
  GPIOA::MODER::MODER5::Output::Set();

  for(;;)  // ������ ����
  {
    if(userButton1.IsPressed()) // ���� ������ ������
    {
      garland.SwithNextMode(); // ������ �����
    }
    Delay(1000000);
    garland.UpdateCurrentMode(); // ��������� ������� ����� �����������
  }
}