#include <stdio.h>
int main()
{
    int a, b, c;
    printf("enter a value");
    scanf("%d", &a);
    printf("enter a value");
    scanf("%d", &b);

    if (a < b)
    {
        printf("a is less than b");
    }

    else if (a = b)
    {
        printf("a is equal to b");
    }
    else
    {
        printf("b is graeter a");
    }
    return 0;
}