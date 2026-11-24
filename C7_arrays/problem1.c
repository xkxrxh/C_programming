#include <stdio.h>

int main() {
    
    int marks[10]={33,55,66,77,88,99,11,22,44,100};
    for(int i=0;i<=9;i++){
        if(marks[i]<35){
            printf("%d ",i);
        }
    }

    return 0;
}