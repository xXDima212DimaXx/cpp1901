#include <iostream>
#include <cstdlib>
#include <limits>
#include <cmath>
#include <cstring>

int convert(int val[]);

int main (void) {
    const int STRING_LENGTH = 2;
    char value[STRING_LENGTH] = {};
    int dec[STRING_LENGTH] = {};

    // Запрос пользовательского ввода
    std::cout << "Enter hexdecimal value: ";
    std::cin >> value;

    // Исправление бага при вводе неверного типа данных
    if ((std::cin.fail() == 0)) {
        // Если пользователь ввел правильный тип данных, продолжаем выполнение
    } else {
        // Если тип данных некорректный, то завершаем программу, выдав ошибку
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Incorect type of data. Value \"" << value << "\" not allowed. You can use only 0 or 1!" << std::endl;
        return 1;
    }

    for (int g = 0; g < sizeof(value); g++) {
        if ((value[g] == '0') || (value[g] == '1') || (value[g] == '2') || (value[g] == '3') || (value[g] == '4') || (value[g] == '5') || (value[g] == '6') || (value[g] == '7') || (value[g] == '8') || (value[g] == '9') || (value[g] == 'a') || (value[g] == 'b') || (value[g] == 'c') || (value[g] == 'd') || (value[g] == 'e') || (value[g] == 'f')) {

        } else {
            std::cout << "Incorect type of data. Value \"" << value << "\" not allowed. You can use only 0 ~ f!" << std::endl;
            return 1;
        }
    }

    // Подготовка к конвертации. Перевод буквенных значений в числовые
    for (int i = 0; i < (STRING_LENGTH); i++) {
        if (value[i] == 'a') {
            dec[i] = 10;

            if (dec[i] > 10) {
                dec[i] -= 48;
            }
        }

        else if (value[i] == 'b') {
            dec[i] = 11;

            if (dec[i] > 11) {
                dec[i] -= 48;
            }
        }

        else if (value[i] == 'c') {
            dec[i] = 12;

            if (dec[i] > 12) {
                dec[i] -= 48;
            }
        }

        else if (value[i] == 'd') {
            dec[i] = 13;

            if (dec[i] > 13) {
                dec[i] -= 48;
            }
        }

        else if (value[i] == 'e') {
            dec[i] = 14;

            if (dec[i] > 14) {
                dec[i] -= 48;
            }
        }

        else if (value[i] == 'f') {
            dec[i] = 15;

            if (dec[i] > 15) {
                dec[i] -= 48;
            }
        } else {
            dec[i] = value[i];
            dec[i] -= 48;

        }

    }

    // Вызов условной функции, которая проверяет значение введенные данные и выводит результат на экран
    std::cout << "Decoded value: " << convert(dec) << std::endl;
    std::cout << "Decoded value (char): " << (char)convert(dec) << std::endl;

    return 0;
}

// Функция преобразования шеснадцатиричной системы в десятичную
int convert(int val[]) {

    // Алгоритм перевода: NUM = N*16^LENTH_OF_NUM-1+U*16^LENTH_OF_NUM-2+...
    int pw = (STRING_LENGTH) - 1;
    int r = 0;

    for (int i = 0; i < STRING_LENGTH; i++) {
        val[i] = val[i] * pow(16, pw);
        pw--;
    }

    for (int i = 0; i < STRING_LENGTH; i++) {
        r = r + val[i];
    }

    return r;
}