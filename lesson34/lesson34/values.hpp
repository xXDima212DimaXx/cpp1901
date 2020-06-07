#include <iostream>
#include <string>
#include "circle.hpp"
#ifndef VALUES_HPP
#define VALUES_HPP


class Values
{
public:
    Values();
    Values(int v1, int v2, int v3);
    Values(double v);
    int m_v1;
    int m_v2;
    int m_v3;
    const int m_arr[5];
    Circle m_circle;
    void print();
};

#endif // VALUES_HPP
