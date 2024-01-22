#include <stdio.h>

int main(void)
{
    char ch, prev;
    int substitutions;

    substitutions = 0;
    printf("Enter some text (# to terminate):\n");
    while ((ch = getchar()) != '#')
    {
        switch (ch)
        {
        case '.':
            substitutions++;
            printf("!");
            break;
        case '!':
            substitutions++;
            printf("!!");
            break;

        default:
            printf("%c", ch);
            break;
        }
        prev = ch;
    }
    if (prev != '\n')
    {
        printf("\n");
    }
    printf("Number of substitutions made: %d\n", substitutions);

    return 0;
}