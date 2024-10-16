#include<stdio.h>
int main()
{
    int num,i;
    printf("enter av value");
    scanf("%d",&num);

    for(i=0;i<=num;i+=3)
    {
        printf("%d\n",i);
    }
    return 0;
}