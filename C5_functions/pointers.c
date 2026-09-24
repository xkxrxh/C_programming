#include <stdio.h>

int main() {
    
    int a =25;
    int*x=&a;  
    *x = 7;  // a is changed 
    
    printf("%p\n",x);  //prints address of a 
    printf("%p\n",&x);  //prints address of a 
    printf("%p\n", &a);  //prints address of a 
    printf("%d\n", *x);  //address of variable whichever is stored in x
    printf("%d\n",a);  //
    
    
    return 0;
} 


// %d is for the intergers 
// %f is for decimal values 
// %c is for character 
// %p is for the adress oif the given number 