#include <stdio.h>

int main()
{
    int num, i, sum=0;
    printf("Enter an integer: ");
    scanf("%d",&num);

    for(i=0;i<=num;i++)
        if(i%2)
            sum+=i;
        else
            continue;
        
    printf("Sum of odd numbers up to %d is %d\n", num, sum);
    return 0;
}