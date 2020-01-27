#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>
#include <unistd.h>

int main(void)
{
    string s = get_string("Enter some text: ");

    int length = 0;
    while(s[length] != '\0')
        length++;

    printf("The text has %i symbols\n", length);
}
