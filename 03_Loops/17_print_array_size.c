#include <stdio.h>

int main()
{
    int arr[10],i;
    printf("Enter 10 integers:  ");

    for(i = 0;i<10;i++)
        scanf("%d",&arr[i]);

    printf("\nArray: \n");
    for (i=1;i<=10;i++)
        printf("%3d -> %3d \n",i,arr[i-1]);

    return 0;
}