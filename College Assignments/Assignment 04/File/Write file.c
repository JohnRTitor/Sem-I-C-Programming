#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Write into a file
int main()
{
	FILE *fp;
	char str[1000];
	fp = fopen("WriteFile.txt", "w"); //open the file in write mode
	if (fp == NULL)
	{
		perror("File cannot be created/opened.");
		exit(-1);
	}

	printf("File Successfully opened. Now enter the string you want to write to the file:");
	fgets(str, 1000, stdin);
	str[strlen(str) - 1] = '\0';

	fprintf(fp, "%s\n", str);
	if (ferror(fp))
	{
		printf("Write error.");
		exit(-1);
	}
	printf("Successfully wrote the string in the file.");

	fclose(fp);
	return 0;
}