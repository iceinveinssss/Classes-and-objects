#ifndef TIME_H
#define TIME_H

#include <string>

class Time {
private:
    int hours;
    int minutes;
    int seconds;

public:
    Time(); // ����������� �� ���������
    Time(int h, int m, int s); // ����������� � �����������
    ~Time(); // ����������

    int minutesToMidnight() const; // ���������� ����� �� ��������
    void increaseBy100Minutes(); // ��������� �� 100 �����
    std::string toString() const; // ������ � ����������� �� �������
};

#endif
