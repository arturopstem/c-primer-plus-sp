#include <stdio.h>

void sort(double *, double *, double *);
void swap(double *, double *);

int main(void)
{
    double pi = 3.1415;
    double e = 2.7182;
    double gratio = 1.6180;

    printf("pi = %g, e = %g, gratio = %g\n", pi, e, gratio);
    printf("Sort ascending\n");
    sort(&pi, &e, &gratio);
    printf("pi = %g, e = %g, gratio = %g\n", pi, e, gratio);

    return 0;
}

void sort(double *a, double *b, double *c)
{
    if (*a > *b)
    {
        swap(a, b);
    }
    if (*b > *c)
    {
        swap(b, c);
    }
    if (*a > *b)
    {
        swap(a, b);
    }
}

void swap(double *a, double *b)
{
    double temp = *a;
    *a = *b;
    *b = temp;
}