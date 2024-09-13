#include <stdio.h>
int main()
{
        int n = 3;
    int A[2][2];
    int i, j,sum=0;



    for (i = 1; i < n; i++)
    {
        for (j = 1; j < n; j++)
        {
            printf("enter elements A[%d][%d]", i, j);
            scanf("%d", &A[i - 1][j - 1]);
        }
    }

printf("printed array \n\n");
    for (i = 1; i < n; i++)
    {

        printf("[");
        for (j = 1; j < n; j++)
        {
            printf(" %d ", A[i - 1][j - 1]);
        }    
        printf("]\n");
    }





    for(i=1;i<n;i++)
    { 
         sum=0;
        for(j=1;j<n;j++)
        {
            sum+=A[i-1][j-1];
        }
        printf("\n sum [Row %d]:%d ",i,sum);
    }
    return 0;
}