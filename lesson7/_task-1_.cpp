#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main (void)
{
    cout << "Amout: ";
    int money = 0;
    cin >> money;

    if (money <= 0)
    {
        return 0;
    }
    if (money == 1)
    {
        cout << money << " Доллар" << endl;
        return 0;
    }
    if (money == 2)
    {
        cout << money << " Доллара" << endl;
        return 0;
    }
    if (money == 3)
    {
        cout << money << " Доллара" << endl;
        return 0;
    }
    if (money == 4)
    {
        cout << money << " Доллара" << endl;
        return 0;
    }
    if (money == 5)
    {
        cout << money << " Долларов" << endl;
        return 0;
    }
    if (money == 6)
    {
        cout << money << " Долларов" << endl;
        return 0;
    }
    if (money == 7)
    {
        cout << money << " Долларов" << endl;
        return 0;
    }
    if (money == 8)
    {
        cout << money << " Долларов" << endl;
        return 0;
    }
    if (money == 9)
    {
        cout << money << " Долларов" << endl;
        return 0;
    }
    if (money == 11)
    {
        cout << money << " Долларов" << endl;
        return 0;
    }
    if (money == 12)
    {
        cout << money << " Долларов" << endl;
        return 0;
    }
    if (money == 13)
    {
        cout << money << " Долларов" << endl;
        return 0;
    }
    if (money == 14)
    {
        cout << money << " Долларов" << endl;
        return 0;
    }
    if (money == 15)
    {
        cout << money << " Долларов" << endl;
        return 0;
    }
    if (money == 16)
    {
        cout << money << " Долларов" << endl;
        return 0;
    }
    if (money == 17)
    {
        cout << money << " Долларов" << endl;
        return 0;
    }
    if (money == 18)
    {
        cout << money << " Долларов" << endl;
        return 0;
    }
    if (money == 19)
    {
        cout << money << " Долларов" << endl;
        return 0;
    }

    else if (money % 10 == 0)
    {
        cout << money << " Долларов" << endl;
        return 0;
    }
    else if ((money-1) % 10 == 0)
    {
        cout << money << " Доллар" << endl;
        return 0;
    }
    else if ((money-2) % 10 == 0)
    {
        cout << money << " Доллара" << endl;
        return 0;
    }
    else if ((money-3) % 10 == 0)
    {
        cout << money << " Доллара" << endl;
        return 0;
    }
    else if ((money-4) % 10 == 0)
    {
        cout << money << " Доллара" << endl;
        return 0;
    }
    else
    {
        if (money > 9999)
        {
            return 0;
        }

        else
        {
            cout << money << " Долларов" << endl;
            return 0;
        }
    }
    return 0;
}