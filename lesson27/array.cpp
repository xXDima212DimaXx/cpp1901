#include <iostream>

using namespace std;

int main() {
    int i = 0, n = 0;
    int *p;
    cout << "How many numbers would you like to type? ";
    cin >> i;
    p = new (nothrow) int[i];

    if (p == nullptr) {

    }
    return 0;
}