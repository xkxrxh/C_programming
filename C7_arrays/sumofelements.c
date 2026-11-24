#include <stdio.h>

int main() {
    
    int a[5]= {11,22,33,44,55};

    int sume,sumo =0;
    for(int i=0;i<=5;i++){
        if(i%2==0){
            sume+=a[i];
        }
        else{
            sumo+=a[i];
        }
    }
    printf("The difference is %d", sumo-sume);

    return 0;
}