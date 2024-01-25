#include <stdbool.h>
#include <stdio.h>

char get_choice(void);
char get_first(void);
double get_number(void);
bool is_choice(char ch);

void add(void);
void subtract(void);
void multiply(void);
void divide(void);

double num1, num2;

int main(void)
{
    int choice;

    while ((choice = get_choice()) != 'q')
    {
        switch (choice)
        {
        case 'a':
            add();
            break;
        case 's':
            subtract();
            break;
        case 'm':
            multiply();
            break;
        case 'd':
            divide();
            break;

        default:
            printf("Program error!\n");
            break;
        }
    }
    printf("Bye.\n");

    return 0;
}

void get_operands(void)
{
    printf("Enter first number: ");
    num1 = get_number();
    printf("Enter second number: ");
    num2 = get_number();
}

void add(void)
{
    get_operands();
    printf("%g + %g = %g\n", num1, num2, num1 + num2);
}

void subtract()
{
    get_operands();
    printf("%g - %g = %g\n", num1, num2, num1 - num2);
}

void multiply()
{
    get_operands();
    printf("%g * %g = %g\n", num1, num2, num1 * num2);
}

void divide()
{
    get_operands();
    while (num2 == 0)
    {
        printf("Cant divide by 0. Enter a new second number: ");
        num2 = get_number();
    }
    printf("%g / %g = %g\n", num1, num2, num1 / num2);
}

char get_choice(void)
{
    int ch;

    printf("Enter the operation of your choice:\n");
    printf("a. add           s. subtract\n");
    printf("m. multiply      d. divide\n");
    printf("q. quit\n");

    ch = get_first();
    while (!is_choice(ch))
    {
        printf("Please respond with a, s, m, d, or q.\n");
        ch = get_first();
    }

    return ch;
}

bool is_choice(char ch)
{
    switch (ch)
    {
    case 'a':
    case 's':
    case 'm':
    case 'd':
    case 'q':
        return true;
    default:
        return false;
    }
}

char get_first(void)
{
    char ch;
    scanf(" %c", &ch);
    while (getchar() != '\n')
    {
        continue;
    }

    return ch;
}

double get_number(void)
{
    double input;
    char ch;

    while (scanf("%lf", &input) != 1)
    {
        while ((ch = getchar()) != '\n')
        {
            putchar(ch); // dispose of bad input
        }
        printf(" is not a number.\nPease enter a ");
        printf("number value, such as 2.5, -1.78E8, or 3: ");
    }
    while (getchar() != '\n')
    {
        continue;
    }

    return input;
}