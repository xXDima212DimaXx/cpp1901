#include <iostream>
#include <vector>

void printStack(const std::vector<auto> &stack) {
    for (auto const &element: stack)
        std::cout << element << " ";

    std::cout << std::endl;
    std::cout << " (cap: " << stack.capacity() << ", len: " << stack.size() << ")" << std::endl;
}

int main() {
    int *array = new int[12] {1, 2, 3, 4, 5};

    std::vector<int> vec {3, 4, 7, 8, 9, 20, 11, 23, 33};
    // vec.resize(6);
    // vec.resize(2);


    // std::cout << "The length is: " << vec.size() << std::endl;
    // std::cout << "The capacity is: " << vec.capacity() << std::endl;
    printStack(vec);

    vec = {1, 2, 3, 4};
    // std::cout << "The length is: " << vec.size() << std::endl;
    // std::cout << "The capacity is: " << vec.capacity() << std::endl;
    vec.reserve(11);

    printStack(vec);

    vec.push_back(6);

    printStack(vec);

    std::cout << vec.back() << std::endl;
    vec.pop_back();

    printStack(vec);

    return 0;
}