#include <stdio.h>
int main()
{
    int num, num2;
    printf("enter the value of num");
    scanf("%d", &num);
    printf("enter the value of num");
    scanf("%d", &num2);

    if (num > num2)
    {
        printf("%d is greater than %d ", num, num2);
    }
    else if (num < num2)
    {
        printf("%d is smamller than %d", num, num2);
    }
    else
    {
        printf("%d is neutral %d", num, num2);
    }
    return 0;
}