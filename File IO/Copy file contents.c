#include <stdio.h>
#include <stdlib.h>
// Copy file contents
int main()
{
    FILE *psource, *ptarget;
    char ch, source[] ="ReadFile.txt", target[] ="WriteFile.txt";
    psource = fopen(source, "r"); //open the file in read mode
    ptarget = fopen(target, "w"); //open the file in write mode
    if (psource == NULL || ptarget == NULL)
    {
    	perror("File cannot be opened.");
    	exit(-1);
    }
    
    printf("Files successfully opened.\n");
	while (!feof(psource))
	{
	    ch = fgetc(psource);
	    fprintf(ptarget, "%c", ch);
	}
	printf("Successfully copied contents from %s to %s.", source, target);
        
    fclose(psource), fclose(ptarget);
    return 0;
}