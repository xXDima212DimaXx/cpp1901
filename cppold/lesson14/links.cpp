#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    int x = 5;
    int* p_x = &x;

    cout << "x is " << x << endl;
    cout << "*x is no..." << endl;
    cout << "&x is " << &x << endl << endl;

    cout << "p_x is " << p_x << endl;
    cout << "*p_x is " << *p_x << endl;
    cout << "&p_x is " << &p_x << endl;


    return 0;
}