#include <float.h>
#include <stdio.h>

void show_arr(double arr[], int n);
double difference(double arr[], int n);

int main(void)
{
    double array[5] = {1.1, 2.2, 3.3, 4.4, 5.5};

    printf("array[5] = ");
    show_arr(array, 5);
    printf("The difference of the largest and smallest value is %g.\n", difference(array, 5));

    return 0;
}

double difference(double arr[], int n)
{
    double largest = -DBL_MAX;
    double smallest = DBL_MAX;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }

    return largest - smallest;
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