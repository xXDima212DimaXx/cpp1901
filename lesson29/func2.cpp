#include <iostream>

int sumCount(int value) {
    if (value <= 0)
        return 0;
    else if (value == 1)
        return 1;
    else
        return sumCount(value - 1) + value;
}

int main() {
    std::cout << sumCount(100000) << std::endl;
    return 0;
}