#include <stdio.h>

int main()
{
    int n,max;
    printf("Enter number of elements:  ");
    scanf("%d",&n);

    int arr[n],i,j;
    printf("Enter %d integers: ",n);

    for(i = 0;i<n;i++)
        scanf("%d",&arr[i]);

    max = arr[0];
    for(i=1;i<n;i++)
        if(max<arr[i])
            max=arr[i];
    printf("\nLargest Number : %d\n",max);
    return 0;
}
