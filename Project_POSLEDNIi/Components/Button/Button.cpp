#include "Button.h"


Button::Button(const IPinReadable& pin): _pin(pin)
{
  
}
// ������ ������
   bool Button::IsPressed() const 
  {   
    if( !_pin.IsHigh() )  // ���� ������ �� ������ 
    {
        while (!_pin.IsHigh()) // ���� � ����-�� ������ ������� ������ ��������, �� ����� ������
        {
           volatile int a = 1;
        } 
        return true;
    }
    return false;

  } 
