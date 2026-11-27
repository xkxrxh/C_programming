#include <stdio.h>

int main(){
    
    int a[3][3] = {{1,2,3},{3,4,5},{5,6,7}};
    // a[0][0] =1;
    // a[0][1] =2;
    // a[1][0] =3;
    // a[1][1] =4;

    //1 2 3
    //3 4 5
    //5 6 7 

    for(int i=0;i<=2;i++){
        for(int j =0;j<=2;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    return 0;
}