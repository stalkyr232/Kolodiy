//заголовочный файл для режима "Горка"
#ifndef SLIDEMODE_H
#define SLIDEMODE_H

#include "IMode.h" // Подключение инерфейса IMode
#include  "ILED.h" // Подключение интерфейса LED

class SlideMode: public IMode // Наследование режима горки от интерфейса IMode
{
public:
   SlideMode(const tArrayLeds& led) ; // передача светодиодов в режим горки
   void Update() override ;

private:
  uint32_t ledNumber = 0;  //  индекс светодиода
  bool revers = false;    // Флаг, отвечающий за прямое и обратное зажигание светодиодов
};
#endif