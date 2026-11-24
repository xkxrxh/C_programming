#include <stdio.h>

int main() {
    // int arr[10] = {1,2,3,4,5,6,7,8,9,99}; // array of size 10
    // arr[4]=100;   // {1,2,3,4,100,6,}
    // printf("%d", arr[-100]);


    // float a[3]= {1.6,3.6,3.3};
    // printf("%f",a[2]);


    // char a[3] = {'a','c','d'};
    // printf("%c", a[1]);


    // int a[4];
    // printf("Enter the first element: " );
    // scanf("%d", &a[0]);
    // printf("Enter the second element: " );
    // scanf("%d", &a[1]);
    // printf("Enter the third element: " );
    // scanf("%d", &a[2]);
    // printf("Enter the fourth element: " );
    // scanf("%d", &a[3]);
    // printf("Enter the fifth element: " );
    // scanf("%d", &a[4]);

    // printf("%d",a[3]);

    int a[5];

    for(int i=0;i<=4;i++){
        printf("Enter the element number %d: ", i);
        scanf("%d",&a[i]);
    }
    printf("%d",a[1]);
    return 0;
}