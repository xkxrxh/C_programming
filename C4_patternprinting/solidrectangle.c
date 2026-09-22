#include <stdio.h>

int main()
{

    int a;
    printf("Enter the length:");
    scanf("%d", &a);

    int b;
    printf("Enter the breadth:");
    scanf("%d", &b);

    for (int i = 1; i <= b; i++)   //outer loop--->no of lines
    {

        for (int i = 1; i <= a; i++)   //inner loop--->no of stars in each line 
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}