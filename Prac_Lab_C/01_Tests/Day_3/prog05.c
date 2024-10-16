#include<stdio.h>
int main()
{
    int i,num;
    int sum=0;
    printf("enter a number ");
    scanf("%d",&num);


    for(i=0;i<=num;i++)
    {
        sum=sum+i;
        printf("%d\n",i);
        
    }
    printf("%d",sum);
    return 0;
}