#include <stdio.h>
int main()
{
    int num;
   
    printf("enter a number:");
    scanf("%d", &num);
    if (num > 0)
    {
        printf("%d positive",num);
    }
    else
    {
        printf("%d negative",num);
    }
    return 0;
}