#include <stdio.h>

void sum(int a, int s){
    if(a==0){
        printf("%d", s);
        return;
    }
    sum(a-1,s+a);
    return;
}

int main() {
    
    int a;
    printf("Enter the number: ");
    scanf("%d,&a");
    sum(a,0);

    return 0;
} 