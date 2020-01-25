#include <iostream>
#include <cstdlib>
#include <limits>
#include <ctime>
#include <cstring>
#include <cmath>

using namespace std;

int main(void) {
    char name[20];
    char address[15];

    cout << "Enter your name: ";
    // cin.get(name, 20);
    cin.get(name, 20).get();

    cout << "Enter your address: ";
    cin.get(address, 15);

    cout << "Your name is " << name << ", and your address is " << address << endl;
    return 0;
}