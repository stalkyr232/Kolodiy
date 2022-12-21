//заголовочный файл для режима "Ёлочка"
#ifndef TREEMODE_H
#define TREEMODE_H

#include "IMode.h"
#include  "Iled.h"

class TreeMode: public IMode
{
public:
   TreeMode(const tArrayLeds& led) ; // Передача массива из светодиодав
   void Update() override ;  // Переопределение функции

private:
  uint32_t ledNumber = 0; // Индекс светодиода
};
#endif