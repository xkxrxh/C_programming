#include <stdio.h>

int main() {
    int n1;
    printf("Enter the number 1:");
    scanf("%d", &n1);

    int n2;
    printf("Enter the number 2:");
    scanf("%d", &n2);

    int n3;
    printf("Enter the number 3:");
    scanf("%d", &n3);

    if(n1>n2 && n1>n3){
        printf("n1 is the greatest number.");
    }

    else if(n2>n3 && n2>n1){
        printf("n2 is the greatest number.");
    }

    else{
        printf("n3 is the greatest number.");
    }
    
    return 0;
}