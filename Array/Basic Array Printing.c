#include <stdio.h>
// Take inputs and print the array

int main()
{
	int a[50], i, size;

	printf("How many elements in the array? ");
	scanf("%d", &size);
	// input the element
	for (i = 0; i < size; i++)
	{
		printf("Enter element no %d:", i + 1);
		scanf("%d", &a[i]);
	}

	// Print the result
	printf("The inputed array is:\n");
	for (i = 0; i < size; i++)
	{
		printf("%d, ", a[i]);
	}

	return 0;
}