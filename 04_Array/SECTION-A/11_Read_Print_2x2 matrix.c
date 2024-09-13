#include <stdio.h>
int main()
{
    int n = 2;
    int arr[2][2];
    int i, j;
    printf("enter elements:");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%d", &arr[i][j]);
        }
       
    }

    printf("Input Matrix is: \n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}