/* doubleincl.c -- include header twice */
#include <stdio.h>
#include "names.h"
#include "names.h" // accidental seconds inclusion

int main()
{
    names winner = {"Less", "Ismoor"};
    printf("The winner is %s %s.\n", winner.first, winner.last);

    return 0;
}