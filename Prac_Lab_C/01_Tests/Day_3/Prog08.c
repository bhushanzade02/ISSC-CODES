#include<stdio.h>
int main()
{
    int i;
    int sum=0;
    int num;
    printf("enter the value");
    scanf("%d",&num);


    for(;num>0;num/=10)
    {
        sum+=num%10;
       
    }
    printf("%d",sum);
    return 0;

}