#include <stdio.h>
// Search an element in array

int main()
{
	int a[50], i, size, searchFor, flag = 0, pos;

	printf("How many elements in the array? ");
	scanf("%d", &size);
	// input the elements
	for (i = 0; i < size; i++)
	{
		printf("Enter element no %d:", i + 1);
		scanf("%d", &a[i]);
	}
	// Which element to search?
	printf("Enter an element to look for and delete:");
	scanf("%d", &searchFor);

	// search for the element, if found set flag=1 and break the loop
	for (i = 0; i < size; i++)
	{
		if (a[i] == searchFor)
		{
			flag = 1;
			pos = i;
			break;
		}
	}

	// search done
	if (1 == flag)
	{
		for (i = pos; i < size; i++)
		{
			a[i] = a[i + 1];
		}
		printf("%d found in the array and successfully deleted.\n", searchFor);
		for (i = 0; i < size - 1; i++)
		{
			printf("%d\n", a[i]);
		}
	}
	else
	{
		printf("%d not found in array.", searchFor);
	}
	return 0;
}