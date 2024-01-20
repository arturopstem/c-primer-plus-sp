#include <stdio.h>

int main(void)
{
    const char INITIAL = 'F';
    const char LAST = 'A';

    for (char end = INITIAL; end >= LAST; end--)
    {
        for (char current = INITIAL; current >= end; current--)
        {
            printf("%c", current);
        }
        printf("\n");
    }

    return 0;
}