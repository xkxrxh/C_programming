#include <stdio.h>

int main() {
    int a[5]={11,22,33,44,55};
    int sum=0;
    for(int i=0;i<=4;i++){
        sum=sum+a[i];
    }
    printf("%d",sum);

    return 0;
}