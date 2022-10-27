#include "rccregisters.hpp" // ��� ������ RCC
#include "gpiocregisters.hpp" // ������� ��� ����� �
#include "rccregisters.hpp" // for RCC
#include "gpioaregisters.hpp" // for GPIOA
#include "gpiocregisters.hpp" // for GPIO�
std::uint32_t SystemCoreClock = 16'000'000U;

void Delay(int zaderjka)
{
  for (int i=0; i<zaderjka;++i)
  {
    //��� ���-�� ��������
    volatile int j = i; // ��� �����������, ��������� ��� ������ ��� ��� �� ����, ��� ���� ����� �������� ��������
    // ���� �������� ����������� �� ������ � ����������� volatile, �� ���������� ��� �����
    // � volatile ������� �� 
  }
  
}

int main()
{
  
  //������ ������������ �� ���� �
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
