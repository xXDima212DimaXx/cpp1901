#include <cs50.h>
#include <stdio.h>

double cube(double cub);

int main(void)
{
    double c = get_double("Enter double: ");
    cube(c);
}

// function cube
double cube(double cub)
{
    printf("Cube %f is %f\n", cub, cub * cub * cub);
    return cub * cub * cub;
}