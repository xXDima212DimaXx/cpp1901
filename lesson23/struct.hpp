#ifndef STRUCT_HPP
#define STRUCT_HPP
#include <string>

typedef struct
{
    std::string name;
    int age;
    int height;
    int weigth;
    std::string country;
    bool married;
} person;

typedef struct
{
    std::string marka;
    int speed;
    char type;
} car;

#endif

//eof