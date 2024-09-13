#include<stdio.h>

int main()
{
	int n,i;
	long long product=1;
	printf("Enter the number : ");
	scanf("%d",&n);
	
	if(n<0)
	{
		printf("Number cannot be negative.\n");
	} else {
		if(n==0)
			printf("0! = 1\n");
		else{
			for(i=1;i<=n;i++){
				product *= i;
			}
			printf("%d! = %lld\n",n,product);
		}
	}
	return 0;


}