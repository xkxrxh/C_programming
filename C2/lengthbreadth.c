#include <stdio.h>

int main() {
    int l;
    printf("Enter the length:");
    scanf("%d", &l);

    int b;
    printf("Enter the breadth:");
    scanf("%d", &b);

    int a = l*b;
    int p = 2*(l+b);

    if(a>p){
        printf("The area of the rectangle is greater than the perimeter.");
    }

    else{
        printf("The perimeter of the rectangle is greater tha  the area.");
    }



    return 0;
}