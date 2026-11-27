#include <stdio.h>

int main() {
    
int a[4][4]={1,0,1,0,1,1,0,1,0,0,1,0,0,1,1,0};
int count;
int maxcount = 0;
int maxrow=-1; 

for(int i =0;i<=3;i++){
    int count =0;
    for(int j=0;j<=3;j++){
        if(a[i][j]==1){
            count++;
        }
    }
    if(count>maxcount){
        maxcount=count;
        maxrow = i;
    }
}
printf("Row %d has the max no of 1s (%d)", maxrow, maxcount);


    return 0;
}