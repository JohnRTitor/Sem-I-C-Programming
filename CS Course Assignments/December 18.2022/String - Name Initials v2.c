#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define MALLOC_ERROR(ptr) ({\
				if (ptr == NULL)\
				{\
					perror("Memory allocation failed bruh.");\
					exit(-1);\
				}\
			})
#define REALLOC(ptr, size) ({\
				ptr = (char *)realloc(ptr, size*sizeof(char));\
				MALLOC_ERROR(ptr);\
			})
#define CALLOC(ptr, size) ({\
				ptr = (char *)calloc(size, sizeof(char));\
				MALLOC_ERROR(ptr);\
			})
/* Above are some multiline macros to handle memory allocation and errors */


char *getInitials(char[]);
char *getInitialsWithSurname(char[]);

int main()
{
	char name[1000], *initials;
	printf("Enter a name:");
	fgets(name, 1000, stdin);
	name[strlen(name) - 1] = '\0';

	initials = getInitialsWithSurname(name);
	printf("The name \"%s\" with just initials and surname is: %s", name, initials);

	free(initials);
	return 0;
}

// getInitials function takes a single word from a name and returns just its initial with (. )
char *getInitials(char str[])
{
	char *result = NULL;
	CALLOC(result, 4);
	result[0] = toupper(str[0]);
	result[1] = '.';
	result[2] = ' ';
	result[3] = '\0';
	return result;
}

// This function takes a full name as it's argument and returns a string with initials and surname 
char *getInitialsWithSurname(char str[])
{
	int i, j;
	char *word=NULL, *result = NULL;
	CALLOC(result, strlen(str)+1);
	
	for (i = 0, j = 0; 1; i++, j++)
	{
		if (str[i] == '\0') // for last name 
		{
			REALLOC(word, j+1);
			word[j] = str[i];
			strcat(result, word); // store the last name as it is
			break;
		}
		
		if (isalpha(str[i]) != 0)
		{
			REALLOC(word, j+1);
			word[j] = str[i]; // if str[i] alphabet then store it in word[j]
		}
		else				  // as soon as it encounters a non alpha character or space
		{
			REALLOC(word, j+1);
			word[j] = '\0';
			strcat(result, getInitials(word)); // store the initials
			j = -1;									 // reset the word index to -1 so it is increased to 0
		}
	}
	free(word);
	return result;
}