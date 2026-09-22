#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d", &n);

    for (int i = 1; i <=100; i=i++)
    {
        if (n % i == 0)
        {
            printf("The number is not prime.\n");
            break;
        }
        else
        {
            printf("The number is prime.\n");
            break;
        }
    }

    return 0;
}