#include <stdio.h>

int main()
{

    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    if (n <= 32767)
    {
        printf("The number is accepted!!\n");
    
    int sum = 0;
    int ld = 0;

    while (n != 0)
    {
        ld = n % 10;
        sum = sum + ld;
        n = n / 10;
    }
    printf("The sum of the digits of the number is %d", sum);

    
}
    return 0;
}