#include <stdio.h>
#include <stdlib.h>
// C program to find out average of non negative numbers
int main()
{
	int *arr = NULL, i, n, sum = 0;
	double average;
	int max_attempts = 5, attempts = 0; // for memory allocation
	printf("How many numbers?");
	scanf("%d", &n);
	// memory allocation: gigachad edition
	do
	{
		arr = (int *)calloc(n, sizeof(int));
		if (arr == NULL)
		{
			printf("Memory allocation failed. Retrying...\n");
			attempts++;
		}
	} while (arr == NULL && attempts < max_attempts);
	if (arr == NULL)
	{
		printf("Memory allocation failed after %d attempts. Exiting program...\n", max_attempts);
		exit(-1);
	}

	for (i = 0; i < n; i++)
	{
		do
		{
			printf("Enter no #%d: ", i + 1);
			scanf("%d", &arr[i]);
			if (arr[i] < 0)
			{
				printf("Please enter a non-negative integer. Try again.\n");
			}
		} while (arr[i] < 0);
		sum += arr[i];
	}
	average = (double)sum/n;
	printf("The average of the %d numbers is: %.2lf.", n, average);
	free(arr); // free the allocated memory
	return 0;
}