#include <stdio.h>
#include <string.h>
#include <ctype.h>

void getInitials(char *);
int main()
{
	char name[100];
	printf("Enter a name:");
	fgets(name, 100, stdin);
	name[strlen(name)-1] = '\0';
	printf("The name initials are:\n");
	getInitials(name);	
	return 0;
}

void getInitials(char name[])
{
	int i;
	printf("%c. ", toupper(name[0])); // print the first name initial
	
	for (i=0; name[i] != '\0'; i++)
	{
		if (name[i] == ' ')
			printf("%c. ", toupper(name[i+1]));
	}
}