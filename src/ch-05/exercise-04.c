#include <stdio.h>

#define CM_PER_FOOT 30.48
#define INCH_PER_FOOT 12

int main(void)
{
    float height;
    int feet;
    float inches;

    printf("Enter a height in centimeters: ");
    scanf("%f", &height);
    while (height > 0)
    {
        feet = height / CM_PER_FOOT;
        inches = (height / CM_PER_FOOT - feet) * 12;
        printf("%.1f cm = %d feet, %.1f inches\n", height, feet, inches);
        printf("Enter a height in centimeters (<=0 to quit): ");
        scanf("%f", &height);
    }
    printf("bye\n");

    return 0;
}