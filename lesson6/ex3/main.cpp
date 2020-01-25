#include "calculate.hpp"
// #include "add.hpp"

#define COUNT 1000
#define NAME "Mike"

const int NUMBER = 100;

int main(void) {
    std::cout << add(COUNT, NUMBER) << std::endl;
    std::cout << fminus(3, 7) << std::endl;
    std::cout << multiple(3, 7) << std::endl;
    std::cout << divide(3, 7) << std::endl;
    std::cout << std::endl;
    std::cout << NAME << std::endl;
    return 0;
}
