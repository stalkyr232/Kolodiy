#include "Button.h"


Button::Button(const IPinReadable& pin): _pin(pin)
{
  
}
// ������ ������
   bool IsPressed() override 
  {
   _pin::High::IsSet()
  } 
