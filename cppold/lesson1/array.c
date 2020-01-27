#include <stdio.h>
#include <cs50.h>
#include <unistd.h>
#define CLASS_SIZE 3

int main(void)
{

    int temperature[CLASS_SIZE];
    temperature[0] = 55;
    temperature[1] = 25;
    temperature[2] = 75;

    // int temperature[n] = {55, 22, 75};
    printf("value\t\t");
    printf("number\t\t");
    printf("0\n");

    for(int i = 0; i < CLASS_SIZE; i++)
    {
        printf("%i\t\t", temperature[i]);
        temperature[i] = i;
        printf("%i\t\t", temperature[i]);
        printf("0\n");
    }
}