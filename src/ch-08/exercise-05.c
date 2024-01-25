#include <ctype.h>
#include <stdio.h>

int main(void)
{
    int min = 1;
    int max = 100;
    int guess;
    char response;

    printf("Pick an integer from 1 to 100. I will try to guess it.\n");
    printf("Respond with:\n");
    printf(" - letter C or c, Y or y, if my guess is correct\n");
    printf(" - letter L or l, if your number is lower\n");
    printf(" - letter H or h, if your number is higher\n");
    printf("Let's begin.\n");

    guess = (min + max) / 2;
    printf("Uh...is your number %d? (high, low or correct)\n", guess);

    response = tolower(getchar());
    while (response != 'c' && response != 'y')
    {
        if (response == 'l' || response == 'h')
        {
            if (min < max)
            {
                if (response == 'l')
                {
                    max = guess - 1;
                }
                if (response == 'h')
                {
                    min = guess + 1;
                }
                guess = (min + max) / 2;
                printf("Uh...is your number %d?  (high, low or correct)\n", guess);
            }
            else
            {
                printf("Sadly, my binary search strategy did not work.\n");
                return 1;
            }
        }
        else
        {
            printf("Sorry, I understand only C, L, H\n");
        }
        while (getchar() != '\n') /* skips the rest of the line */
        {
            continue;
        }
        response = tolower(getchar());
    }
    printf("I knew I could do it!\n");

    return 0;
}
