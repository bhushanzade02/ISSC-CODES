#include <stdio.h>
int main()
{
    int first = 10;
    int second = 20;
    int third = 30;
    
    {
        int third = second - first;
        printf("%d", third);
    }
    printf("%d", third);
}