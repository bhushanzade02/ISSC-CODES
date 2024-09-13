#include <stdio.h>

int main()
{
    char s1[100]="Hello World";
    int chars=0;
    char *n1 = s1;
    while(*n1 != '\0')
    {
        chars++;
        n1++;
    }
    printf("Length of string 'Hello World' : %d\n",chars);

    return 0;
}