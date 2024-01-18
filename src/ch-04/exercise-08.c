#include <stdio.h>

#define GALLON_LITER 3.785
#define MILE_KM 1.609

int main(void)
{
    float miles_traveled;
    float gallons_consumed;
    float miles_per_gallon;
    float liters_per_100km;

    printf("Enter number of miles traveled: ");
    scanf("%f", &miles_traveled);
    printf("Enter the number of gallons of gasoline consumed: ");
    scanf("%f", &gallons_consumed);

    miles_per_gallon = miles_traveled / gallons_consumed;
    printf("miles-per-gallon: %.1f\n", miles_per_gallon);

    liters_per_100km = miles_per_gallon * 100.0f / GALLON_LITER / MILE_KM;
    printf("liters-per-100km: %.1f\n", liters_per_100km);

    return 0;
}