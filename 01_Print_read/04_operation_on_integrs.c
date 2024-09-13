#include <stdio.h>

int main(){
    int num1,num2;
    printf("Enter two integers: ");
    scanf("%d %d",&num1,&num2);
    
    printf("Addition (%d + %d) : %d\n",num1,num2,num1 + num2);
    printf("Subtraction (%d - %d) : %d\n",num1,num2,num1 - num2);
    printf("Multiplication (%d x %d) : %d\n",num1,num2,num1 * num2);

    return 0;
}