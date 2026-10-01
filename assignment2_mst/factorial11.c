#include <stdio.h>

int main() {
    
    int product=1;
    int a;
    printf("Enter the number you want the factorial of: ");
    scanf("%d", &a);

    for(int i=1;i<=a;i++){
        product=product*i;
    }

    printf("%d", product);

    return 0;
}