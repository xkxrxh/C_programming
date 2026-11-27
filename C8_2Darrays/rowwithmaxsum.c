#include <stdio.h>

int main() {
    
    int a[3][4] = {1,2,3,1,0,5,0,2,9,0,0,3};
    int maxsum = -1;
    int maxrow = -1;
    for(int i=0;i<=2;i++){
        int rowsum =0;
        for(int j=0;j<=3;j++){
            rowsum +=a[i][j];
        }
        if(rowsum>maxsum){
            maxsum=rowsum;
            maxrow = i;
        }

    }
    printf("The maximum sum is %d of row %d.", maxsum, maxrow);
    return 0;
}