#include <stdio.h>

int main() {
    
    int count;

    for(int i =2;i<=500;i++){
        int is_prime=1;
        for(int j =2;j*j<=i;j++){
            if(i%j==0){
                is_prime=0;
                break;
            }
        }
        if(is_prime==1){

            printf("%d ",i);
            count++;
        }
    }
    printf("Thr total prime numebrs between 1-500 are %d ", count);

    return 0;
}