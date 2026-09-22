#include <stdio.h>

int main() {
    
    int a;
    printf("Enter the electricity units consumed:");
    scanf("%d", &a);

    if(a<=100){
        printf("The charge per unit is 2rs");
        printf("The electricity bill is %d", 2*a);
    }
    else if(a>101 && a<=200){
        printf("The electricity bill is %d", 200+(a-100)*3);
    }
    else if(a>201 && a<=300){
        printf("The electricity bill is %d", 500+(a-200)*5);
    }
    else{
        printf("The electricity bill is %d\n", 1000+(a-300)*7);
        int k =  1000+(a-300)*7;
    
        if(k>1500){
            printf("The final electricity bill is %d", (1.1)*a);
        }
        }
    

    return 0;
}