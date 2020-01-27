#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[])
{
    for (int i = 0; i < argc; i++)
    {
        printf("%s\t", argv[i]);
    }
    printf("\n");
}