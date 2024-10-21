#include<stdio.h>
int main()
{
    int i;
    int num;
    printf("enter number");

    scanf("%d",&num);
   
    int sum=0;
     printf("sum of odd number from this no. %d is",num);
    while (num!=0)
    {
          i=num%10;
          if(i%2)
        sum+=i;
        
        num/=10;
        
    }
    
 printf(" >>>>>> %d ",sum);
    
 
    return 0;
}