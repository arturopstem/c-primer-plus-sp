#include <ctype.h>
#include <stdio.h>

int main(void)
{
    char ch;
    int count;

    count = 0;

    printf("Enter text (EOF to quit):\n");
    while ((ch = getchar()) != EOF)
    {
        if (!isascii(ch))
            continue;

        // increase the counter
        count++;

        // print characters info
        switch (ch)
        {
        case '\t':
            printf("'\\t' =%4d", ch);
            break;
        case '\n':
            printf("'\\n' =%4d", ch);
            break;

        default:
            printf(" '%c' =%4d", ch, ch);
            break;
        }

        // print end of info
        if (ch == '\n')
        {
            count = 0; // reset counter
            printf("\n");
        }
        else if (count % 10 == 0)
        {
            printf("\n");
        }
        else
        {
            printf(", ");
        }
    }
    printf("Bye!\n");

    return 0;
}