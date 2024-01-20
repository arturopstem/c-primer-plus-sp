#include <stdio.h>

double calculate(double a, double b);

int main(void)
{
    double num1, num2;
    double result;

    printf("Enter two floating point numbers:\n");
    while (scanf("%lf%lf", &num1, &num2) == 2)
    {
        result = calculate(num1, num2);
        printf("result = %.5g\n", result);
        printf("Enter two floating point numbers (q to quit):\n");
    }

    return 0;
}

double calculate(double a, double b)
{
    return (a - b) / (a * b);
}