#include <iostream>

using namespace std;

void printSize(int *array) {
    cout << sizeof(array) << endl; // *(*array)
    cout << array[3] << endl;
    cout << array[7] << endl;
}

// void printSize2(int array[]) {
//     cout << sizeof(array) << endl;
// }

int main() {
    int arr[5] = {5, 3, 2, 5, 1};
    // cout << arr << endl;
    // cout << &arr[0] << endl;
    // cout << &arr[1] << endl;
    // cout << *arr << endl;

    char name[] = "Mike";
    // cout << *name << endl;

    // int *ptr = arr;
    // cout << sizeof(*ptr) << endl;
    // cout << sizeof(ptr) << endl;
    // cout << sizeof(arr) << endl;

    // printSize(arr);
    // printSize2(arr);

    int *ptr2 = new int;
    *ptr2 = 8;

    delete ptr2;
    // cout << *ptr2 << endl;

    ptr2 = nullptr;

    return 0;
}