#include <stdio.h>

int main()
{
    float arr[5];
    int i;
    printf("Enter 5 float values: ");

    for(i = 0;i<5;i++)
        scanf("%f",&arr[i]);

    printf("\nYou entered: [ ");
    for (i=0;i<5;i++)
        printf(" %.4f ",arr[i]);
    
    printf("]\n");

    return 0;
}