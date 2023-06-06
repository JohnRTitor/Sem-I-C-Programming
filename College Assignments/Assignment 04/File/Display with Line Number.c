#include <stdio.h>
#include <stdlib.h>
// Display file content along with line numbers
int main()
{
	FILE *fp;
	char ch;
	int line;
	fp = fopen("ReadFile.txt", "r");
	if (fp == NULL)
	{
		perror("Error reading file.");
		exit(-1);
	}
	
	printf("File successfully read! The content is below: \n1. ");
	line = 2;
	while (!feof(fp))
	{
		ch = fgetc(fp);
		printf("%c", ch);
		if (ch == '\n')
			printf("%d. ", line++);
	}
	
	return 0;
}