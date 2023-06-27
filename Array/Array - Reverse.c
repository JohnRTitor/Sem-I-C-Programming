#include <stdio.h>
#include <conio.h>

int main()
{
	int i, size, arr[50], b[50];
	printf("How many elements?\n");
	scanf("%d", &size);
	for (i = 0; i < size; i++)
	{
		printf("Enter element#%d:\n", i + 1);
		scanf("%d", &arr[i]);
	}
	for (i=0; i<size; i++) {
		b[size-1-i] = arr[i]; //array index - i to find the reversed position
	}
	
	printf("Before reversing the array is:\n");
	for (i=0; i<size; i++) {
		printf("%d\n", arr[i]);
	}
	
	printf("After reversing the array is:\n");
	for (i=0; i<size; i++) {
		printf("%d\n", b[i]);
	}
	
	
	getch();
	return 0;
}
