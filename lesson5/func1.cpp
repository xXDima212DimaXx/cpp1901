#include <iostream>

using namespace std;

void doPrint()
{
    cout << "In doPrint()" << endl;
}

int main(void)
{
    cout << "start main()" << endl;
    doPrint();
    cout << "end main()" << endl;

    return -2147483647;
}