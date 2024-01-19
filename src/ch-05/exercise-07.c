#include <stdio.h>

double cube(double n);

int main(void)
{
    double number;
    double cubed;

    printf("Enter a number: ");
    scanf("%lf", &number);
    cubed = cube(number);
    printf("%.2f cubed equals %.2f\n", number, cubed);

    return 0;
}

double cube(double n)
{
    return n * n * n;
}