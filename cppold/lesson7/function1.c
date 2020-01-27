#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int x = 25;
    float y = 6.234;
    double z = 6.2342352362623423235236236234;
    short a = 234;
    string s = get_string("Value: ");

    printf("size of value is\t");
    printf("size of var is\n");
    printf("%lu\t\t\t", sizeof(x));
    printf("%lu\n", sizeof(int));
    printf("%lu\t\t\t", sizeof(y));
    printf("%lu\n", sizeof(float));
    printf("%lu\t\t\t", sizeof(z));
    printf("%lu\n", sizeof(double));
    printf("%lu\t\t\t", sizeof(a));
    printf("%lu\n", sizeof(short));
    printf("%lu \t\t\t%i \n", sizeof(atoi(s)), atoi(s));

    return 0;
}