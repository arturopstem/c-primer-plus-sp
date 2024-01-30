#include <stdio.h>

void show_arr(double arr[], int n);
int index_largest_dbl(double arr[], int n);

int main(void)
{
    double array[5] = {1.1, 2.2, 30.3, 4.4, 5.5};

    printf("array[5] = ");
    show_arr(array, 5);
    printf("The index of the largest integer in the array is %d.\n", index_largest_dbl(array, 5));

    return 0;
}

int index_largest_dbl(double arr[], int n)
{
    double largest = 0;
    int index = -1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
            index = i;
        }
    }

    return index;
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