#include <iostream>

int main() {
    std::cout << "Enter a positive number: ";
    int length = 0;
    std::cin >> length;

    int *array = new int[length];
    for (int i = 0; i < length; ++i) {
        array[i] = 0;
    }

    for (int i = 0; i < length; ++i) {
        std::cout << "Enter a value at " << (i + 1) << " of array[" << length << "]: ";
        std::cin >> array[i];
    }

    return 0;
}