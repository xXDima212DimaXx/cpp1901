#include "circle.hpp"

Circle::Circle()
{
    m_color = "Red";
    m_radius = 20.0;
}

Circle::Circle(std::string color)
{
    m_color = color;
}

Circle::Circle(double radius)
{
    m_radius = radius;
    std::cout << "radius: " << m_radius << std::endl;
}

Circle::Circle(std::string color, double radius)
{
    m_color = color;
    m_radius = radius;
}

void Circle::print() {
    std::cout << "color: " << m_color << ", radius: " << m_radius << std::endl;
}
