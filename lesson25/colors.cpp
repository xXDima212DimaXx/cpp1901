#include <iostream>

enum Colors {
    COLOR_RED,
    COLOR_BROWN,
    COLOR_WHITE,
};

enum Animals {
    ANIMAL_COW = -3,
    ANIMAL_DOG,
    ANIMAL_CAT,
    ANUMAL_HORSE = 6,
    ANIMAL_LION = 5,
    ANIMAL_ZEBRA,
    ANUMAL_PIG,
};

void printColor(Colors color) {
    if (color == COLOR_RED)
        std::cout << "Red" << std::endl;
    else if (color == COLOR_BROWN)
        std::cout << "Brown" << std::endl;
    else if (color == COLOR_WHITE)
        std::cout << "White" << std::endl;
    else
        std::cout << "Who knows..." << std::endl;
}

int main () {
    Colors paint = COLOR_RED;
    Colors house(COLOR_WHITE);

    std::cout << paint << std::endl;

    // Anumals cats = 7;
    printColor(paint);
    printColor(COLOR_WHITE);
    printColor(static_cast<Colors>(5));
    // printColor(1);
    printColor(static_cast<Colors>(1));

    return 0;
}
