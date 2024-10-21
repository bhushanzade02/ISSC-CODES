#include<stdio.h>
int main()
{
    int n,max,min;
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



      min = arr[0];
    for(i=1;i<n;i++)
        if(min>arr[i])
            min=arr[i];
    printf("\nsmallets number: %d\n",min);
    return 0;
}
