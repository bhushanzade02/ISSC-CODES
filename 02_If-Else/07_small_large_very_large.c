#include <stdio.h>

int main() 
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);

    if (num < 100) 
        printf("Small number\n");
    else if (num > 1000) 
        printf("Very large number\n");
    else if (num > 200) 
        printf("Large number\n");

    return 0;
}