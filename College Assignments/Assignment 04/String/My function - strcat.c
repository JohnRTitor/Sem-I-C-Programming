#include <stdio.h>
void funcStrcat(char destination[], char source[])
{
	int i, j, count;
	for (i = 0; destination[i] != '\0'; i++)
	{
		count = i; //count the destination string size
	}
	for (i = count, j = 0; source[j] != '\0'; i++, j++)
	{
		destination[i] = source[j]; // append source string to destination string from count'th index
	}
}
int main()
{
	char str1[2000], str2[1000];
	printf("Append a string to another.\n Enter string1 (destination):");
	fgets(str1, 1000, stdin);
	printf(" Enter string2 (source):");
	fgets(str2, 1000, stdin);
	funcStrcat(str1, str2);
	
	printf("String2 successfully appended to String2. String1 is now: %s", str1);
	return 0;
}