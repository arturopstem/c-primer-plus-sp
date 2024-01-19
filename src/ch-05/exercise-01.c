#include <stdio.h>

#define M_PER_H 60

int main(void)
{
    int time;
    int hours, mins;

    printf("Convert time in minutes to time in hours and minutes\n");
    printf("Enter the number of minutes (0 or less to quit):\n");
    scanf("%d", &time);
    while (time > 0)
    {
        hours = time / M_PER_H;
        mins = time % M_PER_H;
        printf("%d mins are equivalent to %d hrs, %d mins.\n", time, hours, mins);
        printf("Enter the number of minutes (0 or less to quit):\n");
        scanf("%d", &time);
    }
    printf("Bye!\n");

    return 0;
}