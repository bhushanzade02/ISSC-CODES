#include <stdio.h>

int main()
{
    int num, rev=0, original;
    printf("Enter an integer: ");
    scanf("%d",&num);
    original = num;
    while(num>0){
        rev = rev *10 + num%10;
        num/=10;
    }
    printf("Original number : %d\n",original);
    printf("Reverse of number : %d\n",rev);
    if(original==rev)
        printf("Number is palindrome.\n");
    else
        printf("Number is not palindrome.\n");
    return 0;
}