#include <stdio.h>

void show_array(int, int, double[*][*]);
void copy_nm_arr(int, int, double[*][*], double[*][*]);

int main(void)
{
    double source[3][5] = {
        {10.5, 4.7, 15.3, 1.8, 19.4},
        {8.2, 17.6, 12.1, 3.9, 6.0},
        {16.4, 2.5, 9.8, 18.9, 13.0},
    };
    double target[3][5];

    printf("source[3][5] = ");
    show_array(3, 5, source);
    printf("\n");

    copy_nm_arr(3, 5, target, source);
    printf("target[3][5] = ");
    show_array(3, 5, target);

    return 0;
}

void copy_nm_arr(int rows, int cols, double target[rows][cols], double source[rows][cols])
{
    for (int r = 0; r < rows; r++)
    {
        for (int c = 0; c < cols; c++)
        {
            target[r][c] = source[r][c];
        }
    }
}

void show_array(int rows, int cols, double arr[rows][cols])
{
    printf("{\n");
    for (int r = 0; r < rows; r++)
    {
        printf("%*s{", 4, "");
        for (int c = 0; c < cols; c++)
        {
            printf("%.1f", arr[r][c]);
            if (c < cols - 1)
            {
                printf(", ");
            }
        }
        printf("},\n");
    }
    printf("}\n");
}