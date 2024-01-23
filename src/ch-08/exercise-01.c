#include <stdio.h>

int main(void)
{
    int ch;
    char prev;
    int count;

    printf("Count the number of characters until EOF(key: [Ctrl+D]):\n");
    count = 0;
    while ((ch = getchar()) != EOF)
    {
        count++;
        prev = ch;
    }
    if (prev != '\n')
    {
        putchar('\n');
    }
    printf("Number of characters: %d\n", count);

    return 0;
}