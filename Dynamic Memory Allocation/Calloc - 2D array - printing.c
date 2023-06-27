#include <stdio.h>
#include <stdlib.h>
// Matrix input and printing using functions

int *readArray(int *a, int r, int c)
{
	int i, j;
	a = (int *)calloc(r * c, sizeof(int));
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			printf("Enter element #%d-%d:", i, j);
			scanf("%d", (a + i * c + j));
		}
	}
	return (a);
}
// Print array function
void printArray(int *a, int r, int c)
{
	int i, j;
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			printf("%d  ", *(a + i * c + j));
		}
		printf("\n");
	}
}

int main()
{
	int *arr, row, colm;
	printf("Matrix input and printing:\n");
	printf("How many rows?");
	scanf("%d", &row);
	printf("How many columns?");
	scanf("%d", &colm);
	arr = (int *)readArray(arr, row, colm);
	printf("The entered matrix (2D matrix) is:\n");
	printArray(arr, row, colm);
	return 0;
}