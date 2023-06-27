#include <stdio.h>
#include <conio.h>
int main()
{
	int a[50], i, size, searchFor, flag = 0, pos;
	printf("How many elements?:\n");
	scanf("%d", &size);
	for (i = 0; i < size; i++)
	{
		printf("Enter element#%d:\n", i + 1);
		scanf("%d", &a[i]);
	}
	printf("Enter an element to look for:");
	scanf("%d", &searchFor);
	// Search for the element
	for (i = 0; i < size; i++)
	{
		if (a[i] == searchFor)
		{
			flag = 1;
			pos = i;
			break;
		}
	}
	(1==flag) ? printf("%d found in array on position %d.", searchFor, pos+1) : printf("%d is not found in the array.", searchFor);
	getch();
	return 0;
}
