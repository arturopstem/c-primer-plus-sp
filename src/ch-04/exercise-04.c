#include <stdio.h>

int main(void)
{
    float height_inches;
    char name[20];

    printf("Enter your height in inches: ");
    scanf("%f", &height_inches);
    printf("Enter your name: ");
    scanf("%s", name);
    printf("%s, you are %.3f feet tall\n", name, height_inches / 12);

    return 0;
}