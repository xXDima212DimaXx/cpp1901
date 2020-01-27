// switch

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompt user for answer
    char c = get_char("Search: ");

    // Check answer
    switch (c)
    {
        case 'Dima':
        // case 'Anna':
        // case 'Maks':
            // printf("Hello\n");
            // break;
        // case 'Admin':
            printf("Hello, Admin\n");
            break;
        default:
            printf("User doesn't exit\n");
            break;
    }
}