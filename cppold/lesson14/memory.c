#include <stdio.h>
#include <cs50.h>
int main(void)
{
  //Виділяємо пам'ять під одне ціле число
  int* ptr = malloc(sizeof(int));
  if (ptr == NULL) //Якщо пам'ять не виділено
  {
    printf("Error -- out of memory.\n");
    return 1;
  }
  *ptr = get_int();
  printf("You entered %d.\n", *ptr);
  //Вивільняємо пам'ять
  free(ptr);
}