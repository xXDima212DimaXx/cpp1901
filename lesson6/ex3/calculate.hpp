#ifndef CALCULATE_HPP
    #define CALCULATE_HPP
    #pragma once
    #include <iostream>
#endif

#ifdef PRINT
    std::cout << "Not print" << std::endl;
#endif

int add(int a, int b) {
    return a+b;
}
int fminus(int a, int b) {
    return a-b;
}
int multiple(int a, int b) {
    return a*b;
}
int divide(int a, int b) {
    return a/b;
}

// int add(int a, int b);
// int fminus(int a, int b);
// int multiple(int a, int b);
// int divide(int a, int b);
