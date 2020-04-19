#include <iostream>

inline int max(int a, int b) {
    return a < b ? b : a;
}

int main() {
    std::cout << max(7, 8) << std::endl;
    std::cout << max(7, 4) << std::endl;

    return 0;
}