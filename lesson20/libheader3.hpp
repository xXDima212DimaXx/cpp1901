#pragma once
#include "libheader2.hpp"

int getLength();

int average (int speed, int count) {
    int ssumm = 0;
    for (int i = 0; i < count; i++) {
        ssumm += speed;
    }
    return ssumm/count;
}

int speed (int stime) {
    int length = getLength();
    std::cout << "___________________________" << std::endl;
    std::cout << "___________________________" << std::endl;
    std::cout << "Общая длина\t         = " << length << std::endl;
    std::cout << "Скорость\t            = " << length/stime << std::endl;
    return length/stime;
}