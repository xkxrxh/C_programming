#include <stdio.h>

int main()
{
    int a;
    printf("Enter the number: ");
    scanf("%d", &a);

    if (a % 5 == 0 && a % 3 == 0)
    {
        printf("The number is divisible by 5 and 3");
    }
    else if (a % 3 == 0)
    {
        printf("The number is divisible by 3");
    }
    else if (a % 5 == 0)
    {
        printf("The number is divisible by 5");
    }
    else if (a % 15 == 0)
    {
        printf("The number is divisible by 15");
    }
    else
    {
        printf("");
    }

    return 0;
}