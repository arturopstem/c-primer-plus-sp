#include <stdio.h>

int main(void)
{
    float ONE_INCH = 2.54f; /* cm */
    float height;           /* inches */

    printf("Enter your height(inches): ");
    scanf("%f", &height);
    printf("You are %.2fcm tall.\n", height * ONE_INCH);

    return 0;
}