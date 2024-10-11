#include <stdio.h>
int main()
{
    int a;
    int b;
    int temp = 0;

    printf("enter value of a");
    scanf("%d", &a);
    printf("value of b");
    scanf("%d", &b);

    temp = a;
    a = b;
    b = temp;
    printf("after swap a=%d b=%d", a, b);
}