#include<stdio.h>
int main()
{int a=5;
int b=10;
int c=0;

c=b;
b=a;
a=c;
printf("a=%d \n b=%d \n c=%d \n", a,b,c);
return 0;
}