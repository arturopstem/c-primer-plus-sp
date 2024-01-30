#include <stdio.h>

void show_arr(double arr[], int n);
void copy_arr(double target[], double source[], int n);
void copy_ptr(double *target, double *source, int n);
void copy_ptrs(double *target, double *source, double *pt_past_last);

int main(void)
{
    double source[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    double target1[5];
    double target2[5];
    double target3[5];

    printf(" source[5] = ");
    show_arr(source, 5);
    printf("\n");

    printf("target1[5] = ");
    show_arr(target1, 5);
    copy_arr(target1, source, 5);
    printf("target1[5] = ");
    show_arr(target1, 5);
    printf("\n");

    printf("target2[5] = ");
    show_arr(target2, 5);
    copy_ptr(target2, source, 5);
    printf("target2[5] = ");
    show_arr(target2, 5);
    printf("\n");

    printf("target3[5] = ");
    show_arr(target3, 5);
    copy_ptrs(target3, source, source + 5);
    printf("target3[5] = ");
    show_arr(target3, 5);
    printf("\n");

    return 0;
}

void show_arr(double arr[], int n)
{
    printf("{");
    for (short i = 0; i < n; i++)
    {
        printf("%.1f", arr[i]);
        if (i < n - 1)
        {
            printf(", ");
        }
    }
    printf("}\n");
}

void copy_arr(double target[], double source[], int n)
{
    for (short i = 0; i < n; i++)
    {
        target[i] = source[i];
    }
}

void copy_ptr(double *target, double *source, int n)
{
    for (short i = 0; i < n; i++)
    {
        *(target + i) = *(source + i);
    }
}

void copy_ptrs(double *target, double *source, double *pt_past_last)
{
    while (source < pt_past_last)
    {
        *target = *source;
        source++;
        target++;
    }
}