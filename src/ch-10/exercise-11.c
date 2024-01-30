#include <stdio.h>

void double_values(int n, int m, int arr[n][m]);
void show_array(int rows, int cols, int arr[rows][cols]);

int main(void)
{
    int array[3][5] = {
        {18, 3, 10, 16, 5},
        {13, 20, 7, 9, 1},
        {6, 11, 17, 2, 4},
    };

    printf("array[3][5] = ");
    show_array(3, 5, array);
    printf("\n");

    double_values(3, 5, array);
    printf("array[3][5] = ");
    show_array(3, 5, array);

    return 0;
}

void double_values(int n, int m, int arr[n][m])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            arr[i][j] *= 2;
        }
    }
}

void show_array(int rows, int cols, int arr[rows][cols])
{
    printf("{\n");
    for (int r = 0; r < rows; r++)
    {
        printf("%*s{", 4, "");
        for (int c = 0; c < cols; c++)
        {
            printf("%d", arr[r][c]);
            if (c < cols - 1)
            {
                printf(", ");
            }
        }
        printf("},\n");
    }
    printf("}\n");
}