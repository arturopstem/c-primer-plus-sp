#include <stdio.h>

#define SIZE 8

int main(void)
{
    double elements[SIZE];
    double totals[SIZE];
    int i;

    printf("Enter 8 values:\n");
    for (i = 0; i < SIZE; i++)
    {
        // printf("Value %d: ", i + 1);
        scanf("%lf", &elements[i]);
    }

    for (i = 1, totals[0] = elements[0]; i < SIZE; i++)
    {
        totals[i] = elements[i] + totals[i - 1];
    }
    printf("\n");

    /* print elements content */
    for (i = 0; i < SIZE; i++)
    {
        printf("elements[%d]%*s", i, 3, "");
    }
    printf("\n");

    for (i = 0; i < SIZE; i++)
    {
        printf("%-14.4g", elements[i]);
    }
    printf("\n");

    /* print totals content */
    for (i = 0; i < SIZE; i++)
    {
        printf("totals[%d]%*s", i, 5, "");
    }
    printf("\n");

    for (i = 0; i < SIZE; i++)
    {
        printf("%-14.4g", totals[i]);
    }
    printf("\n");

    printf("\n");

    return 0;
}