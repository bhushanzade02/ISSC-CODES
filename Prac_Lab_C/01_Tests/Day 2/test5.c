#include <stdio.h>
int main()
{
    double a, b, x = 0;
    printf(" eneter a value");
    scanf("%lf", &a);
    printf(" eneter a value");
    scanf("%lf", &b);

    x=-b/a;
    printf("%lf", x);
    return 0;
}