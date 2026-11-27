#include <stdio.h>

int main() {
    int a[8]= {1,2,3,8,5,6,7,4};
    int max=-1;
    for(int i=0;i<=7;i++){
        if(a[i]>max){
            max=a[i];
        }
    }

    return 0;
}