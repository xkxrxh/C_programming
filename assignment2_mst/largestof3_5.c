// --------using if-else ladder-------

// #include <stdio.h>

// int main() {

//     int a,b,c;

//     printf("Enter the number a: ");
//     scanf("%d", &a);

//     printf("Enter the number b: ");
//     scanf("%d", &b);

//     printf("Enter the number c: ");
//     scanf("%d", &c);

//     if(a>b && a>c){
//         printf("a is largest among 3");
//     }
//     else if(b>a && b>c){
//         printf("b is largest among 3");
//     }
//     else{
//         printf("c is the largest among 3");
//     }

//     return 0;
// }

// ------using if-else nested ladder-------

#include <stdio.h>

int main()
{

    int a, b, c;

    printf("Enter the number a: ");
    scanf("%d", &a);

    printf("Enter the number b: ");
    scanf("%d", &b);

    printf("Enter the number c: ");
    scanf("%d", &c);

    if (a > b)
    {
        if (a > c)
        {
            printf("a is largest among all");
        }
        else
        {
            printf("c is largest amonf all");
        }
    }
    if (b > a)
    {
        if (b > c)
        {
            printf("b is largest among all");
        }
        else{
            printf("c is largest among all");
        }
    }

    return 0;
}
