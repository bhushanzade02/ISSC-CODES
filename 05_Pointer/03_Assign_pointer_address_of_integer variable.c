// Assign pointer variable address of the integer variable
#include <stdio.h>

int main() {
    int value = 42;   // Step 1: Declare an integer variable and initialize it
    int *ptr;         // Step 2: Declare a pointer to an integer

    ptr = &value;     // Step 3: Assign the address of 'value' to 'ptr'

    // Output the value of 'value' using the pointer
 // %p is used for pointer addresses
     printf("The address of value is: %p\n", (void *)ptr);
    printf("The value is: %d\n", *ptr);                    // Dereference the pointer to get the value

    return 0;
}
