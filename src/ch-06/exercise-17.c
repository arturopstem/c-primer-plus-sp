#include <stdio.h>

int main(void)
{
    const int CAPITAL = 1000000;
    double chuckie;
    double interest;
    int year;

    chuckie = CAPITAL;
    interest = 8 / 100.0;
    year = 0;

    do
    {
        year++;
        chuckie *= 1 + interest;
        chuckie -= 100000;

    } while (chuckie > 0);

    printf("It took %d years for Chuckie Lucky to empty his account.\n", year);

    return 0;
}