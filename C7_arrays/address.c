#include <stdio.h>

int main() {
    
    int a[5]= {22,11,33,44,55};
    for(int i=0;i<=4;i++){

        printf("%p\n",&a[i]);  //p is the format specifier
    }

    return 0;
} 

//finding the memory allocation address of the given array 