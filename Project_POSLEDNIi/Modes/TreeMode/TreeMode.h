//������������ ���� ��� ������ "������"
#ifndef TREEMODE_H
#define TREEMODE_H

#include "IMode.h"
#include  "Iled.h"

class TreeMode: public IMode
{
public:
   TreeMode(const tArrayLeds& led) ; // �������� ������� �� �����������
   void Update() override ;  // ��������������� �������

private:
  uint32_t ledNumber = 0; // ������ ����������
};
#endif