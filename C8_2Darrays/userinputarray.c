#include <stdio.h>

int main(){
    
    int r;
    printf("Enter the number of rows: ");
    scanf("%d", &r);
    int c;
    printf("Enter the number of coloumns: ");
    scanf("%d", &c);

    int a[r][c];
    for(int i=0;i<=r-1;i++){
        for(int j=0;j<=c-1;j++){
            scanf("%d", &a[i][j]);
        }

    }
    printf("\n");
    for(int i=0;i<=r;i++){
        for(int j=0;j<=c;j++){
            printf("%d", &a[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}