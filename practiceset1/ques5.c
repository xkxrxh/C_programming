#include <stdio.h>

int main()
{

    int n;
    int count = 0;

    for (int i = 2; i <= 500; i++)
    {
        int is_prime = 1; // we have assumed that the numeber is prime initially

        for (int j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                is_prime = 0; // found a factor so stop checking the tests
                break;
            }
        }
        if (is_prime == 1)
        {
            printf("%d ", i);
            count++;
        }
    }

    printf("Total prime numbers found are %d", count);

    return 0;
}