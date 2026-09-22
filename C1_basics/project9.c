#include <stdio.h>

int main() {
    int a;
    int b;
    printf("Enter the number a:");
    scanf("%d",&a);
    printf("Enter the number b:");
    scanf("%d", &b);

    // a>b

    printf("The remiander when a is divided by b is %d", a%b);

    return 0;
}