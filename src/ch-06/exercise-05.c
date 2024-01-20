#include <stdio.h>

int main(void)
{
    char ch;
    char middle;
    char current_char;
    int rows;
    int whitespaces;
    int counter;

    printf("Enter an uppercase letter: ");
    scanf("%c", &ch);
    rows = ch - 'A' + 1;
    for (char i = 0; i < rows; i++)
    {
        middle = 'A' + i;
        whitespaces = rows - (i + 1);
        for (counter = 0; counter < whitespaces; counter++)
        {
            printf(" ");
        }
        for (current_char = 'A'; current_char < middle; current_char++)
        {
            printf("%c", current_char);
        }
        for (current_char = middle; current_char >= 'A'; current_char--)
        {
            printf("%c", current_char);
        }
        printf("\n");
    }

    return 0;
}