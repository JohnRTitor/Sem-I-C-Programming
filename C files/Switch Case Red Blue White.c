#include <stdio.h>

int main()
{
	char option;
	printf("Enter an option:");
	scanf("%c", &option);
	switch (option)
	{
		case 'r':
		case 'R': printf("RED");
					break;
		case 'b':
		case 'B': printf("BLUE");
					break;
		case 'w':
		case 'W': printf("WHITE");
					break;
		default: printf("Invalid input.");
					break;
	}
	return 0;
}