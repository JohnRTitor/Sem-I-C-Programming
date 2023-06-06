#include <stdio.h>
// Sum of all even elements and odd elements in an array

int main()
{
	int a[50], i, size, even = 0, odd = 0;

	printf("How many elements in the array? ");
	scanf("%d", &size);
	// input the element
	for (i = 0; i < size; i++)
	{
		printf("Enter element no %d:", i + 1);
		scanf("%d", &a[i]);
		// if even, add the element to even sum, else add to odd sum
		(a[i] % 2 == 0) ? (even += a[i]) : (odd += a[i]);
	}

	// Print the result
	printf("The sum of even elements in the array is %d and odd elements is %d.", even, odd);

	return 0;
}