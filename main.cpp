#include "Time.h"
#include <iostream>

int main() 
{
    setlocale(0, "rus");
    // Создание объекта со значениями по умолчанию
    Time time1;
    std::cout << time1.toString() << std::endl;

    // Создание объекта с введенными значениями
    int hours, minutes, seconds;
    std::cout << "Введите часы: ";
    std::cin >> hours;
    std::cout << "Введите минуты: ";
    std::cin >> minutes;
    std::cout << "Введите секунды: ";
    std::cin >> seconds;

    Time time2(hours, minutes, seconds);
    std::cout << time2.toString() << std::endl;

    // Определение минут до полуночи
    std::cout << "Минут до полуночи: " << time2.minutesToMidnight() << std::endl;

    // Увеличение времени на 100 минут
    time2.increaseBy100Minutes();
    std::cout << "После увеличения на 100 минут: " << time2.toString() << std::endl;

    return 0;
}
