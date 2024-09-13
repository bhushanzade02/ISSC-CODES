#include <stdio.h>
int main()
{
    int arr[3][3];
    int i, j;
    int n = 4;

    for (i = 1; i < n; i++)
    {
        for (j = 1; j < n; j++)
        {
            printf("enter the elements arr[%d][%d]:",i,j);
            scanf("%d", &arr[i - 1][j - 1]);
        }
    }

    for (i = 1; i < n; i++)
    {
        printf("[");
        for (j = 1; j < n; j++)
        {
            printf(" %d ", arr[i - 1][j - 1]);
        } printf("]\n");
    
    }   
    return 0;
}
