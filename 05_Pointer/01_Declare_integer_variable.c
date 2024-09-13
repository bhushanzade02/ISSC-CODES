#include <stdio.h>
int main()
{
    int n = 10;
    int *ptr;

    ptr = &n;
    printf("value:%d", *ptr);
    
}