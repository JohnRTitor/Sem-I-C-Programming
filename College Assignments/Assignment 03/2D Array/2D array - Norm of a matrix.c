#include <stdio.h>
#include <math.h>
// Find out the norm of a matrix
// The norm is the squre root of sum of all elements

int main()
{
	int i, j, row, colm, arr[10][10], sum = 0;
	printf("How many rows?");
	scanf("%d", &row);
	printf("How many columns?");
	scanf("%d", &colm);
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < colm; j++)
		{
			printf("Enter element #%d-%d:\n", i + 1, j + 1);
			scanf("%d", &arr[i][j]);
			sum += arr[i][j];
		}
	}
	printf("The norm of the matrix is %.3f.", sqrt(sum));
}