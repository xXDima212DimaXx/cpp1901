#include <iostream>



int main(int argc, char *argv[]) {
    // std::cout << argc << std::endl;
    for (int i = 0; i < argc; ++i) {
        std::cout << argv[i] << "\t";
    }

    std::cout << std::endl;

    return 0;
}