#include <stdio.h>

int main()
{
    int num, i;
    printf("Enter an integer: ");
    scanf("%d",&num);

    for(i=0;i<=num;i++)
        if(i%2)
            continue;
        else
            printf(" %d ",i);
    printf("\n");
    return 0;
}