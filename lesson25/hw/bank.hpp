#ifndef BANK_HPP
#define BANK_HPP
#include <iostream>
#include <string>
#include <vector>
#include "date.hpp"
#include "email.hpp"
#include "work.hpp"
#include "money.hpp"
#include "credit.hpp"

typedef struct
{
    std::string name;
    std::string surname;
    std::string middlename;
    int age;
    date birthday;
    email mail;
    std::vector <std::string> property;
    std::string married;
    enum Children {
        CHILD_ZERO,
        CHILD_ONE,
        CHILD_TWO,
        CHILD_THREE,
        CHILD_FOUR,
        CHILD_FIVE,
    };
    work workplace;
    money income;
    credit creditsum;
} form;

#endif