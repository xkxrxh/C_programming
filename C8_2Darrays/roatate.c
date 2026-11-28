#include <stdio.h>

int main() {
    
    int n;
    printf("Enter the numbe of rows/columns: ");
    scanf("%d", &n);
    int a[n][n];

    //input
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d ", &a[i][j]);
        }
    }
    //transpose
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            //swap a[i][j] & a[j][i]
            int temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp;
        }
    }
    printf("\n");
    //rotate
    for(int i=0;i<n;i++){
        int j=0;
        int k = n-1;
        while(j<k){
            int temp = a[i][j];
            a[i][j] = a[i][k];
            a[i][k] = temp;
            j++;
            k--;
        }
    }
    //output
    printf("\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    


    return 0;
}