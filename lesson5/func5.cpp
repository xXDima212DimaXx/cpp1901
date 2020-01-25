#include <iostream>

using namespace std;

int add(int a, int b)
{
    return a + b;
}

int multiply(int c = 1, int d = 5)
{
    return c * d;
}

int main(void)
{
    /* cout << 3 + 7 << endl; */
    // cout << add(3, 7) << endl;
    cout << multiply(3, 7) << endl;
    cout << multiply(3) << endl;
    cout << multiply() << endl;
    return 0;
}