#include "Time.h"
#include <iostream>

int main() 
{
    setlocale(0, "rus");
    // �������� ������� �� ���������� �� ���������
    Time time1;
    std::cout << time1.toString() << std::endl;

    // �������� ������� � ���������� ����������
    int hours, minutes, seconds;
    std::cout << "������� ����: ";
    std::cin >> hours;
    std::cout << "������� ������: ";
    std::cin >> minutes;
    std::cout << "������� �������: ";
    std::cin >> seconds;

    Time time2(hours, minutes, seconds);
    std::cout << time2.toString() << std::endl;

    // ����������� ����� �� ��������
    std::cout << "����� �� ��������: " << time2.minutesToMidnight() << std::endl;

    // ���������� ������� �� 100 �����
    time2.increaseBy100Minutes();
    std::cout << "����� ���������� �� 100 �����: " << time2.toString() << std::endl;

    return 0;
}
