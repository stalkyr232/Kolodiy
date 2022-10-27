#include "rccregisters.hpp" // Для модуля RCC
#include "gpiocregisters.hpp" // регистр для порта с
#include "rccregisters.hpp" // for RCC
#include "gpioaregisters.hpp" // for GPIOA
#include "gpiocregisters.hpp" // for GPIOС
std::uint32_t SystemCoreClock = 16'000'000U;

void Delay(int zaderjka)
{
  for (int i=0; i<zaderjka;++i)
  {
    //Тут что-то написано
    volatile int j = i; // без оптимизации, выполняет код просто так как он есть, для того чтобы работала задержка
    // если включить оптимизацию на полную и закоментить volatile, то светодиоды оба горят
    // с volatile моргают на 
  }
  
}

int main()
{
  
  //Подать тактирование на порт С
    RCC::AHB1ENR::GPIOCEN::Enable::Set();

  
  GPIOC::MODER::MODER5::Output::Set();
    GPIOC::MODER::MODER8::Output::Set();
    GPIOC::MODER::MODER9::Output::Set();
  //8555555555555555555555555555555555555555555
      GPIOC::ODR::ODR5::High::Set();
     Delay(2000000);  
       GPIOC::ODR::ODR7::High::Set();
       Delay(2000000);  
         GPIOC::ODR::ODR9::High::Set(); 
         Delay(2000000); 
          GPIOC::ODR::ODR5::Low::Set(); 
           Delay(2000000); 
          GPIOC::ODR::ODR7::Low::Set(); 
          Delay(2000000); 
          GPIOC::ODR::ODR9::Low::Set(); 
          
}
