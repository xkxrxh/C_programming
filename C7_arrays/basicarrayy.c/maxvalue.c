#include <stdio.h>

int main() {
    
    int a[5] ={11,22,33,44,55};

    int max=-1;
    for(int i=0;i<=5;i++){
        if(max<a[i]){
            max=a[i];
        }
    }
    printf("%d", max);
    return 0;
}