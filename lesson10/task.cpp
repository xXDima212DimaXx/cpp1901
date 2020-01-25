#include <iostream>

using namespace std;

int main (void)
{
    int a = 1;
    int b = 0;
    int c = 1;
    int d = 0;

    cout << boolalpha << (a || !b && !c || b >= c && !d) << endl;

    return 0;
}