#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <ctime>
#include "condition.hpp"

using namespace std;

bool isEqual(double a, double b, double epsilon);

int main (void)
{
    cout.setf(ios::scientific);
    cout.precision(16);
    bool t = true;
    bool f = false;
    short a = 1;
    short b = 2;
    short c = 3;

    if ((a < b) && f || !t && c >= a)
    {
        cout << "condition - ";
    }

    // int x = a < b ? a : b;
    // cout << (a < b ? a : b)  << endl;

    double d1(100-99.99);   // 0.01
    double d2(10-9.99);     // 0.01

    if (d1 == d2)
    {
        cout << "d1 = d2" << endl;
    }
    else if (d1 > d2)
    {
        cout << "d1 > d2" << endl;
    }
    else if (d1 < d2)
    {
        cout << "d1 < d2" << endl;
    }

    cout << d1 << "\t"<< d2 << endl;

    double d = 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1;

    cout << boolalpha << (d == 1.0) << endl;

    cout << isEqual(d1, d2, 0.000000001) << endl;

    cout << "end" << endl;

    return 0;
}