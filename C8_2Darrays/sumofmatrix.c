#include <stdio.h>

int main() {
    
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    int m;
    printf("Enter the number of columns: ");
    scanf("%d", &m);

    int a[n][m];
    int sum =0;

    for(int i=0;i<=n-1;i++){
        for(int j =0;j<=m-1;j++){
            scanf("%d", &a[i][j]);
        }
    }
    for(int i=0;i<=n-1;i++){
        for(int j =0;j<=m-1;j++){
            printf("%d ", a[i][j]);
            sum= sum + a[i][j];
        }
        printf("\n");
    }
    printf("The sum of matrix is %d", sum);
    return 0;
}