#include <stdio.h>
int main()
{
    int num;
    printf("enter the value of num");
    scanf("%d", &num);

    if (num > 0)
    {
        printf("%d is positve number", num);
    }
    else if(num<0)
    {
        printf("%d is negative number", num);
    }
    else 
    {
        printf("%d is neutral",num);
    }
    return 0;
}