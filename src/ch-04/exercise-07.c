#include <stdio.h>
#include <float.h>

int main(void)
{
    double double_var = 1.0 / 3.0;
    float float_var = 1.0 / 3.0;

    printf("double: %.4f, float: %.4f\n", double_var, float_var);
    printf("double: %.12f, float: %.12f\n", double_var, float_var);
    printf("double: %.16f, float: %.16f\n", double_var, float_var);

    printf("DBL_DIG: %d, FLT_DIG: %d\n", DBL_DIG, FLT_DIG);

    return 0;
}