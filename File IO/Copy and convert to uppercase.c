#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/* Copy the  content of a file to another
 And also convert all lowercase characters to uppercase */

int main()
{
	FILE *psource, *ptarget;
	char ch, sourcePath[]="ReadFile.txt", targetPath[]="WriteFile.txt";
	psource = fopen(sourcePath, "r"); // open the file in read mode
	ptarget = fopen(targetPath, "w"); //open the file in write mode
	if (psource == NULL || ptarget == NULL)
	{
		perror("Files cannot be opened.");
		exit(-1);
	}
	
	while (!feof(psource))
	{
		ch = fgetc(psource);
		if (ch >= 'a' && ch <= 'z')
			ch -= 32; // convert to uppercase
		fprintf(ptarget, "%c", ch);
	}
		
	if (ferror(ptarget))
	{
		printf("Write error."); // Error message if write error happens
		exit(-1);
	}
	printf("Successfully copied the contents of %s to %s and converted the text to uppercase.", sourcePath, targetPath);

	fclose(psource);
	fclose(ptarget);
	return 0;
}