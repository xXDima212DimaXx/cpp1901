#include <iostream>
#include <cstdlib>
#include <limits>

int main (void)
{
    // Объявление переменной а типа int
    int number = 0;

    // Цикл проверки и ввывод соответствующих значений на экран
    do {
        // Запрос пользовательского ввода
        std::cout << "Enter number: ";
        std::cin >> number;

        // Исправление баги при вводе неверного типа данных
        if ((std::cin.fail() == 0)) {
            // Если пользователь ввел правильный тип данных, продолжаем выполнение
        } else {
            // Если тип данных некорректный, то завершаем программу, выдав ошибку
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "String not allowed" << std::endl;
            number = -1;
        }
    } while (number < 0 || number > 10 || number == 5);

    // Если пользователь ввел верное значение (Значение, при котором не удовлетворяется значение цикла), то продолжаем выполнение кода
    std::cout << (number * 10) << std::endl;

    return 0;
}