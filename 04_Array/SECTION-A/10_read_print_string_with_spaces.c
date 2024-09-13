#include <stdio.h>

int main()
{
    char n1[100];

    printf("Enter 'Hello World': ");
    fgets(n1, sizeof(n1), stdin);
    printf("You entered: ");
    printf("%s\n",n1);

    return 0;
}