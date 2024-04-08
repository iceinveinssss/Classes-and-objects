// main.cpp
#include <iostream>
#include "TimeConverter.h"

int main() 
{
    setlocale(0, "rus");
    int minutes, seconds;

    // Ввод значений пользователем
    std::cout << "Введите количество минут: ";
    std::cin >> minutes;
    std::cout << "Введите количество секунд: ";
    std::cin >> seconds;

    // Создание объекта
    TimeConverter timeConverter(minutes, seconds);

    // Вывод информации об объекте
    std::cout << timeConverter.toString() << std::endl;

    // Вывод общего количества секунд
    std::cout << "Общее количество секунд: " << timeConverter.totalSeconds() << std::endl;

    return 0;
}
