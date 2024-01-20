#include <stdio.h>

#define SIZE 8

int main(void)
{
    int my_elements[SIZE];
    int i;
    int pow;

    for (i = 0, pow = 1; i < SIZE; i++, pow *= 2)
    {
        my_elements[i] = pow;
    }

    i = 0;
    do
    {
        printf("my_elements[%d]: %8d\n", i, my_elements[i]);
    } while (++i < 8);

    return 0;
}