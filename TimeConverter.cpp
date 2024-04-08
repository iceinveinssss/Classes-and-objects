#include "TimeConverter.h"

// Конструктор для инициализации объекта
TimeConverter::TimeConverter(int m, int s) : minutes(m), seconds(s) {}

// Метод формирования строки с информацией об объекте
std::string TimeConverter::toString() 
{
    return "Минут: " + std::to_string(minutes) + ", Секунд: " + std::to_string(seconds);
}

// Метод для вычисления общего количества секунд
int TimeConverter::totalSeconds() 
{
    return minutes * 60 + seconds;
}
