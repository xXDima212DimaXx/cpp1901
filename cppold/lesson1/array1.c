#include <stdio.h>
#include <cs50.h>
#include <unistd.h>
#define CLASS_SIZE 3

int main(void)
t{

    int temperature[CLASS_SIZE];

    for(int i = 0; i < CLASS_SIZE; i++)
    {
        printf("Enter %i numbers\n", CLASS_SIZE);
        temperature[i] = get_int("Enter the number: ");
    }
}