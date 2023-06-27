#include<stdio.h>
// Count the length of the string 
int funcStrlen(char s[]) {
	int i=0, count=0;
	while (s[i] != '\0') {
		count = i;
		i++;
	}
	return (count);
}
	
int main()
{
    char str[1000];
    printf("Enter the string:");
    fgets(str, 1000, stdin); // stdin is standard input and 1000 max length
    printf("The length of the string %s is %d", str, funcStrlen(str));
    
    return 0;
}