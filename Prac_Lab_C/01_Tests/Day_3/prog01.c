#include <stdio.h>

int main() {
    int num, i;
    printf("Enter a value:\n");
    scanf("%d", &num);

    // Count down from num to 1
    for (i = 0; i <= num; i++) {
        printf("%d\n", i);
    }

    return 0;
}
