#include <stdio.h>

int main() {
    
    int a;
    printf("Enter the number1: ");
    scanf("%d", &a);
    int b;
    printf("Enter the number2: ");
    scanf("%d", &b);

    a = a+b;
    b = a-b;
    a = a-b;

    printf("%d\n",a);
    printf("%d",b);


    return 0;
} 