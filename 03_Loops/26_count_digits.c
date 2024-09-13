#include <stdio.h>

int main()
{
    int num, count=0;
    printf("Enter an integer: ");
    scanf("%d",&num);
    do{
        count++;
        num/=10;
    }while(num>0);
    printf("Number of digits : %d\n",count);
    return 0;
}