#include <stdio.h>

int main()
{
    int num,i;
    printf("Enter an integer: ");
    scanf("%d",&num);

    printf("Number\tSquare\tCube\n");
    for (i=1;i<=num;i++)
        printf("%d\t%d\t%d\n",i,i*i,i*i*i);

    return 0;
}