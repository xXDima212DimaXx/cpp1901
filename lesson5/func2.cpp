#include <iostream>

using namespace std;

int returnInt()
{
    return -2147483647;
}

int main(void)
{
    cout << "start main()" << endl;

    // v1
    cout << returnInt() - 2 << endl;

    // v2
    int x = returnInt();
    cout << x << endl;

    cout << "end main()" << endl;

    return -2147483647;
    cout << "after return" << endl;
}