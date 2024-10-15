#include<stdio.h>
int main()
{
    double height, base, area;
    printf(" eneter a value");
    scanf("%lf", &height);
    printf(" eneter a value");
    scanf("%lf", &base);

    area = 0.5*height*base;
    printf("%lf", area);
    return 0;
}

