#include <stdio.h>
int main()
{
    int i;
    int n;
    int num=0;
    printf("enter a value");
    scanf("%d", &n);
    printf("enter values");
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &num);
    }
    while (num>0)
    {
         printf("%d ",num);
         num/10;

    }
   
    return 0;
}