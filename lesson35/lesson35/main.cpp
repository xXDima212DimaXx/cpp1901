#include <iostream>
#include "calculate.hpp"
#include "valleyball.hpp"
#include "employee.hpp"
#include "Classes.hpp"
#include "apple.hpp"

int main()
{
/*    Calculate operation;
//    operation.add(10);
//    operation.sub(5);
//    operation.multiply(3);

    operation.add(10).sub(5).multiply(3).add(5);

    std::cout << operation.getValue() << std::endl;*/

//    Valleyball ivan;
//    ivan.m_name = "Ivan";

//    std::cout << ivan.getName() << std::endl;
//    Employee ivan(80, 73278);
//    ivan.m_name = "Ivan";
//    ivan.printNameAndWage();

//    std::cout << "Constructing A: \n";
//    A cA;
//    std::cout << "Constructing B: \n";
//    B cB;
//    std::cout << "Constructing C: \n";
//    C cC;
//    std::cout << "Constructing D: \n";
//    D cD;

    Valleyball ivan("Ivan", 33, 80, 7721);
//    std::cout << ivan.getName() << std::endl;
//    std::cout << ivan.getAge() << std::endl;
//    std::cout << ivan.getPoints() << std::endl;

    Apple apple("apple", "red", 3.5);
    std::cout << apple.getName() << ": " << apple.getColor() << ": " << apple.getFiber() << std::endl;

    return 0;
}
