// #include <stdio.h>

// int main()
// {

//     int n;
//     printf("Enter the number n: ");
//     scanf("%d", &n);
//     int r;
//     printf("Enter the number r: ");
//     scanf("%d", &r);
//     int k = n - r;
//     printf("%d", k);

//     int nfact = 1;
//     int rfact = 1;
//     int kfact = 1;

//     for (int i = 1; i <= n; i++)
//     {
//         nfact = nfact * i;
//     }
//     for (int i = 1; i <= r; i++)
//     {
//         rfact = rfact * i;
//     }
//     for (int i = 1; i <= k; i++)
//     {
//         kfact = kfact * i;
//     }
//     int ncr = nfact / (rfact * kfact);
//     printf("The value of ncr is %d:", ncr);

//     return 0;
// }

//this is one wway to do it.
//the other way is to mak ethe functions .

#include <stdio.h>
int factorial(int x){
    int fact = 1;
    for(int i =1;i<=x;i++){
        fact = fact*i;
    }
}

int main()
{

    int n;
    printf("Enter the number n: ");
    scanf("%d", &n);
    int r;
    printf("Enter the number r: ");
    scanf("%d", &r);
    int k = n - r;
    printf("%d", k);

    int nfact = factorial(n);  //n!
    int rfact = factorial(r);  //r!
    int kfact = factorial(k);  //n-r !

    int ncr = nfact / (rfact * kfact);
    printf("The value of ncr is %d:", ncr);

    return 0;
}
