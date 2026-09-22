#include <stdio.h>

int main() {
    
    
    int a;
    printf("Enter the length:");
    scanf("%d", &a);
    
     for(int i =1;i<=2*a;i++){
        for(int j=a;j>=i; j--){
            printf("* ");
           
        }
        printf("\n");
    }
 

    return 0;
}