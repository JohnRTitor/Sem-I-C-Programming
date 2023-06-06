#include <stdio.h>
#include <stdlib.h>
// Read file
int main()
{
    FILE *fp;
    char ch;
    fp = fopen("ReadFile.txt", "r"); //open the file in read mode
    if (fp == NULL)
    {
    	perror("File cannot be opened.");
    	exit(-1);
    }
    
    while (!feof(fp))
    {
    	ch = fgetc(fp);
    	printf("%c", ch);
    }
    
    fclose(fp);
    return 0;
}