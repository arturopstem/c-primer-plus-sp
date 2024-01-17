#include <stdio.h>

int main(void)
{
    int code;

    printf("Enter an ASCII code value: ");
    scanf("%d", &code);

    printf("ASCII code %d is character '%c'\n", code, code);

    return 0;
}