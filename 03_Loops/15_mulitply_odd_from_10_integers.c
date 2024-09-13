#include <stdio.h>

int main()
{
    int n,i,mul=1;
    printf("Enter 10 integers:  ");

    for(i = 0;i<10;i++){
        scanf("%d",&n);
        if(n%2!=0)
            mul*=n;
    }

    printf("Multiplication : %d\n",mul);

    return 0;
}