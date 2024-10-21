/* Read five integers from the user and add them if the addition is greater than
  10 divide the addition by 2 else divide the addition by 3 and print the answer. */

#include <stdio.h>

int main()
{
    int arr[5], i;
    float sum = 0;
    printf("Enter 5 integers:  ");

    for (i = 0; i < 5; i++)
        scanf("%d", &arr[i]);

    for (i = 0; i < 5; i++)
        sum += arr[i];

    printf("Sum = %.2f\n", sum);
    if (sum > 10)
        printf("Final answer : %.4f\n", sum / 2);
    else
        printf("Final answer : %.4f\n", sum / 3);

    return 0;
}