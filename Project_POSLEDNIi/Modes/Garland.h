//Интерфейс для различных режимов
#ifndef GARLAND_H
#define GARLAND_H

#include <array>    // Подключение библиотеки массивов
#include "IMode.h" // Подключение интерфейса

using tArrayModes = std::array<IMode*, 4>; // Передача массива из режима
class Garland
{
public:
  Garland(const tArrayModes& modes): _modes(modes) // Инициализация ссылки на массив режимов
  {

  }

  void UpdateCurrentMode() const
  {
     _modes[modeNumber]->Update(); // Обновляет состояние светодиодов в текущем режиме
  };

  void SwithNextMode()
  {
    if (modeNumber == (_modes.size()-1)) // Если номер режима = последнему режиму,
    {
      modeNumber = 0; // то номер режима скидываем в ноль и начинаем заново (гоняем по кругу режимы)
    }
    else // Иначе
    {
      modeNumber ++; // переключаемся на следующий режим
    }
    _modes[modeNumber]->Clear(); // Сброс всех светодиодов
  };

private:
   uint32_t modeNumber = 0;    // Счётчик режимов
   const tArrayModes& _modes;  // Массив из режимов
};
#endif