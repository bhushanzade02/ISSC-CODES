#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter your score");
    scanf("%d",&a);
     printf("enter your score");
    scanf("%d",&b);
     printf("enter your score");
    scanf("%d",&c);
    if(a+b>c && a+c>b && b+c>a)
    {
        printf("condition one satisfiesd");
    } 
    else {
        printf("no");
    }
   /* else if(a+c>b)
    {
        printf("condition 2 satisfiesd");
    }
    else if(b+c>a)
    {
        printf("condition 3 satisfiesd");
    }
  else{
    printf("no condition is satisfies");
  } */
    return 0;
}