#include <iostream>

void countOut(int count) {
    std::cout << "Push: " << count << std::endl;

    if (count > 1)
        countOut(count-1);

    std::cout << "Pop: " << count << std::endl;
}

int main() {
    countOut(4);
    return 0;
}