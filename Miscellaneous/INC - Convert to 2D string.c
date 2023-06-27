#include <stdio.h>
#include <string.h>

int main()
{
    int i, j, k=0, count=1, pos;
    char str[1000], substring[50][100];
    printf("Enter a sentence:");
    fgets(str, 1000, stdin);
    str[strlen(str) - 1] = '\0'; // strips the end \n character added by fgets
    
    for (i=0; str[k] != '\0'; i++)
    {
    	for (j=0; (str[k] != ' ' || str[k] != '.'); j++)
    	{
    		substring[i][j] = str[k];
    		k++;
    		pos = j;
    	}
    	substring[i][pos+1] = '\0';
    	count = i;
    }
	
	for (i=0; i<count; i++)
	{
		printf("%s \n", substring[i]);
	}
    
    return 0;
}