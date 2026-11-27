#include <stdio.h>

int main() {
    
    int a[8]= {1,2,3,4,5,6,7,8};
    int totaltriplets=0;
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);

    for(int i=0;i<=7;i++){
        for(int j=i+1;j<=7;j++){
            for(int k=j+1;k<=7;k++){
                if(a[i]+a[j]+a[k]==n){
                    totaltriplets++;
                    printf("(%d,%d,%d)", a[i],a[j],a[k]);
                }
            }

        }
    }

    printf("The total no of triplets are %d", totaltriplets);
    return 0;
}