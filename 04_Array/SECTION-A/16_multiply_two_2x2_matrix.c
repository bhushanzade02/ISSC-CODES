#include <stdio.h>

int main()
{
    int n=3;
    int A[2][2],B[2][2],C[2][2],i,j,k,sum=0;
    
    for(i=1;i<n;i++)
    {
        for(j=1;j<n;j++)
        {
            printf("Enter an element A[%d][%d]: ",i,j);
            scanf("%d",&A[i-1][j-1]);
        }
    }

    for(i=1;i<n;i++)
    {
        printf("[");
        for(j=1;j<n;j++)
        {
            printf("  %d  ",A[i-1][j-1]);
        }
        printf("]\n");
    }

    for(i=1;i<n;i++)
    {
        for(j=1;j<n;j++)
        {
            printf("Enter an element B[%d][%d]: ",i,j);
            scanf("%d",&B[i-1][j-1]);
        }
    }

    for(i=1;i<n;i++)
    {
        printf("[");
        for(j=1;j<n;j++)
        {
            printf("  %d  ",B[i-1][j-1]);
        }
        printf("]\n");
    }

    for(i=1;i<n;i++)
    {
        for(j=1;j<n;j++)
        {
            C[i-1][j-1]=0;
            for(k=1;k<n;k++)
                C[i-1][j-1]+=(A[i-1][k-1] * B[k-1][j-1]);
        }
    }

    printf("\n[A] * [B] = \n");
    for(i=1;i<n;i++)
    {
        printf("[");
        for(j=1;j<n;j++)
        {
            printf("  %3d  ",C[i-1][j-1]);
        }
        printf("]\n");
    }

    return 0;
}