#include <iostream>

int subtract(int a, int b) {
    return a - b;
}

int subtract(int a, int b, int c) {
    return a - b - c;
}

double subtract(double a, double b) {
    return a - b;
}

int sum(int a, int b = 7, int c = 2) {
    return a + b + c;
}

int sum2(int a = 1, int b = 7, int c = 2) {
    return a + b + c;
}

// int subtractInteger(int a, int b) {
//     return a - b;
// }

// double subtractDouble(int a, int b) {
//     return a - b;
// }

int main() {
    std::cout << subtract(3, 6) << std::endl;
    std::cout << subtract(3.3, 2.4) << std::endl;
    std::cout << subtract(3, 6, 7) << std::endl;
    std::cout << sum(3) << std::endl;
    std::cout << sum(3, 5) << std::endl;
    std::cout << sum2() << std::endl;

    return 0;
}