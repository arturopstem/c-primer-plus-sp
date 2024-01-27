#include <stdio.h>

double min(double, double);

int main(void)
{
    double pi = 3.1415;
    double e = 2.7182;
    double minimum = min(pi, e);

    printf("The min of pi = %g and e = %g is %s = %g\n", pi, e, minimum == e ? "e" : "pi", minimum);

    return 0;
}

double min(double a, double b)
{
    return a < b ? a : b;
}