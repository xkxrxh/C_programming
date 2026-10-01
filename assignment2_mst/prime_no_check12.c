#include <stdio.h>

int main()
{

    int a, c = 0;
    printf("Enter the number: ");
    scanf("%d", &a);

    for (int i = 1; i <= a; i++)
    {
        if (a % i == 0)
        {
            c++; // where c is the the factor
        }
    }
    if (c == 2)
    {
        printf("The number is prime.");
    }
    else
    {
        printf("The number is not prime.");
    }

    return 0;
}