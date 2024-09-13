#include <stdio.h>

int main()
{
    int num, rev=0;
    printf("Enter an integer: ");
    scanf("%d",&num);
    while(num>0){
        rev = rev *10 + num%10;
        num/=10;
    }
    printf("Reverse of number : %d\n",rev);
    return 0;
}