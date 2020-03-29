#include <iostream>
#include <vector>

int main() {
    const int n_students = 7;
    int scores[n_students] = {44, 22, 54, 23, 67, 99, 29};

    /* for (int i = 0; i < n_students; ++i) {
        std::cout << "Score: " << scores[i] << std::endl;
    } */

    for (const auto &number : scores) {
        std::cout << "Score: " << number << std::endl;
    }

    std::vector<int> math = {44, 22, 54, 23, 67, 99, 29};

    for (const auto &number : math) {
        std::cout << "Score: " << number << std::endl;
    }

    return 0;
}