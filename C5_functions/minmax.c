#include <stdio.h>
#include <math.h>

int main() {
    
    int a;
    printf("Enter the number: ");
    scanf("%d",&a);
    int b;
    printf("Enter the power of the number: ");
    scanf("%d",&b);

    int m = min(a,b);
    printf("The minimum of the given number is %d", m);

    return 0;
}  