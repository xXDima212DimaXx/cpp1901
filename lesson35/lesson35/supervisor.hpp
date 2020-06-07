#ifndef SUPERVISOR_HPP
#define SUPERVISOR_HPP
#include "employee.hpp"

class Supervisor : public Employee
{
public:
    long m_overseesIds[5];
    Supervisor();
};

#endif // SUPERVISOR_HPP
