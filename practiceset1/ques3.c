#include <stdio.h>
#include <math.h>

int main()
{

    int year;
    double amount;

    int p;
    printf("Enter the principal amount: ");
    scanf("%d", &p);
    int r;
    printf("Enter the rate of interest: ");
    scanf("%d", &r);
    int g;
    printf("Enter the target goal amount: ");
    scanf("%d", &g);

    for (year = 0; amount < g; year++)
    {
        amount = p * pow(1 + (r / 100.0), year);
        printf("Total amount in the year %d is %.2f\n", year, amount);
    }

    printf("Total number of years needed is %d\n", year - 1);
    printf("Goal reached in %d years", year);

    return 0;
}