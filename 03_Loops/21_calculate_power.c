#include <stdio.h>

int main()
{
    long long int base, exp, res = 1;
    int i;
    printf("Enter base and exponent: ");
    scanf("%lld %lld", &base, &exp);

    for(i=0;i<exp;i++)
        res *= base;

    printf("%lld^%lld = %lld\n", base, exp, res);
    return 0;
}