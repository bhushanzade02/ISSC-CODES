#include <stdio.h>

int main() 
{
    int num;
    printf("Enter an integer: ");
    scanf("%d",&num);

    if (num < 10) 
        printf("Small number\n");
    else 
        printf("Large number\n");

    return 0;
}