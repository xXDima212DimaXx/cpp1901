#include <iostream>

using namespace std;

int main(void)
{
    unsigned long a = 2;
    int j;
    cout << "Enter int value 2 ~ 62: ";
    cin >> j;
    j--;
    if(j < 63)
    {
        for(int i = 0; i < j; i++)
        {
            unsigned long b = a * 2;
            cout << b << endl;
            a = b;
        }
    }
    else
    {
        cout << "Incorrect value: 2 ~ 62" << endl;
    }
}