#include "rccregisters.hpp" // ��� ������ RCC
#include "gpiocregisters.hpp" // ������� ��� ����� �
#include "gpioaregisters.hpp" // ������� ��� ����� a
#include "gpiodregisters.hpp" // ������� ��� ����� d
#include "gpiobregisters.hpp" // ������� ��� ����� b
#include "pinconfig.h"
#include "LED.h"   // ����������� ������������� �����
#include  "Button.h" // ��� ������
#include "AllMode.h" // ����� ����� ���
#include "ChessMode.h" // ����� �������
#include "TreeMode.h" // ����� ������
#include "Garland.h" // ��������


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
//-------------�������� �������� (�����������) � ��������� � �����--------------

Led led1(pinC6); 
Led led2(pinC7);
Led led3(pinC8);
Led led4(pinC9);
Button userButton1(pinC13);

//  Led led5(fakepinC9);
//------------------------------------------------------------------------------

//----------------------------------������ �� �����������-----------------------
   
    tArrayLeds leds =
    { 
      &led1,
      &led2,
      &led3,
      &led4,
    };
//------------------------------------------------------------------------------
    
//-------------�������� �������� (�������) � �������� �� �����������------------  
  AllMode allMode(leds); 
  ChessMode chessMode(leds);
//------------------------------------------------------------------------------  
  
//----------------------------------������ �� �������--------------------------
    using tArrayModes = std::array<IMode*,2>;
    tArrayModes modes =
    { 
      &allMode,
      &chessMode,

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

  //���� � ��������� � ����� ������ (�.6 �.7 �.8 �.9 - ����� �����������)
  GPIOC::MODER::MODER5::Output::Set();
  GPIOC::MODER::MODER8::Output::Set();
  GPIOC::MODER::MODER9::Output::Set();
  GPIOA::MODER::MODER5::Output::Set();
  
    
 //---------------------------���� � ����� �����--------------------------------


  //std::uint32_t modeNumber = 0;
  for(;;)  
  {
    Delay(100000); 
    if(userButton1.IsPressed())
    { 
      garland.SwithNextMode();
    }
    Delay(1000000);    
    garland.UpdateCurrentMode();
  }
  
}