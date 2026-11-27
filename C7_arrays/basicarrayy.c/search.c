#include <stdio.h>
#include<stdbool.h>

int main() {
    
    int a[7] ={11,44,22,33,44,55,44};
    int x=44;
    bool flag = false; //false means not present 
    for(int i=0;i<=6;i++){
        if(a[i]==x){
            flag = true;
            break;
        }
    }
    if(flag == false){
        printf("%d is not present in array",x);
    }
    else{
        printf("%d is present in array",x);
    }
    return 0;
} 