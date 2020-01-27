#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>

int func2();

int main()
{
    string a = get_string("Enter command: ");
    FILE* file = fopen("keystore/" + a , "r");
    if(file == NULL)
    {
      printf("Command not found\n");
      func2();
    }

    for(int c = fgetc(file); c != EOF; c = fgetc(file))
    {
      putchar(c);
    }
    printf("\n");
    fclose(file);
    func2();
  return 0;
}
int func2()
{
  main();
  return 0;
}