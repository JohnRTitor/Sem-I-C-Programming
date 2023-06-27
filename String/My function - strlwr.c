#include <stdio.h>
#include <stdlib.h>
// Convert a string to lowercase

char *funcStrlwr(char s[])
{
	int i, count;
	char *ptr;
	for (i = 0; s[i] != '\0'; i++)
	{
		count = i; // count the size of the string
	}

	ptr = (char *)calloc(count + 1, sizeof(char)); //allocate memory for all chars including null char
	if (ptr == NULL)
	{
		fprintf(stderr, "Memory not allocated. "); //error message and return with code 1
		exit(1);
	}

	for (i = 0; s[i] != '\0'; i++)
	{
		*(ptr + i) = (s[i] >= 65 && s[i] <= 90) ? (s[i] + 32) : s[i]; // if s[i] is uppercase char, convert and assign to ptr
	}

	return (ptr); // return the base address of ptr
}

int main()
{
	char str[1000], *convertedstr = NULL;
	printf("Enter the string:");
	fgets(str, 1000, stdin);		// take input
	convertedstr = funcStrlwr(str); // call the function and assign the base address to convertedstr

	printf("%s", convertedstr); // print converted string
	free(convertedstr); // free up the memory
	return 0;
}