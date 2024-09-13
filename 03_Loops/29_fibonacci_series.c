#include<stdio.h>

int main()
{
	int n,a=0,b=1;
	printf("Enter the term to print Fibonacci series upto : ");
	scanf("%d",&n);
	
	if(n>0)
	{
		printf("Fibonacci series upto %d th term : [ ",n);
		for(int i=0;i<n;i++)
		{
			if(i==0){
				printf("%d ",a);
			}
			if(i==1){
				printf("%d ",b);
			}
			if(i>=2){
				b= a+b;
				a = b-a;
				printf("%d ",b);
			}
		}
		printf("]\n");
	} else {
		printf("Term cannot be negative or zero.\n");
	}
       	return 0; 

}