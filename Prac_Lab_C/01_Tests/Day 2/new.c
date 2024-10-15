#include<stdio.h>
int main()
{
    int score;
    printf("enter your score");
    scanf("%d",&score);
    if(score<=35)
    {
        printf("f");
    }
   else if(score<=40)
    {
        printf("p");
    }
    else if(score<=55)
    {
        printf("c");
    }
  else if(score<=65)
    {
        printf("b");
    }
   else if(score<=85)
    {
        printf("a");
    }
    else
    {
        printf("o");
    }
    return 0;
}