/*
* +======================+
* |   Test program 1     |
* +======================+
*/

// Import libraries
#include <cs50.h>
#include <stdio.h>

// Main function
void func2(string d, string e, string f);

int main(void)
{
    // Add variables a, b, c
    string a = "variable a";
    string b = "variable b";
    string c = "variable c";

    // Invoke function func2
    func2(a, b, c);
}

// Transfer data between functions
void func2(string d, string e, string f)
{
    // Output variable a, b, c (c, d, e)
    printf("%s \n", d);
    printf("%s \n", e);
    printf("%s \n", f);
}