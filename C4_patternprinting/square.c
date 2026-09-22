#include <stdio.h>

int main()
{

    int a;
    printf("Enter the length:");
    scanf("%d", &a);

    int b;
    printf("Enter the length:");
    scanf("%d", &b);

    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= b; j++)
        {
            if (i == 1 || j == b || i == a || j == 1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}