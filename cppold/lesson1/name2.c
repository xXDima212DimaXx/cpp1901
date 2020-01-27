#include <stdio.h>
#include <cs50.h>

int main(void) {
        printf("Как тебя зовут?");
        string name = get_string();
        printf("Hello %s \n", name);
}
