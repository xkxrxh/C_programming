#include <stdio.h>

int main()
{

    int t;
    printf("Enter the Tank capacity: ");
    scanf("%d", &t);
    int m;
    printf("Enter the mileage of the vehicle: ");
    scanf("%d", &m);
    int d;
    printf("Enter the total disctance to travel: ");
    scanf("%d", &d);
    int s;
    printf("Enter the distance between the two fuel stations: ");
    scanf("%d", &s);

    printf("Total refuel stops are %d\n", d / s);

    printf("Total fuel needed for the trip is %d lt\n", d / m);
    if (d / m <= t)
    {
        printf("The trip is completed in one go.\n");
    }

    else
    {
        printf("The vehicle need %d fuel stops to reach its destination.\n", d / s);
    }

    printf("Trip completed successfully!!!\n");
    return 0;
}