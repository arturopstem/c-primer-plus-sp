#include <stdio.h>

#define LETTERS 26

int main(void)
{
    char alphabet[LETTERS];
    int i;

    for (i = 0; i < LETTERS; i++)
    {
        alphabet[i] = 'a' + i;
    }
    for (i = 0; i < LETTERS; i++)
    {
        printf("%c ", alphabet[i]);
    }
    printf("\n");

    return 0;
}