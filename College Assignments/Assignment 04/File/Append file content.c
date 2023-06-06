#include <stdio.h>
#include <stdlib.h>

// Write the content of a file at the end of another
int main()
{
	FILE *psource, *ptarget;
	char ch, sourcePath[]="ReadFile.txt", targetPath[]="WriteFile.txt";
	psource = fopen(sourcePath, "r"); // open the file in read mode
	ptarget = fopen(targetPath, "a"); //open the file in append mode
	if (psource == NULL || ptarget == NULL)
	{
		perror("Files cannot be opened.");
		exit(-1);
	}
	
	while (!feof(psource))
	{
		ch = fgetc(psource);
		fprintf(ptarget, "%c", ch);
	}
		
	if (ferror(ptarget))
	{
		printf("Write error.");
		exit(-1);
	}
	printf("Successfully appended the contents of %s to %s.", sourcePath, targetPath);

	fclose(psource);
	fclose(ptarget);
	return 0;
}