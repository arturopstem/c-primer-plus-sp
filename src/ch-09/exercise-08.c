#include <float.h>
#include <stdio.h>

double power(double n, int p);

int main(void)
{
    double x, xpow;
    int exp;

    printf("Enter a number and the positive integer power");
    printf(" to which\nthe number will be raised. Enter q");
    printf(" to quit.\n");
    while (scanf("%lf%d", &x, &exp) == 2)
    {
        xpow = power(x, exp);
        if (xpow > DBL_MAX)
        {
            printf("%.3g to the power %d is undefined\n", x, exp);
        }
        else
        {
            printf("%.3g to the power %d is %.5g\n", x, exp, xpow);
        }
        printf("Enter next pair of numbers or q to quit.\n");
    }
    printf("Hope you enjoyed this power trip -- bye!\n");

    return 0;
}

double power(double n, int p)
{
    if (n == 0)
    {
        if (p > 0)
        {
            return 0;
        }
        else
        {
            return 1 / 0.0;
        }
    }
    double pow = 1;
    int i;
    int sign = p < 0 ? -1 : 1;
    int abs_p = sign * p;

    for (i = 1; i <= abs_p; i++)
        pow *= n;

    if (sign == -1)
    {
        pow = 1 / pow;
    }
    return pow;
}