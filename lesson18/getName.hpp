#pragma once
// Get number of chars in name
int getValueFromUser(char name[], int get_max_val) {
    int symbol_count = 0;

    /* Debug: Dispaly name: Uncomment, if program doesn't work correctly */
    /* std::cout << name << std::endl; */

    for (int i = 0; i < get_max_val; i++) {
        if (name[i]) {
            symbol_count++;
        }

        else {
            break;
        }
    }

    return symbol_count;
}
