/* addemup.c -- five kinds of statements */
#include <stdio.h>

int main(void) /* finds sum of first cound integers */
{
    int count, sum; /* declaration statement */
    int num;

    count = 0; /* assignment statement */
    sum = 0;   /* ditto */
    printf("Enter a number: ");
    scanf("%d", &num);
    while (count++ < num)      /* while */
        sum = sum + count;     /* statement */
    printf("sum = %d\n", sum); /* function statement */

    return 0; /* return statemenet */
}