#include <stdio.h>

int main() {
    
    int a[4][2];
    for(int i=0;i<=3;i++){
        for(int j=0;j<=1;j++){
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n");
    for(int i=0;i<=3;i++){
        for(int j=0;j<=1;j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
} 