#include <stdio.h>

int main() {
    
    int a,b;

    printf("Enter the number a: ");
    scanf("%d", &a);
    printf("Enter the number b: ");
    scanf("%d", &b);

    a = a+b;
    b = a-b;
    a = a-b;

    printf("%d\n", a);
    printf("%d",b);

    return 0;
}