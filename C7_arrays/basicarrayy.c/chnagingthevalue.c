#include <stdio.h>

int main() {
    int a[5]= {11,22,33,44,55};
    for(int i=0;i<=4;i++){
        if(i%2!=0){
            printf("%d ", a[i]*2);
        }
        else{
            printf("%d ", a[i]+10);
        }
    }

    return 0;
}