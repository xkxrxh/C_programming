#include <stdio.h>
#include <math.h>

int main() {
    
    int a;
    printf("Enter the number: ");
    scanf("%d",&a);
    int b;
    printf("Enter the power of the number: ");
    scanf("%d",&b);

    int power = pow(a,b);
    printf("The final number is %d", power);

    return 0;
} 