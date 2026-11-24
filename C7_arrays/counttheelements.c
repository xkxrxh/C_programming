#include <stdio.h>

int main() {
    
    int a[5] = {11,22,33,44,55};
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);

    int count=0;
    for(int i=0;i<=5;i++){
        if(n>a[i]){
            count++;
        }
    }
    printf("The number of elements greater than %d is %d.", n, count);

    return 0;
}