#include <iostream>
#include <cmath>
#include <string>

void fplus (int p1, int p2); // Сложение
void fminus (int p1, int p2); // Вычитание
void fmultiple (int p1, int p2); // Умножение
void fdivide (int p1, int p2); // Деление
void fpws (int p1, int p2); // Возведение в квадрат
void fwpt (int p1, int p2); // Возведение в куб
void fsqrt (int p1, int p2); // Квадратный корень
void fcbrt (int p1, int p2); // Кубический корень
void fdmod (int p1, int p2); // Остаток от деления
int result (std::string op, int res, int p1, int p2);

int main (void) {

    int p1;
    int p2;
    std::string opp;

    cout << "" << endl;

    for (;;) {
        std::cout << "First number: ";
        std::cin >> p1;
        std::cout << "Math operator: ";
        std::cin >> opp;
        std::cout << "Second number: ";
        std::cin >> p2;

        if (opp == "+")
        {
            fplus (p1, p2);
        }

        else if (opp == "-")
        {
            fminus (p1, p2);
        }

        else if (opp == "*")
        {
            fmultiple (p1, p2);
        }

        else if (opp == "/")
        {
            fdivide (p1, p2);
        }

        else if (opp == "pws")
        {
            fpws (p1, p2);
        }

        else if (opp == "pwt")
        {
            fpwt (p1, p2);
        }

        else if (opp == "sqrt")
        {
            fsqrt (p1, p2);
        }

        else if (opp == "cbrt")
        {
            fcbrt (p1, p2);
        }

        else if (opp == "dmod")
        {
            fdmod (p1, p2);
        }

        else {
            std::cout << "Invalid operator" << std::endl;
        }
    }

    return 0;
}

// Сложение
void fplus (int p1, int p2) {
    result("+", p1 + p2, p1, p2);
}

// Вычитание
void fminus (int p1, int p2) {
    result("-", p1 + p2, p1, p2);
}

// Умножение
void fmultiple (int p1, int p2) {
    result("*", p1 + p2, p1, p2);
}

// Деление
void fdivide (int p1, int p2) {
    result("/", p1 + p2, p1, p2);
}

// Возведение в квадрат
void fpws (int p1, int p2) {
    p2 = 0;
    result("pws", p1 * p1, p2, p1);
}

// Возведение в куб
void fwpt (int p1, int p2) {
    p2 = 0;
    result("pwt", p1 * p1 * p1, p2, p1);
}

// Квадратный корень
void fsqrt (int p1, int p2) {
    result("sqrt", sqrt(p1), p2, p1);
}

// Кубический корень
void fcbrt (int p1, int p2) {
    result("sqrt", cbrt(p1), p2, p1);
}

// Остаток от деления
void fdod (int p1, int p2) {
    result("%", p1 % p2, p1, p2);
}

int result (std::string op, int res, int p1, int p2) {
    std::cout << "The " << p1 << " " << op << " " << p2 << " is " << res << std::endl;
    return 0;
}