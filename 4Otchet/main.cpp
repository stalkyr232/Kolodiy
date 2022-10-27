#include "rccregisters.hpp" // Для модуля RCC
#include "gpiocregisters.hpp" // регистр для порта с
int main()
{
  
  //Подать тактирование на порт С
    RCC::AHB1ENR::GPIOCEN::Enable::Set();
  GPIOC::ODR::ODR5::High::Set();
  
  GPIOC::MODER::MODER5::Output::Set();
    GPIOC::MODER::MODER8::Output::Set();
    GPIOC::MODER::MODER9::Output::Set();
  
      //Delay(2000000);  
       GPIOC::ODR::ODR7::High::Set();
         GPIOC::ODR::ODR9::High::Set(); 
}
