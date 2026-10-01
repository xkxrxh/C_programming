#include <stdio.h>

int main() {
    
    int a;
    printf("Enter the number: ");
    scanf("%d", &a);

    if(a>0){
        printf("The given number a is positive...");
    }
    else if(a==0){
        printf("The entered number a is zero..");
    }
    else{
        printf("The given number a is negative...");
    }
    return 0;
}