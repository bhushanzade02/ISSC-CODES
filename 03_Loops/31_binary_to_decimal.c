#include <stdio.h>
#include <math.h>

int main()
{
    int binary, decimal=0, i;
    printf("Enter a binary number: ");
    scanf("%d", &binary);
    printf("Decimal equivalent of %d is",binary);
    
    for(i=0;binary!=0;i++)
    {
        decimal+=(binary%10) * pow(2,i);
        binary /= 10;
    }

    printf(" %d\n", decimal);
    return 0;
}