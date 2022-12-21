#include "TreeMode.h"

TreeMode::TreeMode(const tArrayLeds& leds): IMode(leds)
{
  Clear();  // ����� ��� ������ ���� ����������� � 0 � ��������� ������ ����������� �� ������ �����
}

void TreeMode::Update()
{
  _leds[ledNumber]->Toggle();  // ����������� ��������� �� ��������������� ���������
  if(ledNumber == (size(_leds)-1)) // ���� ����� �� ����� ������� �����������
  {
      ledNumber = 0; // �� �������� � ������
  }
  else
  {
      ledNumber++; // ����� ��������� � ���������� ����������
  }
}