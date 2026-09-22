#include <stdio.h>

int main()
{

    float basic, da, ta, gross_salary;

    printf("Enter the basic salary of the person: ");
    scanf("%d", &basic);

    da = 0.1 * basic;
    ta = 0.12 * basic;
    gross_salary = basic + da + ta;

    printf("DA (10%%): %f\n", da);
    printf("TA (12%%): %f\n", ta);

    printf("\nThe gross salary of the perosn is: %f\n", gross_salary);

    return 0;
}