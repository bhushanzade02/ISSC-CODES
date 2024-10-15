#include <stdio.h>
int main()
{
    float a, b;
    printf("enter  value a");
    scanf("%f", &a);
    printf("enter  value b");
    scanf("%f", &b);

    if (a = b)
    {
        printf("equal/n");
    }
    else
    {
        printf("not equal");
    }

    double c, d;
    printf("enter  value c");
    scanf("%lf", &c);
    printf("enter  value d");
    scanf("%lf", &d);

    if (c = d)
    {
        printf("equal");
    }
    else
    {
        printf("not equal");
    }

    return 0;
}