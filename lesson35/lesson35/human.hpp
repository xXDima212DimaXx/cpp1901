#ifndef HUMAN_HPP
#define HUMAN_HPP
#include <iostream>
#include <string>

class Human
{
public:
    std::string m_name;
    int m_age;

    Human(const std::string &name = "", int age = 0);

    std::string getName() const;
    int getAge() const;
};

#endif // HUMAN_HPP
