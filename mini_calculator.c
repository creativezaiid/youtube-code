#include <stdio.h>

int main()
{
    int n1, n2, choice;

    printf("********* WELCOME TO MY CALCULATOR **********\n");
    printf("What do you want\n");
    printf(" 1. Addition\n 2. Subtraction\n 3. Multiply\n 4. Division\n ");
    scanf("%d", &choice);

    printf("enter two numbers\n");
    scanf("%d%d", &n1, &n2);

    switch (choice)
    {
    case 1:
        printf("%d+%d=%d\n", n1, n2, n1 + n2);
        break;

    case 2:
        printf("%d-%d=%d\n", n1, n2, n1 - n2);
        break;

    case 3:
        printf("%d*%d=%d\n", n1, n2, n1 * n2);
        break;

    case 4:
        if (n2 == 0)
        {
            printf("number can not be divided by 0\n");
        }
        else
        {
            printf("%d/%d=%d", n1, n2, n1 / n2);
        }
        break;

    default:
        printf("you entered wrong choice");
    }
    return 0;
}
