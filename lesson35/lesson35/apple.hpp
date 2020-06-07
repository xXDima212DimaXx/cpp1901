#ifndef APPLE_HPP
#define APPLE_HPP
#include "fruit.hpp"

class Apple : public Fruit
{
private:
    double m_fiber;
public:
    Apple(std::string name, std::string color, double fiber);

    std::string getName();
    std::string getColor();
    double getFiber();
};

#endif // APPLE_HPP
