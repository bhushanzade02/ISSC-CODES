#include <stdio.h>

int main() {
    int num, i, sum=0;
    printf("Enter an integer: ");
    scanf("%d",&num);

    for(i=1;i<=num;i++) {
        sum+= i*i;
    }

    printf("Sum of squares of first %d natural numbers is %d\n",num,sum);
    return 0;
}