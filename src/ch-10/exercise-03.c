#include <stdio.h>

void show_arr(int arr[], int n);
int largest_int(int arr[], int n);

int main(void)
{
    int array[10] = {10, 200, 3, 40, 5000, 60, 700, 80, 90, 100};

    printf("array[10] = ");
    show_arr(array, 10);
    printf("The largest integer in the array is %d.\n", largest_int(array, 10));

    return 0;
}

int largest_int(int arr[], int n)
{
    int largest = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }

    return largest;
}

void show_arr(int arr[], int n)
{
    printf("{");
    for (short i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
        if (i < n - 1)
        {
            printf(", ");
        }
    }
    printf("}\n");
}