#include <stdio.h>

int main()
{
    int n,i,sum=0,mul=1;
    printf("Enter 5 integers:  ");

    for(i = 0;i<5;i++){
        scanf("%d",&n);
        sum+=n;
        mul*=n;
    }

    printf("Sum: %d\n",sum);
    printf("Multiplication: %d\n",mul);

    return 0;
}