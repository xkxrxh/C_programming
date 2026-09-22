#include <stdio.h>

int main()
{

    float p, r, t, s;

    scanf("%f", &p);
    scanf("%f", &r);
    scanf("%f", &t);

    s = (p * r * t) / 100;

    printf("The simple interest of the amount is %f", s);

    return 0;
}