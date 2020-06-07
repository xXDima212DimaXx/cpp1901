#include "apple.hpp"

Apple::Apple(std::string name, std::string color, double fiber)
    : Fruit(name, color), m_fiber(fiber)
{

}

std::string Apple::getName() {
    return Fruit::getName();
}

std::string Apple::getColor() {
    return Fruit::getColor();
}

double Apple::getFiber() {
    return m_fiber;
}
