#include <stdio.h>

int main(void)
{
    char ch, prev;
    int sequences;

    sequences = 0;
    prev = '\0';

    printf("Enter some text (# to terminate):\n");
    while ((ch = getchar()) != '#')
    {
        if (prev == 'e' && ch == 'i')
        {
            sequences++;
        }
        prev = ch;
    }
    printf("Number of \"ei\" sequences: %d\n", sequences);

    return 0;
}