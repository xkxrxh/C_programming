#include <stdio.h>

int main()
{
    int n;
    printf("Enter the code");
    scanf("%d", &n);

    int a, b, c;

    for (int a = 1; a <= 3; a++)
    {
        for (int b = 1; b <= 3; b++)
        {
            for (int c = 1; c <= 3; c++)
            {
                if (a != b && b != c && c != a)
                {
                    printf("%d%d%d\n", a, b, c);
                }
            }
        }
    }

    return 0;
}