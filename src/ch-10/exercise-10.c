#include <stdio.h>

void show_arr(int arr[], int n);
void function(int target[], int source1[], int source2[], int n);

int main(void)
{
    int array1[5] = {12, 17, 4, 8, 15};
    int array2[5] = {3, 19, 11, 7, 2};
    int array3[5];

    function(array3, array1, array2, 5);
    printf("array3[5] = ");
    show_arr(array3, 5);

    return 0;
}

void function(int target[], int source1[], int source2[], int n)
{
    for (int i = 0; i < n; i++)
    {
        target[i] = source1[i] + source2[i];
    }
}

void show_arr(int arr[], int n)
{
    printf("{");
    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
        if (i < n - 1)
        {
            printf(", ");
        }
    }
    printf("}\n");
}