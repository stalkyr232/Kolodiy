#include "LED.h"


Led::Led(const IPin& pin): _pin(pin)
{
  
}
// �������� ���������
void Led::SwithOff() const
{
  _pin.Reset();
}

// ����������� ���������
void Led::Toggle() const
{
  _pin.Toggle();
}