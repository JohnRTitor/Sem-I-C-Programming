#include <stdio.h>
int main()
{
	
	int n, t, remainder, reverse=0;
 printf("Check if a number is a palindrome.\nEnter the number:");
	scanf("%d", &n);
 t=n;
	while(n>0)
	{
		remainder = n%10;
		reverse = reverse*10 + remainder;
		n/=10;
	}
	if(reverse==t)
	printf("The number is a palindrome.");
	else
	printf("The number is not a palindrome.");
 
 return 0;
}