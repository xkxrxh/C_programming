#include <stdio.h>
#include <math.h>

int main() {
    
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);

    float root = sqrt(a);
    printf("The square of the given number is %f", root);

    return 0;
}