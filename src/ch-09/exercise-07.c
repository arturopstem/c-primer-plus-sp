#include <ctype.h>
#include <stdio.h>

int get_location(char ch);

int main(void)
{
    char ch;

    printf("Press a key (EOF to quit): ");
    while ((ch = getchar()) != EOF)
    {
        if (isalpha(ch))
        {
            printf("\t'%c' is a letter\n", ch);
            printf("\tnumerical location: %d\n\n", get_location(ch));
        }
        else
        {
            if (isblank(ch) || ch == '\n')
            {
                printf("\tcharacter entered is not a letter\n\n");
            }
            else
            {
                printf("\t'%c' is not a letter\n\n", ch);
            }
        }
        if (ch != '\n')
        {
            while (getchar() != '\n')
            {
                continue;
            }
        }
        printf("Press a key (EOF to quit): ");
    }
    printf("\nBye!\n");

    return 0;
}

int get_location(char ch)
{
    ch = toupper(ch);
    if (isalpha(ch))
    {
        return ch - 'A' + 1;
    }
    else
    {
        return -1;
    }
}