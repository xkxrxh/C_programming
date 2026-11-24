#include <stdio.h>

int main() {
    int a[5];
    
    for(int i=0;i<=4;i++){
        printf("Enter the number %d: ",i);
        scanf("%d", &a[i]);
        printf("%d",4-a[i]-1);
    }    
    
    return 0;
}