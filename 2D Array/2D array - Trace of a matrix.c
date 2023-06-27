#include<stdio.h>
// Find out the trace of a matrix (the sum of all elements in the principal diagonal)

int main()
{
	int i, j, row, colm, arr[10][10], sum=0;
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
			if (i==j) {
			sum += arr[i][j];
			}
		}
	}
	printf("The trace of the matrix is %d.", sum);
	return 0;
}