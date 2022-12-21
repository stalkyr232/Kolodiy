#ifndef  PINCONFIG_H
#define  PINCONFIG_H

#include "pin.h"
// #include "Fake.h"

inline constexpr Pin<GPIOC, 5> pinC5;
inline constexpr Pin<GPIOC, 8> pinC8;
inline constexpr Pin<GPIOC, 9> pinC9;
inline constexpr Pin<GPIOA, 5> pinA5;

inline constexpr Pin<GPIOC, 13> pinC13; // кнопка

// inline constexpr Fake fakepinC9;
#endif