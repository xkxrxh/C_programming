#include <stdio.h>

int sum(int n){
    if (n==1 || n==0) return 1;
    int recAns = n+sum(n-1);
    return recAns;
    
}

int main() {
    
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    int facto = sum(n);
    printf("%d", facto);

    return 0;
}