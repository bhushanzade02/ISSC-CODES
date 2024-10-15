#include <stdio.h>
int main()
{
    double celsius, fahren, conversion;
    printf("enter a value of celsius");
    scanf("%lf", &celsius);
    

    fahren = (celsius * 9.0 / 5.0) + 32;

    printf("%lf", fahren);
    return 0;
}