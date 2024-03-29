#include "SlideMode.h" // ����������� ������������� ������ �����

SlideMode::SlideMode(const tArrayLeds& leds): IMode(leds) // ������������ ���� ������� (�������) �� ���������� IMode
{
  Clear();  // ����� ����������� � ��������� ���������
}

void SlideMode::Update()  // ���������� ��������������� �������
{
  _leds[ledNumber]->Toggle(); // ������������ ���������� (�� ������) � ��������������� ���������
  if (ledNumber != (size(_leds) - 1 - ledNumber)) // ���� ������ ����������� �� �����������
  {
    _leds[size(_leds) - 1 - ledNumber]->Toggle(); // �� ����������� ��������� ���������� � ����� �� ���������������
  }

  if (!revers) // ���� ������ ���
  {
     if(ledNumber < ( ((size(_leds) + 1) / 2) -1 ) ) // ���� ������ ���������� �� ����� �� ��������
     {
        ledNumber ++ ; // �� ���������� ������ ����������
     }
     else
     {
       revers = true; // ����� ��� � �������� �������
     }
  }
  else  // ����� �������� ���
  {
     if(ledNumber > 0) // ���� ������ ���������� �� ������ ������ 0
     {
        ledNumber --; //  ��� � �������� ������� � �������� ������ ����������
     }
     else // �����
     {
       revers = false; // ��� ������ ������ ���������� ���� = 0, ��������� � ������ ���
     }
  }
}