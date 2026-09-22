#include <stdio.h>

int main()
{

    int a;
    printf("Enter the number:");
    scanf("%d", &a);

    int mid = (a / 2) + 1;

    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= a; j++)
        {
            if (i == mid || j == mid)
            {
                printf(" *");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}
