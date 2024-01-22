#include <stdio.h>

int main(void)
{
    int input;
    int n_even, n_odd;
    int sum_even, sum_odd;

    n_even = n_odd = 0;
    sum_even = sum_odd = 0;

    printf("Read integers until 0 is entered:\n");
    while (scanf("%d", &input) == 1 && input != 0)
    {
        if (input % 2 == 0)
        {
            n_even++;
            sum_even += input;
        }
        else
        {
            n_odd++;
            sum_odd += input;
        }
    }

    if (n_even > 0)
    {
        printf("Number of even integers: %d\n", n_even);
        printf("Average value of the even integers: %.5g\n", (float)sum_even / n_even);
    }
    if (n_odd > 0)
    {
        printf("Number of odd integers: %d\n", n_odd);
        printf("Average value of the odd integers: %.5g\n", (float)sum_odd / n_odd);
    }

    return 0;
}