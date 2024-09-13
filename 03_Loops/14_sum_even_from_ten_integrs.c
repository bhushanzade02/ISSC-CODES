#include <stdio.h>

int main()
{
    int n,i,sum=0;
    printf("Enter 10 integers:  ");

    for(i = 0;i<10;i++){
        scanf("%d",&n);
        if(n%2==0)
            sum+=n;
    }

    printf("Sum : %d\n",sum);

    return 0;
}