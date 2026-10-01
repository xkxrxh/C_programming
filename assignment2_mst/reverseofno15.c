#include <stdio.h>

int main() {
    
    int a;
    printf("Enter the number: ");
    scanf("%d", &a);

    int r=0;
    while(a<0){
        r=r*10;
        r= r+(a%10);
        r=a/10;

        printf("The reverse of the number is %d", r);
    }

    return 0;
}