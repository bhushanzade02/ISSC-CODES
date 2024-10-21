#include<stdio.h>
int main()
{
    int i;
    int num;
    printf("enter a value of num");
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
       printf("%d square is %d",i,i*i);
    }
    return 0;
}