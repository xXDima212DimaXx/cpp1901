#include <iostream>

using namespace std;

int main(void)
{
    int x = 3;
    int y = 5;

    cout << x+y << endl;

    string a = "The sum of";
    string b = " x and y is: ";
    cout << a << b << x+y << endl;

    bool t = 0;
    bool f = 0;
    bool ft = true;
    bool ft1 = bool(y);
    bool ft2 = x;

    // cin >> t;
    // cin >> f;

    cout << boolalpha << ft1 << " " << ft2 << endl;
    cout << noboolalpha << f  << " " << t << endl;
    // cout << ft << endl;
    return 0;
}