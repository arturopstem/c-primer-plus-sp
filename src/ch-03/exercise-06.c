#include <stdio.h>

int main(void)
{
    double MOLECULE_WEIGHT = 3e-23; /* grams */
    int QUART_OF_WATER = 950;       /* grams */
    double quarts;
    double water_molecules;

    printf("Enter the amoun of water(in quarts): ");
    scanf("%lf", &quarts);
    water_molecules = QUART_OF_WATER * quarts / MOLECULE_WEIGHT;
    printf("Number of water molecules: %e\n", water_molecules);

    return 0;
}