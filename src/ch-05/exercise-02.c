#include <stdio.h>

int main(void)
{
    int number;
    int upto;

    printf("Enter a number: ");
    scanf("%d", &number);
    upto = number + 10;

    printf("%2d\t", number);
    while (number++ < upto)
    {
        printf("%2d\t", number);
    }
    printf("\n");

    return 0;
}