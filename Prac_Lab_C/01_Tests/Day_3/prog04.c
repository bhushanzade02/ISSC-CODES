#include <stdio.h>
int main()
{
    int num;
    printf("enter a value");
    scanf("%d", &num);
 int i=1;
    while (i <= num)
    {
    printf("%d",i);
    i+=2;
    }
    return 0;
}