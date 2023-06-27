#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char *convertToString(char);
char *strLower(char[]);
char *replaceWord(char[], char[], char[]);

int main()
{
	char text[1000], *newText, wordToReplace[] = "good", replaceWith[] = "bad";
	printf("Enter a sentence or paragraph:");
	fgets(text, 1000, stdin);
	text[strlen(text) - 1] = '\0';

	newText = replaceWord(text, wordToReplace, replaceWith);
	printf("Successfully replaced the word %s with %s. \nThe new text is: %s", wordToReplace, replaceWith, text);

	free(text);
	return 0;
}

char *convertToString(char ch)
{
	char *str = (char *)calloc(2, sizeof(char));
	str[0] = ch;
	str[1] = '\0';
	return str;
}
char *strLower(char str[])
{
	int i;
	char *result = (char *)calloc(strlen(str) + 1, sizeof(char));
	for (i = 0; str[i] != '\0'; i++)
	{
		result[i] = (str[i] >= 'A' && str[i] <= 'Z') ? (str[i] + 32) : str[i];
	}
	result[i] = '\0';
	return result;
}

char *replaceWord(char str[], char wordToReplace[], char replaceWith[])
{
	int i, j;
	char word[20], *result = (char *)calloc(strlen(str) + 1, sizeof(char));

	for (i = 0, j = 0; 1; i++, j++)
	{
		if (isalpha(str[i]) != 0)
			word[j] = str[i]; // if str[i] alphabet then store it in word[j]
		else				  // as soon as it encounters a non alpha character or space
		{
			word[j] = '\0';
			if (strcmp(strLower(word), wordToReplace) == 0) // if found replace
				strcat(result, replaceWith);
			else // else keep the word
				strcat(result, word);
			strcat(result, convertToString(str[i])); // append the str[i] character at the end, this is for trailing spaces and characters
			j = -1;									 // reset the word index to -1 so it is increased to 0
		}

		if (str[i] == '\0')
			break; // if the original string ends, break the loop here
	}
	return result;
}