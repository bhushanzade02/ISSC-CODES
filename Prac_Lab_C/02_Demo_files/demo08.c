#include <stdio.h>

int main() {
    char a[5]; 

    printf("Enter a string: ");
    fgets(a, sizeof(a), stdin);

    printf("You entered: %s\n", a); 
    return 0;
}
