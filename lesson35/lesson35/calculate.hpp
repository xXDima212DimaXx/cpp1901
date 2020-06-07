#ifndef CALCULATE_HPP
#define CALCULATE_HPP


class Calculate
{
private:
    int m_value;
public:
    Calculate();
//    void add(int value);
//    void sub(int value);
//    void multiply(int value);

    Calculate& add(int value);
    Calculate& sub(int value);
    Calculate& multiply(int value);

    int getValue();
};

#endif // CALCULATE_HPP
