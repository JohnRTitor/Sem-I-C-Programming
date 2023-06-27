#include <stdio.h>
#include <stdlib.h>
// Reverse a string
char *funcStrrev(char s[])
{
	int i, count;
	char *ptr;
	for (i = 0; s[i] != '\0'; i++)
	{
		count = i; // count the size of the string
	}
	ptr = (char *)calloc(count + 1, sizeof(char)); //allocate memory for all chars including null char
	for (i = 0; s[i] != '\0'; i++)
	{
		*(ptr + i) = s[count - 1 - i]; // reverse the string and store it in ptr
	}
	return (ptr); // return the base address of ptr
}

int main()
{
	char str[1000], *revstr = NULL;
	printf("Enter the string:");
	fgets(str, 1000, stdin);		  // take input
	revstr = funcStrrev(str); // call the function and assign the base address to revstr

	printf("%s", revstr); //print reversed string
	free(revstr);
	return 0;
}