#ifndef TIME_H
#define TIME_H

#include <string>

class Time {
private:
    int hours;
    int minutes;
    int seconds;

public:
    Time(); // Конструктор по умолчанию
    Time(int h, int m, int s); // Конструктор с параметрами
    ~Time(); // Деструктор

    int minutesToMidnight() const; // Количество минут до полуночи
    void increaseBy100Minutes(); // Увеличить на 100 минут
    std::string toString() const; // Строка с информацией об объекте
};

#endif
