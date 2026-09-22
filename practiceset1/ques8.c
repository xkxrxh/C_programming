#include <stdio.h>

int main()
{

    int x1, x2, x3, y1, y2, y3;

    printf("Enter x1 and y1:");
    scanf("%d %d", &x1, &y1);

    printf("Enter x2 and y2:");
    scanf("%d %d", &x2, &y2);

    printf("Enter x3 and y3:");
    scanf("%d %d", &x3, &y3);

    int a = x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2);

    if (a == 0)
    {
        printf("Since the area 0f the the triangle is 0 therefore the points are collinear.");
    }
    else
    {
        printf("The points are not collinear.");
    }

    return 0;
}