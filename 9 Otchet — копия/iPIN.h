#ifndef IPIN_H
#define IPIN_H
#include "Togglable.h"

class IPin: public IPinToggable
{
public: 

  virtual void Reset() const=0; 
};

#endif