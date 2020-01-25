#include <cmath>

bool isEqual(double a, double b, double epsilon)
{
    return fabs(a - b) <= epsilon; // eps 0.000001
}