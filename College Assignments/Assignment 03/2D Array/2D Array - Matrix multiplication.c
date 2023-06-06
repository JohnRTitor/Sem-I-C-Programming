#include <stdio.h>
#include <stdlib.h>
// Matrix Multiplication

// Read array function
int *readArray(int *arr, int r, int c)
{
	int i, j;
	arr = (int *)calloc(r * c, sizeof(int)); // allocate memory
	if (arr == NULL)
	{
		printf("Memory not allocated!"); //error checking
		exit(2);
	}
	// take inputs
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			printf("\tEnter element#%d-%d:", i + 1, j + 1);
			scanf("%d", (arr + i * c + j));
		}
	}
	return (arr); //return array base address
}
// Print Array
void printArray(int *arr, int r, int c)
{
	int i, j;
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			printf("%d  ", *(arr + i * c + j));
		}
		printf("\n");
	}
}

// main starts
int main()
{
	int i, j, k, xrow, xcolm, yrow, ycolm, mulrow, mulcolm, *xmat, *ymat, *mul;
	printf("Matrix multiplication of two matrixes:\n");
	printf("Enter the row count of the 1st matrix: ");
	scanf("%d", &xrow);
	printf("And how many columns does it have? ");
	scanf("%d", &xcolm);
	printf("Enter row count of the 2nd matrix: ");
	scanf("%d", &yrow);
	printf("How many columns of the 2nd matrix? ");
	scanf("%d", &ycolm);
	if (xcolm != yrow)
	{
		printf("\nColumn count of the 1st matrix have to be the same as the row count of the 2nd matrix, else multiplication is not possible.");
		exit(1); // and exit with return code 1
	}

	// take input and get the base address
	printf("Enter the elements of matrix 1:\n");
	xmat = (int *)readArray(xmat, xrow, xcolm);
	printf("Enter the elements of matrix 2:\n");
	ymat = (int *)readArray(ymat, yrow, ycolm);

	// multiplication starts
	mulrow = xrow;
	mulcolm = ycolm;
	mul = (int *)calloc(mulrow * mulcolm, sizeof(int)); // store the result in mul array
	if (mul == NULL)
	{
		printf("Memory not allocated!"); //error checking
		exit(2);
	}

	for (i = 0; i < mulrow; i++)
	{
		for (j = 0; j < mulcolm; j++)
		{
			*(mul + i * mulrow + j) = 0; // Set mul[i][j] = 0
			for (k = 0; k < xcolm; k++)
			{
				*(mul + i * mulcolm + j) += *(xmat + i * xcolm + k) * *(ymat + k * ycolm + j); // mul[i][j] += xmat[i][k] * ymat[k][j]
			}
		}
	}

	// Print the result
	printf("Completed multiplication of\n");
	printArray(xmat, xrow, xcolm);
	printf("\nand\n\n");
	printArray(ymat, yrow, ycolm);
	printf("\nThe result is:\n");
	printArray(mul, mulrow, mulcolm);

	free(xmat), free(ymat), free(mul); // free the memory block
	return 0;
}
