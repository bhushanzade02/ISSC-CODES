#include <stdio.h>

int main()
{
    int num, i, sum=0;
    printf("Enter an integer: ");
    scanf("%d",&num);

    for(i=0;i<=num;i++)
        if(i%2)
            continue;
        else
            sum+=i;
        
    printf("Sum of even numbers up to %d is %d\n", num, sum);
    return 0;
}