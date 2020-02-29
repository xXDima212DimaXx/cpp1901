#include <iostream>
#include <limits>

double getInputNumber (int count) {
    double number = 0;
    std::cout << "\tEnter a " << count << " number: ";
    std::cin >> number;

    /********* BEGIN INPUT BUGFIX **********/
    if ((std::cin.fail() == 0)) {
        // Continue executing
    } else {
        // Terminate and show error
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "\tInvalid number!" << std::endl;
        exit(1);
    }
    /********* END INPUT BUGFIX **********/

    return number;
}