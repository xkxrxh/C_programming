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
    printf("The sum of the digits of the numeber is %d\n", sum);

     int r = 0;
    while(n>0){
        r = r*10;
        r = r + (n%10);
        n = n/10;
    }
    printf("The reverse of the numebr is %d", sum);

    return 0;
}