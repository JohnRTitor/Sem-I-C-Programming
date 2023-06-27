#include <stdio.h>
#include <string.h>

int main()
{
	FILE *fp = NULL;
	int i;
	char input[100]="", longestName[100]="";
	fp = fopen("names.txt", "w+");
	
	printf("Enter names one by one and press exit anytime to stop.");
	while (1)
	{
		printf(">>");
		fgets(input, 100, stdin);
		input[strlen(input)-1] = '\0';
		if (strcmp(input, "exit") == 0)
		{
			printf("Stopped taking input. Successfully stored the names in names.txt");
			break;
		}
		fprintf(fp, "%s\n", input);
	}
	rewind(fp);
	for (i=0; !feof(fp); i++)
	{
		input[i] = fgetc(fp);
		if (input[i] == '\n')
		{
			input[i] = '\0';
			if (strlen(longestName) < strlen(input))
			{
				strcpy(longestName, input);
			}
			i = -1; // resets the string index if found
			strcpy(input, "\0"); // resets the string
		}
	}
	printf("The longest name is %s.", longestName);
	fclose(fp);
	return 0; 
}