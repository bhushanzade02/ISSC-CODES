#include <stdio.h>

int main()
{
    int num, i;
    printf("Enter an integer: ");
    scanf("%d",&num);

    for(i=num;i>0;i--)
        printf(" %d ",i);
    printf("\n");
    return 0;
}