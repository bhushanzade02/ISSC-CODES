#include <stdio.h>
#include <math.h>
int main()
{
    int n=10,i,j;

    float arr[n],avg,result=0;
    printf("Enter %d numbers: ",n);

    for(i = 0;i<n;i++)
        scanf("%f",&arr[i]);

    for(i=0;i<n;i++)
            result+=arr[i];
    avg = result/10;
    result = 0;
    for(i=0;i<n;i++)
            result+=((arr[i]-avg)*(arr[i]-avg));
    result/=10;
    result = sqrt(result);
    printf("\nResult : %.4f\n",result);
    return 0;
}