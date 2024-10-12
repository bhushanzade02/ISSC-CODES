#include<stdio.h>
int main()
{
    int a=2;
    int b=4;

    a=a^b;
    b=a^b;
    a=a^b;

    printf("a =%d B=%d",a,b);

}