#include <iostream>

long long j = 9223372036854775807LL/2LL; // √лобальна€ переменна

int main()
{
  std::cout << j << std::endl; // ¬ывод половины от максимального значени€
  std::cout << sizeof(long long) << std::endl; // ќпределение количества байт, занимаемых типом
  std::cout << LLONG_MAX << std::endl; // ќпредеение максимального числа типа
}