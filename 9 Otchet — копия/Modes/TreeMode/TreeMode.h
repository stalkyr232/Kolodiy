//������������ ���� ��� ������ "������"
#ifndef TREEMODE_H
#define TREEMODE_H

#include "IMode.h"
#include "ipin.h"

class TreeMode: public IMode
{
public: 
   TreeMode(const tArrayLeds& led) ;
   void Clear() const override ;
};
#endif