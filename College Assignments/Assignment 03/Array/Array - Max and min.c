#include <stdio.h>
#include <conio.h>
int main()
{
	int a[50], i, size, min, max;
	printf("How many elements?:\n");
	scanf("%d", &size);
	for (i = 0; i < size; i++)
	{
		printf("Enter element#%d:\n", i + 1);
		scanf("%d", &a[i]);
	}
	max = a[0], min = a[0];
	for (i = 0; i < size; i++)
	{
		if (a[i] > max)
		{
			max = a[i];
		}
		if (a[i] < min)
		{
			min = a[i];
		}
	}
	printf("%d is the maximum number, while %d is the minimum in the array.", max, min);
	getch();
	return 0;
}
