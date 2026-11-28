#include <stdio.h>

int main() {
    
    int r=3;
    int c=3;
    int a[3][3];

    for(int i=0;i<=2;i++){
        for(int j=0;j<=2;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int b[c][r];
    printf("\n");
    for(int i=0;i<=2;i++){
        for(int j=0;j<=2;j++){
           // printf("%d ", a[i][j]);
           b[i][j] = a[j][i];
        }
    }

    for(int i=0;i<=c;i++){
        for(int j=0;j<=r;j++){
           
           printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    return 0;

}