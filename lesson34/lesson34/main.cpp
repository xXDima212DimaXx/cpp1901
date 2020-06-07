#include <iostream>
#include "circle.hpp"
#include "values.hpp"
#include "employee.hpp"
#include "something.hpp"

using namespace std;

int main()
{
//    Circle def;
//    def.print();

//    Circle black("black");
//    black.print();

//    Circle thirty(30.0);
//    thirty.print();

//    Circle blackThirty("black", 30.0);
//    blackThirty.print();

//    Values val;
//    val.print();

//    Values val2(10, 10, 10);
//    val2.print();

//    Values value(5.8);
//    value.print();

//    employee em1;
//    employee em2("Ivan");

    Something obj(1);
    std::cout << obj.getID() << "\n";

    Something *pObj = new Something(2);
    std::cout << pObj->getID() << "\n";
    delete pObj;
    return 0;
}
