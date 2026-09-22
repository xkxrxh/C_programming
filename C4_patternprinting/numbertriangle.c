#include <stdio.h>

int main() {
    
    int n;
    printf("Enter the number:");
    scanf("%d", &n);

    int a =1;
    for(int i =1;i<=n;i++){
        int space;
        for(int space=1;space<=n;space++){
            printf(" ");
        }
        for(int j =1;j<=i;j++){
            printf("%d ",a);
            a++;
        }
        printf("\n");
    }

    return 0;
}