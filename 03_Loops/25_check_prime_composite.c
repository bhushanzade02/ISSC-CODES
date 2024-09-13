#include <stdio.h>
#include <stdbool.h>

int main()
{
    int num, flag = 1, i;
    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num <= 1)
    {
        flag = 0;
    }
    else
    {
        for (i = 2; i * i <= num; i++)
        {
            if (num % i == 0)
            {
                flag = 0;
                break;
            }
        }
    }

    if (flag)
        printf("%d is a prime number.\n", num);
    else
        printf("%d is a composite number.\n", num);

    return 0;
}