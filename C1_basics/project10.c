#include <stdio.h>

int main() {
    float a;
    printf("Enter the number:");
    scanf("%f", &a);
    printf("The new number is %f\n", a/2);

    float b;
    printf("Enter the number:");
    scanf("%d", &b);
    float y;
    y = b;
    float z = b-y;
    printf("The fractional part of the real number is %f", z);

    return 0;
}
   
