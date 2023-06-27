#include <stdio.h>
// Print all diagonal elements of a matrix

int main()
{
	int i, j, row, colm, arr[10][10];
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
		}
	}
	// printing the diagonal elements
	printf("The diagonal elements are:\n");
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < colm; j++)
		{
			if (i == j)
			{
				printf("%d\n", arr[i][j]);
			}
		}
	}
	return 0;
}