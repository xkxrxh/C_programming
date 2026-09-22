#include <stdio.h>

int main() {
    int a;
    printf("Enter the cost price of the item: ");
    scanf("%d",&a);
    int b;
    printf("Enter the selling price of the item: ");
    scanf("%d", &b);

    if(a>b){
        printf("The seller has made a loss and is a poor dealer.\n");
        printf("He has made a loss of %d", a-b);
    }
    
    else if(a==b){
        printf("The seller has made neither profit nor loss.");
    }   

    else{
        printf("The seller has made a profit and is a good dealer.\n");
        printf("He has made a profit of %d", b-a);
    }

    return 0;
}