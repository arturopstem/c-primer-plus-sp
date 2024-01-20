#include <stdio.h>

int main(void)
{
    double num1, num2;
    double result;

    printf("Enter two floating point numbers:\n");
    while (scanf("%lf%lf", &num1, &num2) == 2)
    {
        result = (num1 - num2) / (num1 * num2);
        printf("result = %.5g\n", result);
        printf("Enter two floating point numbers (q to quit):\n");
    }

    return 0;
}