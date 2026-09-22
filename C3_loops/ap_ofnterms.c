// #include <stdio.h>

// int main()
// {

//     int n;
//     printf("Enter the number till where you want the AP:");
//     scanf("%d", &n);

//     for (int i = 1; i <= n; i = i + 2)
//     {
//         printf("%d\n", i);
//     }

//     return 0;
// }

#include <stdio.h>

int main() {

    int n;
    printf("Enter the number till where you want the AP:");
    scanf("%d", &n);
    
    for (int i = 4; i <= n; i = i + 3)
    {
        printf("%d\n", i);
    }

    return 0;
}