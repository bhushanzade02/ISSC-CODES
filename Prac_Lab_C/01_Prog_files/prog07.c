#include <stdio.h>
#include <math.h>

int main()
{
    int a = 2;
    int b = 5;
    int c = -3;
    double ans1 = 0;
    double ans2 = 0;
    ans1 = (-b + sqrt((b * b) - 4 * a * c)) / (2 * a);
    ans2 = (-b - sqrt((b * b) - 4 * a * c)) / (2 * a);
    printf("%lf", ans1);
    printf("%lf", ans2);
}