#include <stdio.h>

int main()
{
    int i, j, k, row, space, increcount, decrecount, m, n;
    printf("Enter the number of rows:");
    scanf("%d", &row);
    for (i = 1; i <= row; i++)
    {
        for (space = 1; space <= row - i; space++)
        {
            printf("  ");
        }
        increcount=i;
        decrecount=2*i-1;
        for (j = 1; j < i; j++)
        {
            printf("%d ", increcount++);
        }
        for (k = 2*i-1; k >= i ; k--)
        {
            printf("%d ", decrecount--);
        }
        
        printf("\n");
    }

    return 0;
}