#include <iostream>
#include <string>
#ifndef EMPLOYEE_HPP
#define EMPLOYEE_HPP


class employee
{
private:
    int m_id;
    std::string m_name;
public:
    employee(int id = 0, const std::string &name = "");
    employee(const std::string &name);
};

#endif // EMPLOYEE_HPP
