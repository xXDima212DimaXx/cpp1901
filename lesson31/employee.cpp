#include <iostream>
#include <string>

class DateClass {
    public:
        int m_day;
        int m_month;
        int m_year;

        void print() {
            std::cout << m_year << "/" << m_month << "/" << m_day << std::endl;
        }
};

class Employee {
    public:
        std::string m_name;
        int m_id;
        double m_wage;
        DateClass today {13, 10, 2019};

        void print() {
            std::cout << "Name: " << m_name << "\n" << "ID: " << m_id << "\n" << "Wage: $" << m_wage << "\n" << std::endl;
        }

        void setName(std::string name) {
            m_name = name;
        }

        void setId(int id) {
            m_id = id;
        }
};

int main() {
    Employee john {"John", 5, 20.00};
    Employee ivan {"Ivan", 7, 70.00};

    john.print();
    std::cout << "" << std::endl;
    ivan.print();
    return 0;
}