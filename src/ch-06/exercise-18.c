#include <stdio.h>

int main(void)
{
    const int DUNBAR = 150;
    int rabnud, week;

    rabnud = 5;
    week = 0;
    printf("Friend count\n");
    printf("initial: %3d\n", rabnud);
    do
    {
        week++;
        rabnud -= week;
        rabnud *= 2;
        printf("week %2d: %3d\n", week, rabnud);
    } while (rabnud <= DUNBAR);

    return 0;
}