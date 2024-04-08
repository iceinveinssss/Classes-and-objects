#include "Time.h"
#include <iostream>

Time::Time() : hours(0), minutes(0), seconds(0) {}

Time::Time(int h, int m, int s) : hours(h), minutes(m), seconds(s) {}

Time::~Time() 
{
    std::cout << "������ ������ Time ��� ���������\n";
}

int Time::minutesToMidnight() const 
{
    return (23 - hours) * 60 + (59 - minutes) + (seconds > 0 ? 1 : 0);
}

void Time::increaseBy100Minutes() 
{
    minutes += 100;
    hours += minutes / 60;
    minutes %= 60;
    hours %= 24;
}

std::string Time::toString() const 
{
    return "�����: " + std::to_string(hours) + " ����� " + std::to_string(minutes) + " ����� " + std::to_string(seconds) + " ������";
}
