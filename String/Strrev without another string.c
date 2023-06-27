#include <stdio.h>
#include <string.h>
// Reverse a string
void funcStrrev(char s[])
{
	int i, j, length=strlen(s);
	char temp;
	
	for (i = 0, j=length-1; i!=j; i++, j--)
	{
		temp = s[i];
		s[i] = s[length-1-i];
		s[length-1-i] = temp;
	}

}

int main()
{
	char str[1000]; // *revstr = NULL;
	printf("Enter the string:");
	fgets(str, 1000, stdin);		  // take input
	str[strlen(str) - 1] = '\0';
	funcStrrev(str);
	
	printf("%s", str); //print reversed string
	//free(revstr);
	return 0;
}