#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char name[15];
    int age = 0;

    cout << "Enter your name: ";
    cin.getline(name, 15);
    cout << "Enter your age: ";
    cin >> age;

    cout << "Your name is " << name << ", and your age is " << age << endl;
    return 0;
}