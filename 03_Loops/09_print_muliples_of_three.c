#include <stdio.h>

int main()
{
    int num,i;
    printf("Enter an integer: ");
    scanf("%d", &num);

    for (i=3;i<=num;i+=3)
        printf("%d ",i);
    
    printf("\n");
    printf("\n");

    return 0;
}