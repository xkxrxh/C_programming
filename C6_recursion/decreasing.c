// #include <stdio.h>
// void greeting(int n ){
//     if(n== 0) return;
//     printf("Good Morninbg\n");
//     greeting(n-1);

//     return;
// }

// int main()
// {

//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     greeting(n);

//     return 0;
// }

#include <stdio.h>
void decreasing(int n ){
    if(n== 0) return;
    printf("%d\n",n);
    decreasing(n-1);

    return;
}

int main()
{

    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    decreasing(n);

    return 0;
}