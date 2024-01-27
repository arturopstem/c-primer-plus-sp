#include <stdio.h>

void chline(char ch, int i, int j);

int main(void)
{
    for (int col = 0; col < 10; col++)
    {
        printf("col %d\t", col);
    }
    putchar('\n');
    chline('*', 3, 7);
    return 0;
}

void chline(char ch, int i, int j)
{

    for (int col = 0; col <= j; col++)
    {
        if (col >= i && col <= j)
        {
            putchar(ch);
        }

        if (col < j)
        {
            putchar('\t');
        }
    }
    printf("\n");
}