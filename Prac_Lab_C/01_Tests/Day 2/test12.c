#include <stdio.h>
int main()
{

    char name;
    char a[100];

    printf("Enter a string: ");
    fgets(a, sizeof(a), stdin);
    int age;
    printf("Enter a age : ");
    scanf("%d", &age);
    printf("%s", a);
    printf(" age is%d", age);
    return 0;
}