#include <stdio.h>

int main()
{
    int a;
    printf("Enter the number:");
    scanf("%d", &a);

    int count=0;
    while(a!=0){
        a=a/10;
        count++;
    }

    printf("The number of digits are %d", count);
    return 0;
}