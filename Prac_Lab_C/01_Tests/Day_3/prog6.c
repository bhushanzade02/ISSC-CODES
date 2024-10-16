#include <stdio.h>

int main()
{
    int i, num;
    int sum=0;
    printf("enter the value");
    scanf("%d", &num);

    for (i = 1; i <= num; i+=2)
    {
        sum += i;
        printf("%d\n", i);
    }
    printf("%d",sum);
    return 0;
}
