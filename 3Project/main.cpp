#include <iostream>

long long j = 9223372036854775807LL/2LL; // ���������� ���������

int main()
{
  std::cout << j << std::endl; // ����� �������� �� ������������� ��������
  std::cout << sizeof(long long) << std::endl; // ����������� ���������� ����, ���������� �����
  std::cout << LLONG_MAX << std::endl; // ���������� ������������� ����� ����
}