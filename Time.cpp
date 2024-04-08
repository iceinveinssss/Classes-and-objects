#include "Time.h"
#include <iostream>

Time::Time() : hours(0), minutes(0), seconds(0) {}

Time::Time(int h, int m, int s) : hours(h), minutes(m), seconds(s) {}

Time::~Time() 
{
    std::cout << "Объект класса Time был уничтожен\n";
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
    return "Время: " + std::to_string(hours) + " часов " + std::to_string(minutes) + " минут " + std::to_string(seconds) + " секунд";
}
