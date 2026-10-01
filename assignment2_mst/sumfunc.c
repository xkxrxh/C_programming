#include<stdio.h>

int sum(int a, int b){
    return a+b;
}

int main(){
    int a,b;

    printf("Enter the number a: ");
    scanf("%d", &a);
    printf("Enter the number b: ");
    scanf("%d", &b);

    printf("The sum of a nd b is %d", sum(a,b));
    return 0;


}