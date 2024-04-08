#ifndef TIMECONVERTER_H
#define TIMECONVERTER_H

#include <string>

class TimeConverter {
private:
    int minutes;
    int seconds;

public:
    TimeConverter(int m, int s); // Конструктор
    std::string toString(); // Метод формирования строки
    int totalSeconds(); // Метод для вычисления общего количества секунд
};

#endif
