#include <stdio.h>

int main(void)
{
    const double CAPITAL = 100.0;
    double daphne, deirdre;
    double simple, compound;
    int year;

    daphne = deirdre = CAPITAL;
    simple = 10 / 100.0;
    compound = 5 / 100.0;
    year = 0;

    printf("%*sDaphne | Deidre\n", 10, "");
    printf("year %2d:  %-6.5g | %-6.5g\n", year, daphne, deirdre);
    do
    {
        year++;
        daphne += CAPITAL * simple;
        deirdre *= 1 + compound;
        printf("year %2d:  %-6.5g | %-6.5g\n", year, daphne, deirdre);
    } while (daphne >= deirdre);

    printf("\nIt takes %d years for Deidre's investment(%.5g) to exceed the value of Daphne's investment(%.5g).\n", year, deirdre, daphne);

    return 0;
}