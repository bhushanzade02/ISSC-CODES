#include <stdio.h>

int main() 
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);

    if (num >= 100 && num <= 200)
        printf("Small number\n");
    else if (num >= 201 && num <= 300)
        printf("Big number\n");
    else if (num >= 301 && num <= 400)
        printf("Large number\n");
    else if (num > 400)
        printf("Very large number\n");

    return 0;
}