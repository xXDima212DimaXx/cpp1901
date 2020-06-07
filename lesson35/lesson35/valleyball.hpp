#ifndef VALLEYBALL_HPP
#define VALLEYBALL_HPP
#include "human.hpp"


class Valleyball : public Human
{
private:
    double m_gameAverage;
    int m_points;
public:
    Valleyball(const std::string &name = "", int age = 0, double gameAverage = 0.0, int points = 0);

    double getAverage() const;
    int getPoints() const;
};

#endif // VALLEYBALL_HPP
