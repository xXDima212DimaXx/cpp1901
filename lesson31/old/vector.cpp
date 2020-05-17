#include <iostream>
#include <vector>

int main() {
    std::vector<int> data {1, 3, 5, 5, 6, 9};

    for (auto const &element : data) {
        std::cout << element << "\n";
    }

    return 0;
}