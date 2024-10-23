#include <stdio.h>
int main()
{
    int num;
    int sum=0;
    int avg;
    int i;
    printf("enter integrs");
    for (i = 0; i <5; i++)
    {
        scanf("%d", &num);
        sum+=num;
        avg=sum/5;
    }
    printf(" Average is %d",avg);
    return 0;
}