#pragma once
#include "libheader2.hpp"

int speed (int stime) {
    int length = getLength();
    std::cout << "___________________________" << std::endl;
    std::cout << "___________________________" << std::endl;
    std::cout << "Общая длина\t         = " << length << std::endl;
    std::cout << "Скорость\t            = " << length/stime << std::endl;
    return length/stime;
}