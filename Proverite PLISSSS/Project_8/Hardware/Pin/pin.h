
#ifndef PIN_H //������ �� �������� ����������� ������������� �����
#define PIN_H //������ �� �������� ����������� ������������� �����

#include "gpiocregisters.hpp" 
#include <cinttypes> 

#include "ipin.h" // ����������� ����������
#include "IPinReadable.h" // ����������� ����������


template<typename TPort, int pinNum> // �������� �������� � ���� �����, ������ ����� ���� �������� ����� � ������ ����� (GPIOC, GPIO�)
class Pin: public IPin, IPinReadable // Pin - ����� ��������� (������������)
{ 
  public: 
  void Set() // 
  {
    TPort::ODR::Set(1U << pinNum);
  }
  
  void Reset() const override
  {
    auto value = TPort::ODR::Get();
    value &=~(1U << pinNum);
    TPort::ODR::Write(value);
  } 
  void Toggle() const override //override - ��������������� �������, ������� ���� � ����������� ������ ����������
  {
    TPort::ODR::Toggle(1U << pinNum);
  } 
  
};



#endif //������ �� �������� ����������� ������������� �����