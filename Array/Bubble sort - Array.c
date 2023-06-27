#include <stdio.h>
// Sort elements in ascending order in an array

int main()
{
	int a[50], i, j, n, t, flag;

	printf("How many numbers do you want to sort?");
	scanf("%d", &n);
	if (n<2) {
		printf("Atleast two numbers needed to sort.");
		return 0;
	}
	
	
	for (i = 0; i < n; i++)
	{
		printf("Enter no %d:", i + 1);
		scanf("%d", &a[i]);
	}
	// Before sorting
	printf("\nBefore sorting the numbers are:\n");
	for (i = 0; i < n; i++)
	{
		printf("%d, ", a[i]);
	}

	//Sorting starts
	for (i = 0; i < n - 1; i++)
	{
		/*Pass loop
		flag is used to determine already sorted numbers
		flag=0 sorted */
		flag = 0;
		for (j = 0; j < n - i - 1; j++)
		{
			//Comparison loop
			if (a[j] >= a[j + 1])
			{
				// if a number is greater than the next number, swap the numbers
				t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
				// flag = 1, mark not sorted
				flag = 1;
			}
			else
			{
				/* for same numbers in the elements
			continue loop to j++ */
				continue;
			}

			if (flag == 0)
			{
				// if sorted, break the loop
				break;
			}
		}
	}

	// After sorting
	printf("\nSorted in ascending order:\n");
	for (i = 0; i < n; i++)
	{
		printf("%d, ", a[i]);
	}

	return 0;
}