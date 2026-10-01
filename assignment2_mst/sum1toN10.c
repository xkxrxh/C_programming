#include <stdio.h>

int main()
{

    int sum = 0;
    int a;
    printf("Enter the number a till where u want the sum: ");
    scanf("%d", &a);

    for (int i = 1; i <= a; i++)
    {
        sum += i;
    }
    printf("%d", sum);

    return 0;
}