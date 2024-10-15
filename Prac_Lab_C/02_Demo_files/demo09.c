#include <stdio.h>
int main()
{
    int score;
    printf("enter A Score");
    scanf("%d", &score);

    if (score >= 90)
    {
        printf(" a");
    }
    else if (score >= 80)
    {
        printf("B");
    }

    else if (score >= 70)
    {
        printf("c");
    }

    else if (score >= 60)
    {
        printf("d");
    }

    else
    {
        printf("F");
    }   return 0;
}