/* format.c -- format a string */
#include <stdio.h>

#define MAX 20

char *s_gets(char *st, int n);

int main(void)
{
    char first[MAX];
    char last[MAX];
    char formal[2 * MAX + 10];
    double prize;

    puts("Enter your first name:");
    s_gets(first, MAX);
    puts("Enter your last name:");
    s_gets(last, MAX);
    puts("Enter your prize money:");
    scanf("%lf", &prize);
    /*
        The compiler calculates the total width of the output str
        it throws a warning and note because the format string
        length evalueates a length that overflows by 1 when including
        new line char. Thats in the case of a min 6 field width float.
        In the case the field width of float is larger than 6 and
        the char array last is full, the output formal overflows.
     */
    // sprintf(formal, "%s, %-19s: $%6.2f\n", last, first, prize);

    // here I just removed the newline char so it meets the formal max length
    sprintf(formal, "%s, %-19s: $%6.2f", last, first, prize);
    puts(formal);

    return 0;
}

char *s_gets(char *st, int n)
{
    char *ret_val;
    int i = 0;

    ret_val = fgets(st, n, stdin);
    if (ret_val) // i.e., ret_val != NULL
    {
        while (st[i] != '\n' && st[i] != '\0')
        {
            i++;
        }
        if (st[i] == '\n')
        {
            st[i] = '\0';
        }
        else // must have words[i] == '\0'
        {
            while (getchar() != '\n')
            {
                continue;
            }
        }
    }
    return ret_val;
}