#include <stdio.h>
#include <string.h>

int main(void)
{
    char word[20];
    int length;
    int i;

    printf("Enter a word: ");
    scanf("%s", word);
    length = strlen(word);
    printf("backward    : ");
    for (i = length - 1; i >= 0; i--)
    {
        printf("%c", word[i]);
    }
    printf("\n");

    return 0;
}