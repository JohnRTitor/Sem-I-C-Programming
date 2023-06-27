#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char* deleteVowel(char*);
int main()
{
    int stringLength;
    char str[1000], *newStr=NULL;
    printf("Enter a string:");
    fgets(str, 1000, stdin);
    stringLength = strlen(str);
    str[stringLength - 1] = '\0'; // strips the end \n character added by fgets
    
    newStr = (char *)calloc(stringLength, sizeof(char));
    if (newStr == NULL)
    {
    	fprintf(stderr, "Memory not allocated for new string.");
    	exit(-1);
    }
    memcpy(newStr, str, stringLength); // copy original str to newStr to modify it
    
    newStr = deleteVowel(newStr);
	printf("The new string is: %s", newStr);
	free(newStr);
    return 0;
}
char* deleteVowel(char* str)
{
	int i, j;
	char element, *location;
	for (i = 0; str[i] != '\0'; i++)
	{
		location = NULL;
		if ( (element = tolower(str[i])) == 'a' || element == 'e' || element == 'i' || element == 'o' || element == 'u' )
			location = str+i; // if vowel found, delete by shifting
		if (location != NULL)
		{
			for (j = location-str; str[j] != '\0'; j++)
				str[j] = str[j + 1];
		}

	}
	
	return str;
}