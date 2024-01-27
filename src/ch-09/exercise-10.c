#include <stdio.h>

void to_base_n(unsigned long n, int base);

int main(void)
{
    unsigned long number;
    printf("Enter an integer (q to quit):\n");
    while (scanf("%lu", &number) == 1)
    {
        printf("Binary equivalent: ");
        to_base_n(number, 2);
        putchar('\n');
        printf("Enter an integer (q to quit):\n");
    }
    printf("Done.\n");

    return 0;
}

void to_base_n(unsigned long n, int base)
{
    if (base < 2 || base > 10)
    {
        printf("base should be in range 2-10");
        return;
    }
    int r;

    r = n % base;
    if (n >= base)
    {
        to_base_n(n / base, base);
    }
    printf("%d", r);

    return;
}