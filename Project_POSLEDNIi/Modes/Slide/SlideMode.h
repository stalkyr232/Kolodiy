//������������ ���� ��� ������ "�����"
#ifndef SLIDEMODE_H
#define SLIDEMODE_H

#include "IMode.h" // ����������� ��������� IMode
#include  "ILED.h" // ����������� ���������� LED

class SlideMode: public IMode // ������������ ������ ����� �� ���������� IMode
{
public:
   SlideMode(const tArrayLeds& led) ; // �������� ����������� � ����� �����
   void Update() override ;

private:
  uint32_t ledNumber = 0;  //  ������ ����������
  bool revers = false;    // ����, ���������� �� ������ � �������� ��������� �����������
};
#endif