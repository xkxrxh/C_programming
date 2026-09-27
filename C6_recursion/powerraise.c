// #include <stdio.h>
// #include <math.h>

// void power(int a , int b){
//     int x=1;
//     for(x=1;x<=b;x++){
//         x=x*a;
//         printf("%d", x);
//     }
//     return;
// }

// int main() {
    
//     int a;
//     printf("Enter the number a: ");
//     scanf("%d",&a);
//     int b;
//     printf("Enter the power b: ");
//     scanf("%d",&b);

//     int p = pow(a,b);
//     printf("%d raised to the power %d is %d",a,b,p);

//     return 0;
// }


// -----done iteratively----


#include <stdio.h>


int main() {
    
    int a;
    printf("Enter the number a: ");
    scanf("%d",&a);
    int b;
    printf("Enter the power b: ");
    scanf("%d",&b);

    int p = pow(a,b);
    printf("%d raised to the power %d is %d",a,b,p);

    return 0;
}