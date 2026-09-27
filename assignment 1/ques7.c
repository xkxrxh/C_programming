#include <stdio.h>
#include <math.h>

int main()
{

    float n1;
    printf("Enter the latitude of point 1: ");
    scanf("%f", &n1);
    float n2;
    printf("Enter the longitude of point 1: ");
    scanf("%f", &n2);
    float n3;
    printf("Enter the latitude of point 2: ");
    scanf("%f", &n3);
    float n4;
    printf("Enter the longitude of point 2: ");
    scanf("%f", &n4);

    float distance = sqrt(pow(n1 - n2, 2) + pow(n4 - n3, 2));

    printf("The distnace between the two points is %f", distance);

    return 0;
}