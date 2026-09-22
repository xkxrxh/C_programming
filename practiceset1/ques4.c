#include <stdio.h>

int main()
{

    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    
    for (int i = 1; i <= n; i++)
    {
        for (int space = 1; space <= n - i; space++)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {

            printf("* ");
        }
        printf("\n");
    }

    return 0;
}

// #include <stdio.h>

// int main()
// {

//     int n;
//     printf("Enter the number: ");
//     scanf("%d", &n);

//     int i = 1;
//     while (i <= n) 
//     {
//         int space = 1;
//         while (space <= n - i)
//         {
//             printf(" ");
//             space++;
//         }
//         int j = 1;
//         while (j <= i)
//         {
//             printf("* ");
//             j++;
//         }
//         printf("\n");
//         i++;
//     }

//     return 0;
// }