#include <stdio.h>

#define DAYS_PER_WEEK 7

int main(void)
{
    int total_days;
    int weeks, days;

    printf("Enter a number of days (<= 0 to quit):\n");
    scanf("%d", &total_days);
    while (total_days > 0)
    {
        weeks = total_days / DAYS_PER_WEEK;
        days = total_days % DAYS_PER_WEEK;
        printf("%d days are %d weeks, %d days.\n", total_days, weeks, days);
        printf("Enter a number of days (<= 0 to quit):\n");
        scanf("%d", &total_days);
    }
    printf("Bye!\n");

    return 0;
}