#include <stdbool.h>
#include <stdio.h>

bool is_prime(int n);
int num_digits(int n);

int main(void)
{
    int number;
    int count;
    int i;
    int digits;

    printf("Enter a positive integer (q to quit): ");
    while (scanf("%d", &number) == 1 && number > 0)
    {
        digits = num_digits(number);
        for (i = 0, count = 0; i <= number; i++)
        {
            if (is_prime(i))
            {
                count++;
                printf("%*d", digits + 1, i);
                if (count % 10 == 0)
                {
                    printf("\n");
                }
                else
                {
                    printf(",");
                }
            }
        }
        if (count % 10 != 0)
        {
            printf("\b \n");
        }
        printf("Enter a positive integer (q to quit): ");
    }

    return 0;
}

bool is_prime(int n)
{
    if (n <= 1)
    {
        return false;
    }
    if (n > 2 && n % 2 == 0)
    {
        return false;
    }
    for (int i = 3; i * i <= n; i += 2)
    {
        if (n % i == 0)
        {
            return false;
        }
    }

    return true;
}

int num_digits(int n)
{
    int digits;

    digits = 0;
    do
    {
        n /= 10;
        digits++;
    } while (n != 0);

    return digits;
}