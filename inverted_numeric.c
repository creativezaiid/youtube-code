#include <stdio.h>

int main()
{
    int n, i, j, k;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (i = n; i >= 1; i--)
    {
        for (j = n - 1; j >= i; j--)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        for (k = i - 1; k >= 1; k--)
        {
            printf("%d", k);
        }
        printf("\n");
    }
    return 0;
}