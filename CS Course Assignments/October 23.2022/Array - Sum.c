#include <stdio.h>
// Sum all elements of an array

int main()
{
	int a[50], i, size, sum = 0;

	printf("How many elements in the array? ");
	scanf("%d", &size);
	// input the element
	for (i = 0; i < size; i++)
	{
		printf("Enter no %d:", i + 1);
		scanf("%d", &a[i]);
		sum += a[i];
	}
	
	// Print the result
	printf("The sum of all elements in the array is %d.", sum);
	
	return 0;
}