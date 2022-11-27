#ifndef  BUTTON_H
#define  BUTTON_H

#include "IButton.h"


class Button : public IButton
{
public: 
   bool IsPressed() override; 
  

private:
    const IPinReadable& _pin; 
};

#endif