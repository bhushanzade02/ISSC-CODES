#include <stdio.h>

int main() {
    int value = 42;   // Step 1: Declare and initialize an integer variable
    int *ptr;         // Step 2: Declare a pointer to an integer

    ptr = &value;     // Assign the address of 'value' to 'ptr'

    // Print the value of the pointer variable (which is the address it holds)
    printf("The value of the pointer variable 'ptr' is: %p\n", (void *)ptr);

    return 0;
}
