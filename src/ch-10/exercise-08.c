#include <stdio.h>

void copy_arr(double target[], double source[], int n);
void show_arr(double arr[], int n);

int main(void)
{
    double source[7] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7};
    double target[3];

    printf("source[7] = ");
    show_arr(source, 7);

    copy_arr(target, source + 2, 3);
    printf("target[3] = ");
    show_arr(target, 3);
    return 0;
}

void copy_arr(double target[], double source[], int n)
{
    for (short i = 0; i < n; i++)
    {
        target[i] = source[i];
    }
}

void show_arr(double arr[], int n)
{
    printf("{");
    for (int i = 0; i < n; i++)
    {
        printf("%.1f", arr[i]);
        if (i < n - 1)
        {
            printf(", ");
        }
    }
    printf("}\n");
}