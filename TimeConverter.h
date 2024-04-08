#ifndef TIMECONVERTER_H
#define TIMECONVERTER_H

#include <string>

class TimeConverter {
private:
    int minutes;
    int seconds;

public:
    TimeConverter(int m, int s); // �����������
    std::string toString(); // ����� ������������ ������
    int totalSeconds(); // ����� ��� ���������� ������ ���������� ������
};

#endif
