#include "rccregisters.hpp" // ��� ������ RCC
#include "gpiocregisters.hpp" // ������� ��� ����� �
int main()
{
  
  //������ ������������ �� ���� �
    RCC::AHB1ENR::GPIOCEN::Enable::Set();
  GPIOC::ODR::ODR5::High::Set();
  
  GPIOC::MODER::MODER5::Output::Set();
    GPIOC::MODER::MODER8::Output::Set();
    GPIOC::MODER::MODER9::Output::Set();
  
      //Delay(2000000);  
       GPIOC::ODR::ODR7::High::Set();
         GPIOC::ODR::ODR9::High::Set(); 
}
