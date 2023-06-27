#include <stdio.h>
#include <conio.h>

int main()
{
	int i, insertThis, pos, size, arr[50];
	printf("How many elements?\n");
	scanf("%d", &size);
	for (i = 0; i < size; i++)
	{
		printf("Enter element#%d:\n", i + 1);
		scanf("%d", &arr[i]);
	}
	printf("Which number to insert?\n");
	scanf("%d", &insertThis);
	printf("Where? Which position?\n");
	scanf("%d", &pos);
	// first shift the elements by one to the right
	for (i=size;  i>=pos; i--) {
		arr[i] = arr[i-1];
	}
	// then insert the element to pos-1 index
	arr[pos-1] = insertThis;
	size++;
	
	printf("After insertion of %d the array is:\n", insertThis);
	for (i=0; i<size; i++) {
		printf("%d\n", arr[i]);
	}
	
	
	getch();
	return 0;
}
