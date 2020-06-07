#include "fruit.hpp"

Fruit::Fruit(const std::string &name, const std::string &color)
    : m_name(name), m_color(color)
{

}

std::string Fruit::getName() {
    return m_name;
}

std::string Fruit::getColor() {
    return m_color;
}
