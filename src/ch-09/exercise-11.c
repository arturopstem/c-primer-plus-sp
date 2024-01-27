#include <stdio.h>

int fib_number(int n);

int main(void)
{
    int number;
    int fib;

    number = 10;

    for (int i = 0; i <= number; i++)
    {
        fib = fib_number(i);
        printf("fibonacci number %2d:%6d\n", i, fib);
    }

    return 0;
}

int fib_number(int n)
{
    int a_minus_2, a_minus_1;
    int temp;

    if (n < 2)
    {
        return n;
    }

    a_minus_2 = 0;
    a_minus_1 = 1;
    for (int i = 2; i < n; i++)
    {
        temp = a_minus_1;
        a_minus_1 += a_minus_2;
        a_minus_2 = temp;
    }

    return a_minus_1 + a_minus_2;
}