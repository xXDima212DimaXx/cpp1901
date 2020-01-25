#include <iostream>
#include <cstdlib>
#include <limits>
#include <ctime>
#include <cstring>
#include <cmath>

using namespace std;

int main(void) {
    char name[20];
    int age = 0;

    cout << "Enter your name: ";
    cin.getline(name, 20);

    cout << "Enter your age: ";
    cin >> age;

    cout << "Your name is " << name << ", and your age is " << age << " years old." << endl;
    return 0;
}