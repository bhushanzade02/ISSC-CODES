#include <stdio.h>

int main()
{
    int num, i, sum = 0;
    printf("Enter an integer: ");
    scanf("%d",&num);

    while(num!=0)
    {
        i = num%10;
        if (i%2 > 0)
            sum += i;

        num /= 10;
    }
    printf("Sum of odd digits is %d\n", sum);
    return 0;
}