#include <iostream>
using namespace std;

int main()
{
    char str[16] = "i write in c++";
    char str2[] = "and I like it";
    char _char = 'Q'; // ERROR -> "Q"
                      //          ~~~

    cout << _char << " " << (int)_char << endl;

    return 0;
}