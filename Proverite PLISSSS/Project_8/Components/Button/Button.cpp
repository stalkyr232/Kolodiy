#include "Button.h"


Button::Button(const IPinReadable& pin): _pin(pin)
{
  
}
// Кнопка нажата
   bool IsPressed() override 
  {
   _pin::High::IsSet()
  } 
