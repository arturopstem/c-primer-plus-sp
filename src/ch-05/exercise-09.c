#include <stdio.h>

void Temperatures(double temp_F);

int main(void)
{
    double temp_F;
    int read = 0;

    printf("Enter a temperature in Fahrenheit (q or nonnumeric to quit): ");
    read = scanf("%lf", &temp_F);
    while (read == 1)
    {
        Temperatures(temp_F);
        printf("Enter a temperature in Fahrenheit (q or nonnumeric to quit): ");
        read = scanf("%lf", &temp_F);
    }
    printf("Done\n");

    return 0;
}

void Temperatures(double temp_F)
{
    double celcius = 5.0 / 9.0 * (temp_F - 32.0);
    double kelvin = celcius - 273.16;
    printf("%.2f°F = %.2f°C = %.2fK\n", temp_F, celcius, kelvin);
}
