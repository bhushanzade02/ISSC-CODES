#include <stdio.h>

int main() 
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);

    if (num == 10)
        printf("%d\n",num/2);
    else if (num == 20)
        printf("%d\n",num/3);
    else if (num == 30) 
        printf("%d\n",num/4);
    else if (num == 50) 
        printf("%d\n",num/5);

    return 0;
}