#include <stdio.h>
#include <cs50.h>
#include <string.h>

typedef struct
{
    string name;
    int age;
    int id;
    int score;
} student;

int main(void)
{
    student walker;
    walker.name = "Walker";
    walker.age = 15;
    walker.id = 123;
    walker.score = 93;

    student ivan = {"Ivan", 17, 125, 97};

    printf("%s\n", ivan.name);

    return 0;
}