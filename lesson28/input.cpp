#include <iostream>
#include <cstdint>
#include <limits>
#include <cstdlib>

double getValue()
{
    while(true)
    {
        std::cout << "Enter a value: ";
        double value;
        std::cin >> value;

        if (std::cin.fail() == 0)
        {
            return value;
        }
        else {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Incorect type of data. Value not allowed." << std::endl;
            return 1;
        }
    }

}

char getOperator()
{
    while(true)
    {
        std::cout << "Enter one of the following: +, -, * or /: ";
        char op;
        std::cin >> op;

        if (op == '+' || op == '-' || op == '*' || op == '/')
            return op;
        else
            std::cout << "Oops, that input is invalid. Please try again.\n";
    }

}

void printResult(double value1, char op, double value2)
{
    if (op == '+')
        std::cout << value1 << " + " << value2 << " is " << value1+value2 << '\n';
    else if (op == '-')
        std::cout << value1 << " - " << value2 << " is " << value1-value2 << '\n';
    else if (op == '*')
        std::cout << value1 << " * " << value2 << " is " << value1*value2 << '\n';
    else if (op == '/')
        std::cout << value1 << " / " << value2 << " is " << value1/value2 << '\n';
    else
        std::cout << "Something went wrong: function got an invalid operator." << std::endl;
}

int main()
{
    // test --------------------------------------------------------------
    std::int16_t x { 0 }; // -32 768 - 32 767
    std::cout << "Enter a value between -32 768 - 32 767: ";
    std::cin >> x;

    std::int16_t y { 0 }; // -32 768 - 32 767
    std::cout << "Enter another value between -32 768 - 32 767: ";
    std::cin >> y;

    std::cout << "The sum is: " << x + y << '\n';

    // -------------------------------------------------------------------
    // double a = getValue();
    // char op = getOperator();
    // double b = getValue();

    // printResult(a,op,b);



    return 0;
}