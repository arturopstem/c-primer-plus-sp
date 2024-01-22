#include <stdio.h>

int main(void)
{
    char ch, prev;
    int substitutions;

    substitutions = 0;
    printf("Enter some text (# to terminate):\n");
    while ((ch = getchar()) != '#')
    {
        if (ch == '.')
        {
            substitutions++;
            printf("!");
        }
        else if (ch == '!')
        {
            substitutions++;
            printf("!!");
        }
        else
        {
            printf("%c", ch);
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