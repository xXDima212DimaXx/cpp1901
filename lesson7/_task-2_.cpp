#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main (void)
{
    int finger = 0;
    cout << "Finger: ";
    cin >> finger;
    if (finger <= 0)
    {
        return 0;
    }

    if (finger == 1)
    {
        cout << "Большой" << endl;
        return 0;
    }
    if (finger == 2)
    {
        cout << "Указательный" << endl;
        return 0;
    }
    if (finger == 3)
    {
        cout << "Средний" << endl;
        return 0;
    }
    if (finger == 4)
    {
        cout << "Безымянный" << endl;
        return 0;
    }
    if (finger == 5)
    {
        cout << "Мизинец" << endl;
        return 0;
    }

    else
    {
        return 0;
    }
    return 0;
}