#pragma once
#include "libheader1.hpp"

int getRand(int min, int max);

int getLength() {
    int counter = getRand(15, 20);

    std::cout << "Отчет работы программы=>" << std::endl;
    std::cout << "___________________________" << std::endl;
    std::cout << "Количество отрезков\t = " << counter << std::endl;
    std::cout << "___________________________" << std::endl;

    int lengths[counter];
    for (int i = 0; i < counter; i++) {
        lengths[i] = getRand(31, 39);
        std::cout << "Отрезок[" << (i+1) << "]          = " << lengths[i] << std::endl;
    }

    int sum = 0;

    for (int i = 0; i < counter; i++) {
        sum += lengths[i];
    }

    return sum;
}