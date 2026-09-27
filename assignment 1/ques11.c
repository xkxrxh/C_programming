#include <stdio.h>

int main()
{

    int present = 0;
    int absent = 0;
    int status;

    printf("Enter the attendance for 30 working days(1 for present,0 for absent):\n\n");

    for (int days = 1; days <= 30; days++)
    {
        printf("Enter the attendance of day %d: ", days);
        scanf("%d", &status);
        if (status == 1)
        {
            present++;
        }
        else
        {
            absent++;
        }
    }
    printf("Total days present is %d", present);
    printf("Total days absent is %d", absent);

    float attendance_percentage = ((present + absent) * 100) / 30;

    printf("The attendance percentage of the kid is %f", attendance_percentage);

    return 0;
}