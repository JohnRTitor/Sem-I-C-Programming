#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h> /* for tolower function */

/* Approach:
	First copy the whole string to newString
	Call the findWord function
	if found the word, findWord returns a pointer to the address
	then shift the elements to delete the word
	Call the function again if not found stop
*/

char *findWord(char *, char *);

int main()
{
	int i, stringLength, wordLength, found, count = 0;;
	char str[1000], word[10], *newStr = NULL, *location = NULL;

	printf("Enter the string:");
	fgets(str, 1000, stdin);
	str[strlen(str) - 1] = '\0'; // strip the \n char added by fgets
	printf("Enter the word:");
	fgets(word, 10, stdin);
	word[strlen(word) - 1] = '\0';
	stringLength = strlen(str), wordLength = strlen(word);

	newStr = (char *)calloc(stringLength + 1, sizeof(char)); // allocate memory for newStr
	if (newStr == NULL)
    {
    	fprintf(stderr, "Memory not allocated for new string.");
    	exit(-1);
    }
	memcpy(newStr, str, stringLength + 1);					 // copy original string

	do
	{
		if ((location = findWord(newStr, word)) != NULL) // returns the base address of the word if found
		{
			found = 1;
			count++;
			for (i = (location - newStr); newStr[i] != '\0'; i++)
				newStr[i] = newStr[i + wordLength];
		}
		else
		{
			found = 0;
			break;
		}
	} while (found > 0);
	newStr[strlen(newStr)] = '\0'; // add the \n character

	if (count > 0)
		printf("The word found %d times and successfully removed. The new string is: %s", count, newStr);
	else
		printf("Word not found.");
	
	free(newStr);
	return 0;
}


char *findWord(char *str, char *word)
{
	int i, j, stringLength = strlen(str), wordLength = strlen(word), count = 0;
	char *location = NULL;
	for (i = 0; i < stringLength; i++)
	{
		count = i;
		for (j = 0; j < wordLength; j++)
		{
			if (tolower(str[count]) == tolower(word[j])) // convert to lowercase, this makes the input non case sensitive
			{
				count++;
			}
		}
		if ((count - i) == wordLength)
		{
			location = str + i;
			break;
		}
	}

	return location; // if found return base address of the word in the string
}