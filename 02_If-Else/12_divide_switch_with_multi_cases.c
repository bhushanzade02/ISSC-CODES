#include <stdio.h>

int main() 
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);

    switch(num) 
    {
        case 10:
        case 20:
        case 30:
            printf("%d\n",num/2);
            break;
        case 40:
        case 50:
            printf("%d\n",num/3);
            break;
        default:
            printf("%d\n",num/4);
    }

    return 0;
}