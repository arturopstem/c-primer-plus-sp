#include <stdio.h>

int main(void)
{
    char line_input[255];
    char ch;
    int index;

    printf("Enter a line of text:\n");
    index = 0;
    scanf("%c", &ch);
    while (ch != '\n')
    {
        line_input[index] = ch;
        index++;
        scanf("%c", &ch);
    }
    line_input[index] = '\0';

    /* Print the line in reverse order */
    printf("text %creversed:\n", '\0');
    for (index; index >= 0; index--)
    {
        printf("%c", line_input[index]);
    }
    printf("\n");

    return 0;
}