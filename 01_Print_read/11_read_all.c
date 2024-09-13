#include <stdio.h>

int main(){
    int i;
    float f;
    double d;
    long double ld;
    char ch;

    printf("Enter an integer: ");
    scanf("%d",&i);
    printf("Enter a float: ");
    scanf("%f",&f);
    printf("Enter a double: ");
    scanf("%lf",&d);
    printf("Enter a long double: ");
    scanf("%Lf",&ld);
    printf("Enter a character: ");
    scanf(" %c",&ch);

    printf("Integer: %d\n", i);
    printf("Float: %.2f\n", f);
    printf("Double: %.2lf\n", d);
    printf("Long double: %.2Lf\n", ld);
    printf("Character: %c\n", ch);

    return 0;
}