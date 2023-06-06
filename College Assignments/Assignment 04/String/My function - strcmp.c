#include <stdio.h>
#include <stdlib.h>
// String compare
int funcStrcmp(char str1[], char str2[])
{
	int i, retval;
	for (i=0; (str1[i] != '\0' && str2[i] != '\0') ; i++) {
		if (str1[i] == str2[i]) {
			retval = 0;
		}
		else {
			retval = str1[i] - str2[i];
			break;
		}
	}
	
	return (retval);
}

int main()
{
	char string1[1000], string2[1000], result;
	printf("Enter the string1:");
	fgets(string1, 1000, stdin); // take input
	printf("Enter the string2:");
	fgets(string2, 1000, stdin);
	result = funcStrcmp(string1, string2);
	(result == 0) ? printf("Both strings are equal.") : printf("Strings are not equal.");
	printf(" The value returned by funcStrcmp is %d.", result);
	return 0;
}