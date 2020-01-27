#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char name[20];
    char addres[15];

    cout << "Enter your name: ";
    //cin.getline(name, 20);
    cin.get(name, 20).get();
    cout << "Enter your addres: ";
    cin.get(addres, 15);

    cout << "Your name is " << name << ", and your addres is " << addres << endl;
    return 0;
}