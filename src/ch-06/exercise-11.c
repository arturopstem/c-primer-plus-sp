#include <stdio.h>

#define SIZE 8

int main(void)
{
    int numbers[8];
    int i;

    printf("Enter 8 integers:\n");
    for (i = 0; i < SIZE; i++)
    {
        scanf("%d", &numbers[i]);
    }
    printf("Reverse order:\n");
    for (i = SIZE - 1; i >= 0; i--)
    {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}