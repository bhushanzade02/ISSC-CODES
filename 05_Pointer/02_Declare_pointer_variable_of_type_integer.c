#include <stdio.h>

int main() {
    int value = 10;    // Declare an integer variable
    int *ptr;          // Declare a pointer to an integer

    ptr = &value;      // Assign the address of 'value' to 'ptr'

    printf("The value is: %d\n", *ptr); // Dereference the pointer to get the value

    return 0;
}
