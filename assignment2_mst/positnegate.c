#include <stdio.h>

int main()
{

    int num, positive = 0, negative = 0, zero = 0;
    char choice;

    do
    {
        printf("Enter the number: ");
        scanf("%d", &num);

        if (num > 0)
        {
            positive++;
        }
        else if (num < 0)
        {
            negative++;
        }
        else
        {
            zero++;
        }

        printf("Do you want to input another number (y/n)?");
        scanf(" %c", &choice);
    }

    while (choice == 'y');
      
    printf("Positive no count: %d\n", positive);
    printf("negative no count: %d\n", negative);
    printf("zero no count: %d\n", zero);

    return 0;
}