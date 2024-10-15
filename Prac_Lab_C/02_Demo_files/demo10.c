#include <stdio.h>
int main()
{
    int age;
    printf("enter your age");
    scanf("%d", &age);

    if (age <= 12)
    {
        printf("child");
    }
    else if (age <= 19)
    {
        printf("teenager");
    }
    else if (age <= 64)
    {
        printf("adult");
    }
    else
    {
        printf("Senior");
    }
    return 0;
}