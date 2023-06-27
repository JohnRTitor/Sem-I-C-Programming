#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FOUND (strcmp(word, "a") == 0 || strcmp(word, "an") == 0 || strcmp(word, "the") == 0 || strcmp(word, "A") == 0 || strcmp(word, "An") == 0 || strcmp(word, "The") == 0)

int main()
{
	int i;
	char tempChar, word[30], sourcePath[]="ReadFile.txt", targetPath[]="WriteFile.txt";
	
	FILE *psource, *ptarget;
	psource = fopen(sourcePath, "r"); // open the file in read mode
	ptarget = fopen(targetPath, "w"); //open the file in write mode
	if (psource == NULL || ptarget == NULL)
	{
		perror("Files cannot be opened.");
		exit(-1);
	}
	
	
	for (i = 0; 1; i++)
	{
		word[i] = fgetc(psource);
		if (feof(psource))
			break;
		
		if (word[i] == ' ' || word[i] == '.' || word[i] == '\n')
		{
			tempChar = word[i]; // store it in tempChar
			word[i] = '\0'; // resets the word
			if (FOUND)
			{
				strcpy(word, " "); // Replacing the word with the space
				fputs(word, ptarget);
			}
			else  // if not found put the word and temp char back
			{
				fputs(word, ptarget);
				fputc(tempChar,  ptarget);
			}
			i = -1; // i is increased to 0 from -1 so next char is saved in word[0]
		}
	}
		
	if (ferror(ptarget))
	{
		printf("Write error."); // Error message if write error happens
		exit(-1);
	}
	printf("Successfully copied the contents of %s to %s and removed the words A, the & an.", sourcePath, targetPath);

	fclose(psource);
	fclose(ptarget);
	return 0;
}