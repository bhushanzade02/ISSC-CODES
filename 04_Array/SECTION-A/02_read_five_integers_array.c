#include <stdio.h>

int main()
{
    int arr[5],i;
    printf("Enter 5 integers:  ");

    for(i = 0;i<5;i++)
        scanf("%d",&arr[i]);

    printf("\nYou entered: [ ");
    for (i=0;i<5;i++)
        printf("%d ",arr[i]);
    
    printf("]\n");

    return 0;
}