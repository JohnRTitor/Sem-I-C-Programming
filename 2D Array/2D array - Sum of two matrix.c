#include<stdio.h>

int main()
{
    int a[50][50], b[50][50], sum[50][50], i, j, row, colm;
    printf("How many rows the two matrixes should have?");
    scanf("%d", &row);
    printf("How many columns the two matrixes should have?");
    scanf("%d", &colm);
    printf("Please enter the first matrix (A):\n");
    for (i=0; i<row; i++) {
    	for (j=0; j<colm; j++) {
    		printf("Enter element #%d-%d:", i+1, j+1);
    		scanf("%d", &a[i][j]);
    	}
    }
    printf("Please enter the second matrix (B):\n");
    for (i=0; i<row; i++) {
    	for (j=0; j<colm; j++) {
    		printf("Enter element #%d-%d:", i+1, j+1);
    		scanf("%d", &b[i][j]);
    	}
    }
    
    // summing happens here
    for (i=0; i<row; i++) {
    	for (j=0; j<colm; j++) {
    		sum[i][j] = a[i][j] + b[i][j];
    	}
    }
    
    // print sum
    for (i=0; i<row; i++) {
    	for (j=0; j<colm; j++) {
    		printf("%d\n", sum[i][j]);
    	}
    }
    return 0;
}