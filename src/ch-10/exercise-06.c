#include <stdio.h>

void show_arr(double arr[], int n);
void reverse_arr(double arr[], int n);

int main(void)
{
    double array[5] = {1.1, 2.2, 3.3, 4.4, 5.5};

    printf("array[5] = ");
    show_arr(array, 5);
    reverse_arr(array, 5);
    printf("reversed = ");
    show_arr(array, 5);

    return 0;
}

void reverse_arr(double arr[], int n)
{
    int swaps = n / 2;
    double temp;
    for (int i = 0; i < swaps; i++)
    {
        temp = arr[n - 1 - i];
        arr[n - 1 - i] = arr[i];
        arr[i] = temp;
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