#include <stdio.h>

void copy_2darr(double target[][3], double source[][3], int rows, int cols);
void copy_arr(double target[], double source[], int n);
void show_arr(double arr[], int n);

int main(void)
{
    double source[2][3] = {{1.1, 2.2, 3.3}, {4.4, 5.5, 6.6}};
    double target[2][3];

    copy_2darr(target, source, 2, 3);
    printf("target:\n");
    printf("row 0: ");
    show_arr(target[0], 3);
    printf("row 1: ");
    show_arr(target[1], 3);

    return 0;
}

void copy_2darr(double target[][3], double source[][3], int rows, int cols)
{
    for (int row = 0; row < rows; row++)
    {
        copy_arr(target[row], source[row], 3);
    }
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