#include "calculate.hpp"

Calculate::Calculate() {
    m_value = 0;
}

//void Calculate::add(int value) {
//    m_value += value;
//}

//void Calculate::sub(int value) {
//    m_value -= value;
//}

//void Calculate::multiply(int value) {
//    m_value *= value;
//}

int Calculate::getValue() {
    return m_value;
}

Calculate& Calculate::add(int value) {
    m_value += value;
    return *this;
}

Calculate& Calculate::sub(int value) {
    m_value -= value;
    return *this;
}

Calculate& Calculate::multiply(int value) {
    m_value *= value;
    return *this;
}
