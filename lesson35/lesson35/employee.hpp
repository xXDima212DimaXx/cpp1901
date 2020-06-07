#ifndef EMPLOYEE_HPP
#define EMPLOYEE_HPP
#include "human.hpp"

class Employee : public Human
{
public:
    int m_wage;
    long m_employeeID;

    Employee(int wage = 0, long employeeID = 0);
    void printNameAndWage() const;
};

#endif // EMPLOYEE_HPP
