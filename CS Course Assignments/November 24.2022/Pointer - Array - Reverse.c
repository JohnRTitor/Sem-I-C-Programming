#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
	int i, size, *arr, *brr;
	printf("How many elements?\n");
	scanf("%d", &size);
	// Dynamically allocate memory using calloc function
	// calloc(a, b) allocates a*b bytes of memory
	arr = (int *)calloc(size, sizeof(int));
	brr = (int *)calloc(size, sizeof(int));
	for (i = 0; i < size; i++)
	{
		printf("Enter element#%d:\n", i + 1);
		scanf("%d", arr + i);
	}
	for (i = 0; i < size; i++)
	{
		*(brr + size - 1 - i) = *(arr + i); //array index - i to find the reversed position
	}

	printf("Before reversing the array is:\n");
	for (i = 0; i < size; i++)
	{
		printf("%d\n", *(arr + i));
	}

	printf("After reversing the array is:\n");
	for (i = 0; i < size; i++)
	{
		printf("%d\n", *(brr + i));
	}

	// free the allocated memory
	free(arr);
	free(brr);
	getch();
	return 0;
}
