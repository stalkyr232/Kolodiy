#ifndef  PINCONFIG_H
#define  PINCONFIG_H

#include "pin.h"
#include "Fake.h"

inline constexpr Pin<GPIOC, 6> pinC6;
inline constexpr Pin<GPIOC, 7> pinC7;
inline constexpr Pin<GPIOC, 8> pinC8;
inline constexpr Pin<GPIOC, 9> pinC9;

inline constexpr Fake fakepinC9;
#endif