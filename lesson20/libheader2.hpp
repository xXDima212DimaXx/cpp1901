#pragma once
#include "libheader1.hpp"

int getLength() {
    int counter = getRand(15, 20);
    int lengths[counter];
    int sum = 0;

    std::cout << "Отчет работы программы=>" << std::endl;
    std::cout << "___________________________" << std::endl;
    std::cout << "Количество отрезков\t = " << counter << std::endl;
    std::cout << "___________________________" << std::endl;

    for (int i = 0; i < counter; i++) {
        lengths[i] = getRand(31, 39);
        std::cout << "Отрезок[" << (i+1) << "]          = " << lengths[i] << std::endl;
        sum += lengths[i];
    }

    return sum;
}