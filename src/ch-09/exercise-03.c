#include <stdio.h>

void print(char ch, int num, int lines);

int main(void)
{
    print('#', 4, 6);
    return 0;
}

void print(char ch, int num, int lines)
{
    for (int i = 0; i < lines; i++)
    {
        for (int j = 0; j < num; j++)
        {
            putchar(ch);
        }
        putchar('\n');
    }
}