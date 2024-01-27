#include <stdio.h>

double harmonic_mean(double, double);

int main(void)
{
    double pi = 3.1415;
    double e = 2.7182;
    double hmean = harmonic_mean(pi, e);

    printf("The harmonic mean of pi and e equals %.6g\n", hmean);

    return 0;
}

double harmonic_mean(double a, double b)
{
    if (a < 0 || b < 0 || a + b == 0)
    {
        return 0;
    }
    return 2 * (a * b) / (a + b);
}