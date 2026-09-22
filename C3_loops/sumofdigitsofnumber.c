#include <stdio.h>

int main() {
    
    int n;
    printf("Enter the number:");
    scanf("%d", &n);

    int sum = 0;
    int lastd = 0;
    while(n!=0){
        lastd = n%10;
        sum=sum+lastd;
        n=n/10;
    }
    printf("The sum of the digits of the numeber is %d", sum);
    

    return 0;
}