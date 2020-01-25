#include <iostream>
#include <cstdlib>
#include <limits>

void logic(int num);

int main (void)
{
    // Объявление переменной а типа int
    int number = 0;

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
        std::cout << "Error" << std::endl;
        return 1;
    }

    // Вызов условной функции, которая проверяет значение переменной а
    logic(number);

    return 0;
}

// Условная функция, которая проверяет значение переменной а
void logic(int num)
{
    // Проверка и ввывод соответствующих значений на экран
    if (num == 0 || num == 1) {
        std::cout << "You picked 0 or 1" << std::endl;
    } else {
        std::cout << "Error" << std::endl;
    }
}