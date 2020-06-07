#include "human.hpp"

Human::Human(const std::string &name, int age)
    :m_name(name), m_age(age)
{

}

std::string Human::getName() const {
    return m_name;
}

int Human::getAge() const {
    return m_age;
}
