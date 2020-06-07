#ifndef FRUIT_HPP
#define FRUIT_HPP
#include <string>

class Fruit
{
private:
    std::string m_name;
    std::string m_color;
public:
    Fruit(const std::string &name = "", const std::string &color = "");
    std::string getName();
    std::string getColor();
};

#endif // FRUIT_HPP
