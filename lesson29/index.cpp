#include <iostream>

int main() {
    // int a = 5;
    // int b = ++a;
    // std::cout << a << std::endl;
    // std::cout << b << std::endl;

    // int x = 5;
    // int y = x++;
    // std::cout << x << std::endl;
    // std::cout << y << std::endl;

    int m = 5, n = 5;

    std::cout << m << " " << n << std::endl;
    std::cout << ++m << " " << --n << std::endl;
    std::cout << m << " " << n << std::endl;
    std::cout << m++ << " " << n-- << std::endl;
    std::cout << m << " " << n << std::endl;
    return 0;
}