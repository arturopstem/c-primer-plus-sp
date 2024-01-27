#include <stdio.h>

void larger_of(double *a, double *b);

int main(void)
{
    double pi = 3.1415;
    double e = 2.7182;
    printf("pi = %g, e = %g\n", pi, e);
    larger_of(&pi, &e);
    printf("Assign both the value of the maximum\n");
    printf("pi = %g, e = %g\n", pi, e);

    return 0;
}

void larger_of(double *a, double *b)
{
    double temp = *a > *b ? *a : *b;
    *a = *b = temp;
}