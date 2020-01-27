#include <cs50.h>
#include <stdio.h>

int main(void)
{
    while (true)
    {
        string a = get_string("Имя: ");
        string b = get_string("Фамилия: ");
        int c = get_int("Возвраст: ");
        float d = get_float("Вес: ");
        printf("+---------------+-----------------------------+\n");
        printf("| Имя:          | %s\n", a);
        printf("+---------------+-----------------------------+\n");
        printf("| Фамилия:      | %s\n", b);
        printf("+---------------+-----------------------------+\n");
        printf("| Возвраст:     | %i\n", c);
        printf("+---------------+-----------------------------+\n");
        printf("| Вес:          | %f\n", d);
        printf("+---------------+-----------------------------+\n");
        printf("Чтобы выйти введите q\n");

        char x = get_char("Ваш выбор: ");

        if (x == 'q')
        {
            break;
        }
        else
        {

        }
    }
}
