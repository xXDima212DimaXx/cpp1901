#include <stdio.h>

int main(void)
{
    for (int row = 0; row < 3; row++)
    {
        for (int column = 0; column < 4; column++)
        {
            printf("x");
        }
        printf("\n\a");
    }
    return 0;
}