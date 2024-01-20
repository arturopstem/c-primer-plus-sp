#include <stdio.h>

int main(void)
{
    int lower, upper;
    int i, square, cube;

    printf("Enter the lower limit: ");
    scanf("%d", &lower);
    printf("Enter the upper limit: ");
    scanf("%d", &upper);

    printf("%10s%10s%10s\n", "integer", "square", "cube");
    for (i = lower; i <= upper; i++)
    {
        square = i * i;
        cube = i * square;
        printf("%10d%10d%10d\n", i, square, cube);
    }

    return 0;
}