#include <stdio.h>

int main() 
{
    int a,b,c;
    printf("Enter three integers: ");
    scanf("%d %d %d",&a,&b,&c);

    if (a >= b && a >= c) 
        printf("The largest number = %d\n", a);
    else if (b >= a && b >= c) 
        printf("The largest number = %d\n", b);
    else 
        printf("The largest number = %d\n", c);

    return 0;
}