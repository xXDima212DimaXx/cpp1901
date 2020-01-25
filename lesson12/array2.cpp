#include <iostream>
#include <cmath>

using namespace std;

int main(void) {
    const int number = 20;
    int arr[number];
    int count = sizeof(arr)/sizeof(arr[0]);

    // Init
    for (int i = 0; i < count; i++) {
        if (i % 2 == 0) {
            arr[i] = i;
            cout << arr[i] << endl;
        }
    }

    cout << endl;

    // Pow 2
    for (int i = 0; i < count; i++) {
        if (i % 2 == 0) {
            cout << pow(arr[i], 2) << endl;
        }
    }

    return 0;
}