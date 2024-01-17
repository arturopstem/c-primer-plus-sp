#include <stdio.h>

int main(void)
{
    int INT_MAX = 2147483647;
    int INT_OVERFLOW = INT_MAX + 1;
    printf("Integer overflow: %d\n", INT_OVERFLOW);

    float FLOAT_MAX = 3.40282e+38;
    float FLOAT_OVERFLOW = FLOAT_MAX * 10.0f;
    printf("Float overflow: %f\n", FLOAT_OVERFLOW);

    return 0;
}