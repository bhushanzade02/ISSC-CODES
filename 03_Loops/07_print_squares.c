#include <stdio.h>

int main()
{
    int num,i;
    printf("Enter an integer: ");
    scanf("%d",&num);

    for (i=1;i<=num;i++)
        printf("Square of %d = %d\n", i, i * i);
    
    return 0;
}