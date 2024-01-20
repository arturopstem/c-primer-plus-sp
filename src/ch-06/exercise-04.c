#include <stdio.h>

int main(void)
{
    char end_row;
    char current_ch;
    int row;

    for (row = 0, current_ch = 'A'; current_ch + row <= 'Z'; row++)
    {
        for (end_row = current_ch + row; current_ch <= end_row; current_ch++)
        {
            printf("%c", current_ch);
        }
        printf("\n");
    }

    return 0;
}