#include <stdio.h>

int main()
{
    char n1[100];

    printf("Enter a string:\n");
    scanf("%99s",n1);

    printf("You entered: ");
    printf("%s\n",n1);

    return 0;
}