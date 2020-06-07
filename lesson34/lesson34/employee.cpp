#include "employee.hpp"

employee::employee(int id, const std::string &name)
     :m_id(id), m_name(name)
{
    std::cout << "Employee: " << m_name << " created.\n";
}

employee::employee(const std::string &name)
    : employee(0, name)
{
//    std::cout << "Employee: " << m_name << " created.\n";
}
