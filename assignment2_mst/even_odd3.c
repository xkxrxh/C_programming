#include <stdio.h>

int main() {
    
    int a;
    printf("Enter the number: ");
    scanf("%d", &a);

    if(a%2==0){
        printf("The given number a is even...");
    }
    else{
        printf("The given number a is odd..");
    }

    return 0;
}