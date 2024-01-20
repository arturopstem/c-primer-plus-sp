#include <stdio.h>

int main(void)
{
    int number_of_terms;
    double term, sum;
    int i;
    int sign;

    printf("Enter the number of terms of the series (q to quit): ");

    while (scanf("%d", &number_of_terms) == 1)
    {
        for (i = 0, sum = 0; i < number_of_terms; i++)
        {
            term = 1.0 / (i + 1);
            sum += term;
        }
        printf("sum of all positives 1/n: %10.6f\n", sum);

        for (i = 0, sum = 0, sign = 1; i < number_of_terms; i++, sign *= -1)
        {
            term = 1.0 / (i + 1) * sign;
            sum += term;
        }
        printf("sum of all alternate 1/n: %10.6f\n", sum);
        printf("\nEnter the number of terms of the series (q to quit): ");
    }
    printf("\nDone\n");

    return 0;
}