#include<stdio.h>

int main()
{
    int i, j, k, row;
    printf("Enter the number of rows:");
    scanf("%d", &row);
    for (i=1; i<=row; i++) {
        for (j=1; j<=row-i; j++) {
            printf(" ");
        }
        for (k=1; k<=2*i-1; k++) {
            (k%2==1) ? printf("%d", i) : printf(" ");
        }
        printf("\n");
    }

    return 0;
}