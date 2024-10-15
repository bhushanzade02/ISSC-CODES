#include <stdio.h>
int main()

{
    int a, b, c;
    printf("enter a value a");
    scanf("%d", &a);
    printf("enter a value b");
    scanf("%d", &b);

    printf("enter a value c");
    scanf("%d", &c);

    int ans1 = a * a;
    int ans2 = b * b;
    int ans3 = c * c;
    int triplet = ans1 + ans2;
    printf("%d", triplet);

    if (triplet == ans3)
    {
        printf("pythgaros triplets are Formed");
    }
    else
    {
        printf("it is not a  pythagorus triplet");
    }
    return 0;
}