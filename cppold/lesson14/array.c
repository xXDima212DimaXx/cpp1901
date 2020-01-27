#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>

int main(void)
{
    int n, i, *ptr, sum = 0;
    scanf("%d", &n);

    //Виділяємо пам'ять під одне ціле число
    ptr = (int *) malloc(sizeof(int));

    if (ptr == NULL) //Якщо пам'ять не виділено
    {
        printf("Error -- out of memory.\n");
        return 1;
    }

    printf("Enter elements: \n");
    for(i = 0; i < n; ++i)
    {
        scanf("%d", ptr +i);
        sum += *(ptr + i);
    }

    printf("sum = %d \n", sum);
    free(ptr);
    return 0;
}