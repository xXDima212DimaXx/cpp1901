#include "employee.hpp"

Employee::Employee(int wage, long employeeID)
    :m_wage(wage), m_employeeID(employeeID)
{

}

void Employee::printNameAndWage() const {
    std::cout << m_name << ": " << m_wage << std::endl;
}
