#include <stdio.h>

int main(void)
{
    float SECONDS_IN_YEAR = 3.156E7f;
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);
    printf("It's equivalent to %e seconds\n", age * SECONDS_IN_YEAR);

    return 0;
}