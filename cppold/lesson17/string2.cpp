#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char name[15];
    cout << "What's your name? " << endl;
    cin >> name;
    cout << "Your name is " << name << endl;
    cout << "YOur name has " << strlen(name) << " symbols" << endl;
    cout << "and take " << strlen(name) * sizeof(char) << " bytes" << endl;
    cout << "----------------------------" << endl;
    cout << "array has lenght " << sizeof(name) << " elements" << endl;

    return 0;
}