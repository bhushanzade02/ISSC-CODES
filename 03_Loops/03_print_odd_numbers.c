#include <stdio.h>

int main()
{
    int num, i;
    printf("Enter an integer: ");
    scanf("%d",&num);

    for(i=0;i<=num;i++)
        if(i%2)
            printf(" %d ",i);
        else
            continue;
    printf("\n");
    return 0;
}