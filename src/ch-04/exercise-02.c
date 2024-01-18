#include <stdio.h>
#include <string.h>

int main(void)
{
    char first_name[20];

    printf("What's your first name? ");
    scanf("%s", first_name);
    printf("\"%s\"\n", first_name);
    printf("%20s\n", first_name);
    printf("\"%-20s\"\n", first_name);
    printf("%*s\n", (int)strlen(first_name) + 3, first_name);

    return 0;
}