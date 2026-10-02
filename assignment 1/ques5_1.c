#include <stdio.h>

int main() {
    
    int n,c=0;
    printf("Enter the number: ");
    scanf("%d", &n);

    for(int i=1;i<=n;i++){
        c++;
    }

    if(c==2){
        printf("The number is prime.");
    }
    else("The number is not prime.");

    return 0;
}