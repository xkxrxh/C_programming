#include <stdio.h>

int main() {
    int n;
    printf("Enter the number:");
    scanf("%d",&n);

    float a = 100;
    for(int i=1;a>0;i=i++){
        printf("%d\n", a);
        a=a/2;
    }

    return 0;
}