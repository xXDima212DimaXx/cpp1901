#include <iostream>
#include <typeinfo>
#include <cstddef>

using namespace std;

void doAnything(nullptr_t ptr) {
    cout << "in doAnything()" << endl;
}

int main() {
    int a(5);

    /*cout << a << endl;
    cout << &a << endl;
    cout << *(&a) << endl;*/

    int number = 9;
    int *p_number = &number; // int pNumber // ptr_number // iPtr

    cout << &number << endl;
    cout << p_number << endl;
    cout << *p_number << endl;

    cout << typeid(a).name() << endl;
    cout << typeid(&a).name() << endl;
    cout << typeid(p_number).name() << endl;
    cout << typeid(*p_number).name() << endl;

    cout << sizeof(p_number) << endl;
    cout << sizeof(*p_number) << endl;

    // int *ptr1(0); // = 0
    // int *ptr2(NULL);
    int *ptr3 = nullptr; // C++ 11

    doAnything(nullptr);

    return 0;
}