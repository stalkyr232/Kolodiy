//��������� ��� ��������� �������
#ifndef GARLAND_H
#define GARLAND_H

#include <array>    // ����������� ���������� ��������
#include "IMode.h" // ����������� ����������

using tArrayModes = std::array<IMode*, 4>; // �������� ������� �� ������
class Garland
{
public:
  Garland(const tArrayModes& modes): _modes(modes) // ������������� ������ �� ������ �������
  {

  }

  void UpdateCurrentMode() const
  {
     _modes[modeNumber]->Update(); // ��������� ��������� ����������� � ������� ������
  };

  void SwithNextMode()
  {
    if (modeNumber == (_modes.size()-1)) // ���� ����� ������ = ���������� ������,
    {
      modeNumber = 0; // �� ����� ������ ��������� � ���� � �������� ������ (������ �� ����� ������)
    }
    else // �����
    {
      modeNumber ++; // ������������� �� ��������� �����
    }
    _modes[modeNumber]->Clear(); // ����� ���� �����������
  };

private:
   uint32_t modeNumber = 0;    // ������� �������
   const tArrayModes& _modes;  // ������ �� �������
};
#endif