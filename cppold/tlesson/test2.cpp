#include <iostream>

using namespace std;

int main(void)
{
    unsigned long a = 2;
    for(int i = 0; i < 63; i++)
    {
        unsigned long b = a * 2;
        a = b;
        unsigned long c = b - 1;
        cout << c << endl;
    }
}