#include<stdio.h>
int main()
{
    int i;
    int num=257;
    int sum=0;

    while (num!=0)
    {
          i=num%10;
        sum+=i;
        
        num/=10;
        
    }
    
 printf("%d",sum);
    
 
    return 0;
}