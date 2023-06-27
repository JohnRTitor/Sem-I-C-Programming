#include <stdio.h>
#include <stdlib.h>
// Count the number of spaces, new lines, tabs, and other characters in file

int main()
{
    int spaceCount=0, NLCount=0, tabCount=0, charCount=0;
    char ch;
    FILE *fp;
    fp = fopen("ReadFile.txt", "r"); //open the file in read mode
    if (fp == NULL)
    {
    	perror("File cannot be opened.");
    	exit(-1);
    }
    
    printf("File successfully opened.");
	while (!feof(fp))
	{
		ch = fgetc(fp);
		if (ch == ' ')
			spaceCount++;
		else if (ch == '\n')
			NLCount++;
		else if (ch == '\t')
			tabCount++;
		else
			charCount++;
	}
	printf("The file content has %d spaces, %d new lines, %d tabs and %d other characters.", spaceCount, NLCount, tabCount, charCount);
        
    fclose(fp);
    return 0;
}