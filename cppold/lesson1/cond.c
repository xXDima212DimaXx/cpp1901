#include <stdio.h>
#include <cs50.h>

void qrt(void);

int main(void)
{
    /*
    *===========================================
    *
    *             Calculator v1.0
    *
    *===========================================
    */
    while (true)
    {
        printf("First: ");
        int a = get_int();

        printf("Operator: ");
        char b = get_char();

        printf("Second: ");
        int c = get_int();

        if (b == '+')
        {
            // Operator +
            int num = a + c;
            printf("=========== \n");
            printf("  %i \n", num);
            printf("=========== \n");
        }
        else if (b == '-')
        {
            // Operator -
            int num = a - c;
            printf("=========== \n");
            printf("  %i \n", num);
            printf("=========== \n");
        }
        else if (b == '*')
        {
            //Operator *
            int num = a * c;
            printf("=========== \n");
            printf("  %i \n", num);
            printf("=========== \n");
        }
        else if (b == '/')
        {
            // Operator /
            int num = a / c;
            printf("=========== \n");
            printf("  %i \n", num);
            printf("=========== \n");
        }
        else if (b == '%')
        {
            // Operator %
            int num = a % c;
            printf("=========== \n");
            printf("  %i \n", num);
            printf("=========== \n");
        }
        else if (b == 's')
        {
            // Operator sqrt
            int num = a * a;
            printf("=========== \n");
            printf("  %i \n", num);
            printf("=========== \n");
        }
        else if (b == '^')
        {
            // Operator ^
            for (int i = 1; i <= c; i++)
            {
                int num = a * a;
                printf("=========== \n");
                printf("  %i \n", num);
                printf("=========== \n");
            }
        }
        else
        {
            printf("Invalid operator! \n");
            //break;
        }
    }
    return 0;
}
void qrt(void)
{

}