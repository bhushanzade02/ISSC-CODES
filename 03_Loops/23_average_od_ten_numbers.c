#include <stdio.h>

int main()
{
    int n,i;
    float sum=0;
    printf("Enter 10 integers:  ");

    for(i = 0;i<10;i++){
        scanf("%d",&n);
        sum+=n;
    }

    printf("Sum : %.2f\n",sum);
    printf("Average : %.2f\n",sum/10);

    return 0;
}