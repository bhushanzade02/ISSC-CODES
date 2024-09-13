#include <stdio.h>

int main()
{
    int num, sum=0;
    printf("Enter an integer: ");
    scanf("%d",&num);
    printf("Sum of digits of %d is ",num);
    while(num>0)
    {
        sum+= num%10;
        num/=10;
    }
    printf("%d\n",sum);
    return 0;
}