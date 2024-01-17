#include <stdio.h>

int main(void)
{
    float vol_cups;
    float vol_pints;
    float vol_ounces;
    float vol_tablespoons;
    float vol_teaspoons;

    printf("Enter the volume in cups: ");
    scanf("%f", &vol_cups);

    vol_pints = vol_cups / 2;
    printf("Equivalent to %.2fpints\n", vol_pints);

    vol_ounces = vol_cups * 8;
    printf("Equivalent to %.2founces\n", vol_ounces);

    vol_tablespoons = vol_ounces * 2;
    printf("Equivalent to %.2ftablespoons\n", vol_tablespoons);

    vol_teaspoons = vol_tablespoons * 3;
    printf("Equivalent to %.2fteaspoons\n", vol_teaspoons);

    return 0;
}