#include <stdio.h>

int main() {
    int n,a=1,b=0,sum=0;
    printf("Enter the number: ");
    scanf("%d", &n);

    for(int i=1;i<n+1;i++){
        sum=a+b;
        a=b;
        b=sum;

        printf("%d ", sum);
    }

    return 0;
}