#include <iostream>

using namespace std;

void doPrint(void)
{
    int a = 4;
    cout << "doPrint(): " << a << endl;
}

int returnA(int a)
{
    cout << "returnA(): " << a << endl;
    return a;
}

int main(void)
{
    doPrint();
    int a = 0;
    cout << "main(): " << a << endl;
    a = returnA(6);
    cout << "main(): " << a << endl;
    doPrint();
    return 0;
}