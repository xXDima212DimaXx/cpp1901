#include <iostream>

int main() {
    int data[] = {1, 3, 5, 5, 6, 9};
    for (auto index : data) {
        std::cout << index << "\n";
    }

    return 0;
}