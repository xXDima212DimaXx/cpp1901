#include <iostream>
#include <string>
#include <sstream>
#include <cstdlib>


int main(int argc, char *argv[]) {
    if (argc <= 1) {
        if (argv[0])
            std::cout << "Usage: " << argv[0] << " <number> " << "\n";
        else
            std::cout << "Usage: <command> <number> " << "\n";
        exit(1);
    }

    std::stringstream convert(argv[1]);

    int number;

    if (!(convert >> number)) {
        number = 0;
        std::cout << "Incorrect argument: Usage: " << argv[0] << " <number_int> " << "\n";
    } else {
        std::cout << "Got integer: " << number << "\n";
    }

    return 0;
}