/*********************************************
 *
 * Task 1 Lesson 18
 *
 * I: std:: fucking my brain :) or :(
 * Complier: HA-HA-HA
 * [using namespce std]: STD:: down at 3... 2... 1...
 *
 *                *BIG CRASH*
 *
 *                  *******
 *               *************
 *              ***************
 *             *****************
 *             *****************
 *             ****  *****  ****
 *              **    ***    **
 *                    ***
 *                    ***
 *                    ***
 *                   *****
 *                  *******
 *                ***********
 *             *****************
 *
 *********************************************/



/*************** BEGIN CONNECTING LIBRARIES ******************/
// Main library
#include <iostream>

// DEBUG: Когда надоело жить...
#include <limits>

// Needs for random
#include <ctime>

// Include getName
#include "getName.hpp"
/**************** END CONNECTING LIBRARIES *******************/



/**************** BEGIN PROGRAMM SETTINGS ********************/
// Max name length
const int MAX_INPUT_VALUE = 50;

// Needs for getRand function: Max value
const int MAX_RANDOM_VALUE = 10;

// Needs for getRand function: Min value
const int MIN_RANDOM_VALUE = 1;
/***************** END PROGRAMM SETTINGS *********************/



/******************* BEGIN PROTOTYPES ************************/
// Get number of chars in name
int getValueFromUser(char*, int get_max_val);

// Get random
int getRand(int min, int max);
/******************** END PROTOTYPES *************************/


/***************** BEGIN MAIN FUNCTION ***********************/
int main() {
    srand(time(NULL));
    char name[MAX_INPUT_VALUE];
    std::cout << "Enter your name: ";
    std::cin.get(name, MAX_INPUT_VALUE, '\n');

    // Когда надоело жить...
    if ((std::cin.fail() == 0)) {
        // Continue executing
    } else {
        // Terminate and show error
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Please enter valid name!" << std::endl;
        return -1;

        /*
                       ___________
                      /           \
                      |     |     |
                      |   --+--   |
                      |     |     |
                      |     |     |
                      |     |     |
                      |           |
                      |   R.I.P   |
                      |           |
                 -----------------------


                 // Program killed by illegal char

        */
    }

    // Welcome
    std::cout << "Hello, " << name << "!" << std::endl;

    // Sum of chars in name
    std::cout << "Sum of chars in name is: " << getValueFromUser(name, MAX_INPUT_VALUE) << std::endl;

    int get_char_count = getValueFromUser(name, MAX_INPUT_VALUE);
    int random_array[get_char_count];

    /* Debug: Print number of chars in name: Uncomment, if program doesn't work correctly*/
    /* std::cout << get_char_count << std::endl; */

    for (int i = 0; i < get_char_count; i++) {
        random_array[i] = getRand(MIN_RANDOM_VALUE, MAX_RANDOM_VALUE);
    }

    /* Debug: Print array: Uncomment, if program doesn't work correctly*/
    /*for (int i = 0; i < get_char_count; i++) {
        std::cout << random_array[i] << "\t";
    }

    std::cout << std::endl; */

    // Get summ
    float sum = 0;

    for (int i = 0; i < get_char_count; i++) {
        sum += random_array[i];
    }

    std::cout << "The sum of all elements in random array is: " << sum << std::endl;

    // Average
    float average = sum / get_char_count;
    std::cout << "The average of all elements in random array is: " << average << std::endl;

    // Get summ of numbers in random array, which only divides by 2
    int sum_even = 0;

    for (int i = 0; i < get_char_count; i++) {
        if (random_array[i] % 2 == 0) {
            sum_even += random_array[i];
        }
    }

    std::cout << "The sum of all elements in random array, which only divides by 2 is: " << sum_even << std::endl;

    // Finsh
    return 0;

    /***********************************
     *
     *  ██  ██  ██  ██  ██  ██  ██
     *    ██  ██  ██  ██  ██  ██
     *  ██  ██  ██  ██  ██  ██  ██
     *    ██  ██  ██  ██  ██  ██
     *  ██  ██  ██  ██  ██  ██  ██
     *    ██  ██  ██  ██  ██  ██
     *  ██  ██  ██  ██  ██  ██  ██
     *  ██
     *  ██
     *  ██
     *  ██
     *  ██
     *  ██
     *
     ***********************************/
}
/****************** END MAIN FUNCTION ************************/




/******************** BEGIN FUNCTIONS ************************/


// Get random
int getRand(int min, int max) {
    // Get rand from int min to int max
    int med = max - min;
    return rand() % med + min;
}
/********************* END FUNCTIONS *************************/

// EOF