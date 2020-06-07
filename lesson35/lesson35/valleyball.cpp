#include "valleyball.hpp"

Valleyball::Valleyball(const std::string &name, int age, double gameAverage, int points)
    : Human(name, age), m_gameAverage(gameAverage), m_points(points)
{

}

int Valleyball::getPoints() const {
    return m_points;
}

double Valleyball::getAverage() const {
    return m_gameAverage;
}
