#include <stdio.h>

int main() 
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num >= 100 && num <= 200) 
    {
        int result = num/3;

        if (result < 50) 
            printf("Small number\n");
        else
            printf("Not so big number\n");

    } 
    else if (num > 200 && num <= 300) 
    {
        int result = num / 2;
        if (result < 110)
            printf("%d\n", result);
        else 
            printf("%d\n", result / 5);
    } 
    else if (num > 300) 
        printf("Very big number\n");

    return 0;
}