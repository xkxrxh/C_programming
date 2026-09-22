#include <stdio.h>

int main() {
    
    float x1 = 22.0;
    int x2 = 34;
    int x3 = 44;

    float p = x1+x2+x3;

    float percent = (p/300)*(100.0);

    printf("The percentage of the student is %f", percent);
    
    return 0;
}