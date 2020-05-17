#include <iostream>

struct  DateStruct {
    int day;
    int month;
    int year;
};

void printDate(DateStruct &date) {
    std::cout << date.year << "/" << date.month << "/" << date.day << std::endl;
}

/***********************************************************/

class DateClass {
    public:
        int m_day;
        int m_month;
        int m_year;

        void print() {
            std::cout << m_year << "/" << m_month << "/" << m_day << std::endl;
        }
};

int main() {
    // DateStruct today {13, 10, 2019};
    // today.day = 20;
    // printDate(today);

    DateClass today {13, 10, 2019};
    today.m_day = 20;
    today.print();
    return 0;
}