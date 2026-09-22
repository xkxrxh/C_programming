#include <stdio.h>

int main()
{
    int a;
    printf("EWnter the number:");
    scanf("%d", &a);

    if (a >= 100 && a < 1000)
    {
        printf("The number contains three digits.");
    }
    else
    {
        printf("The number doesnt contain three digits.");
    }

    return 0;
}