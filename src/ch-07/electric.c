/* electric.c -- calculates electric bill */
#include <stdio.h>

#define RATE1 0.13230 // rate for first 360kWh
#define RATE2 0.15040 // rate for next 108kWh
#define RATE3 0.30025 // rate for next 252 kWh
#define RATE4 0.34025 // rate for over 720 kWh
#define BREAK1 360.0  // first breakpoint for rates
#define BREAK2 468.0  // second breakpoint for rates
#define BREAK3 720.0  // third breakpoint for rates
#define BASE1 (RATE1 * BREAK1)
// cost for 360 kWh
#define BASE2 (BASE1 + (RATE2 * (BREAK2 - BREAK1)))
// cost for 468 kWh
#define BASE3 (BASE1 + BASE2 + (RATE3 * (BREAK3 - BREAK2)))
// cost for 720 kWh

int main(void)
{
    double kwh;  // kilowatt-hours used
    double bill; // charges

    printf("Please enter the kWh used.\n");
    scanf("%lf", &kwh); // %lf for type double
    if (kwh <= BREAK1)
    {

        bill = RATE1 * kwh;
    }
    else if (kwh <= BREAK2) // kWh between 360 and 468
    {
        bill = BASE1 + (RATE2 * (kwh - BREAK1));
    }
    else if (kwh <= BREAK3) // kWh between 468 and 720
    {
        bill = BASE2 + (RATE3 * (kwh - BREAK2));
    }
    else // kWh above 680
    {
        bill = BASE3 + (RATE4 * (kwh - BREAK3));
    }
    printf("The charge for %.1f kWh is $%1.2f.\n", kwh, bill);

    return 0;
}