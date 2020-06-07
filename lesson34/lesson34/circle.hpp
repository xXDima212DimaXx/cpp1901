#include <iostream>
#include <string>
#ifndef CIRCLE_HPP
#define CIRCLE_HPP


class Circle
{
private:
    std::string m_color = "Red";
    double m_radius = 20.0;
public:
    Circle();
    Circle(std::string color);
    Circle(double radius);
    Circle(std::string color, double radius);
    void print();

//    void setColor(std::string color) {
//        m_color = color;
//    }

//    void setRadius(double radius) {
//        m_radius = radius;
//    }

//    void setColorAndRadius(std::string color, double radius) {
//        setColor(color);
//        setRadius(radius);
//    }
};

#endif // CIRCLE_HPP
