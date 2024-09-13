    #include <stdio.h>

int main(){
    char str[100];

    printf("Enter the string 'Hello World': ");
    scanf("%[^\n]%*c",str);

    printf("You entered: %s\n",str);
    return 0;
}