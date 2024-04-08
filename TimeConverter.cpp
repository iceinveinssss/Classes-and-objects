#include "TimeConverter.h"

// ����������� ��� ������������� �������
TimeConverter::TimeConverter(int m, int s) : minutes(m), seconds(s) {}

// ����� ������������ ������ � ����������� �� �������
std::string TimeConverter::toString() 
{
    return "�����: " + std::to_string(minutes) + ", ������: " + std::to_string(seconds);
}

// ����� ��� ���������� ������ ���������� ������
int TimeConverter::totalSeconds() 
{
    return minutes * 60 + seconds;
}
