#include <ctype.h>
#include <stdio.h>

int main(void)
{
    int lowercase = 0;
    int uppercase = 0;
    int other = 0;
    char ch;

    while ((ch = getchar()) != EOF)
    {
        if (!isascii(ch))
            continue;

        if (isalpha(ch))
        {
            if (islower(ch))
            {
                lowercase++;
            }
            else
            {
                uppercase++;
            }
        }
        else
        {
            other++;
        }
    }
    printf("\n");
    printf("Lowercase characters: %6d\n", lowercase);
    printf("Uppercase characters: %6d\n", uppercase);
    printf("Other characters    : %6d\n", other);

    return 0;
}