#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>
#include <unistd.h>
#define CLASS_SIZE 3

int main(void)
{

    string names[CLASS_SIZE] = {"Ivan", "Vlad", "Bogdan"};

    for(int i = 0; i < CLASS_SIZE; i++)
    {
        printf("%s\n", names[i]);
    }
}