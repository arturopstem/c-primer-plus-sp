#include <stdio.h>

int main(void)
{
    char ch;
    int s_ch; // number of spaces characters
    int n_ch; // number of newline characters
    int o_ch; // number of other characters

    s_ch = n_ch = o_ch = 0;
    printf("Enter some text and finish it with #:\n");
    while ((ch = getchar()) != '#')
    {
        switch (ch)
        {
        case ' ':
            s_ch++;
            break;
        case '\n':
            n_ch++;
            break;

        default:
            o_ch++;
            break;
        }
    }
    if (s_ch + n_ch + o_ch > 0)
    {
        printf("\n%d spaces, %d newlines, %d other characters\n", s_ch, n_ch, o_ch);
    }
    else
    {
        printf("\nNo entry.\n");
    }
    printf("Bye!\n");

    return 0;
}