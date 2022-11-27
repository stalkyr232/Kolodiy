#ifndef ILED_H
#define ILED_H
#include "iled.h"
#include "ipin.h"
class ILed
{
public: 
  virtual void SwithOff() const override; 
  virtual void Toggle() const override ; 
};

#endif