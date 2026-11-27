#include <stdio.h>

int main() {
    
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    int a[5][5];
    for(int i=0;i<=4;i++){
        for(int j=0;j<=4;j++){
            printf("%d ", n);
        }
        printf("\n");
    }


    return 0;
}