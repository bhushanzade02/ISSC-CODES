#include <stdio.h>
int main()
{

    double num1, num2, result;

    char operator;
    printf("enter value Num 1: ");
    scanf("%lf", &num1);
    printf("enter a value Num 2: ");
    scanf("%lf", &num2);
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);

    switch (operator)
    {
    case '+':
        result = num1 + num2;
        printf("%lf ", result);
        break;
    case '*':
        result = num1 * num2;
        printf("%lf ", result);
        break;

    case '-':
        result = num1 - num2;
        printf("%lf ", result);
        break;
    case '/':
        result = num1 / num2;
        printf("%lf ", result);
        break;
    default:
        printf("Error: Invalid operator. Please use +, -, *, or /.\n");
        break;
    }
    return 0;
}
