#include "values.hpp"

Values::Values()
    : m_v1(2), m_v2(4), m_v3(5), m_arr{1, 1, 1, 1, 1}
{

}

Values::Values(int v1, int v2, int v3)
    : m_v1(v1), m_v2(v2), m_v3(v3), m_arr{1, 1, 1, 1, 1}
{

}

Values::Values(double v)
    : m_circle(v-1), m_arr{1, 1, 1, 1, 1}
{
    std::cout << "Values: " << v << "\n";
}

void Values::print() {
    std::cout << "Values(" << m_v1 << ", " << m_v2 << ", " << m_v3 << ")" << std::endl;
}
