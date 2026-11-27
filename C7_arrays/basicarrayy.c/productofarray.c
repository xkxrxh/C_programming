#include <stdio.h>

int main() {
    
    int a[5]={11,22,33,44,55};

    int product =1;
    for(int i=0;i<=4;i++){
        product=product*a[i];
    }

    printf("%d",product);
    return 0;
}