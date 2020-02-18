#pragma once
#include <ctime>

// Get random
int getRand(int min, int max) {
    // Get rand from int min to int max
    int med = max - min;
    return rand() % med + min;
}