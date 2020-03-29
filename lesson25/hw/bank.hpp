#ifndef BANK_HPP
#define BANK_HPP
#include <string>
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
    date birthday;
    email emailaddress;

    bool married;

    work workplace;
    money income;
    credit creditsum;
} form;

#endif