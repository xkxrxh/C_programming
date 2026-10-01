#include <stdio.h>

int main()
{

    int a, b;
    char ques;
    printf("Enter the number a: ");
    scanf("%d", &a);

    printf("Enter the number b: ");
    scanf("%d", &b);

    printf("What do you want to do?(+,-,*,/) ");
    scanf(" %c", &ques);

    if (ques == '+')
    {
        printf("%d", a + b);
    }
    else if (ques == '*')
    {
        printf("%d", a * b);
    }
    else if (ques == '-')
    {
        printf("%d", a - b);
    }
    else if (ques == '/')
    {
        if (b = !0)
        {
            printf("%d", a / b);
        }
        else
        {
            printf("Division is not possible");
        }
    }

    return 0;
}