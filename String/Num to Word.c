#include <stdio.h>
#include <string.h>
#define BILLION 1000000000
#define MILLION 1000000
/* Ideal for recursion. WIP: migration to billions, no digit extraction is needed*/

void ConvertToWord(long long num, char numword[])
{
	const char *ONES[] = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
	const char *TENS[] = {"", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
	const char *TEENS[] = {"Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
	// ^^^ Hardcoded definitions for number values

	if (num < 0) // when n is negative
	{
		strcat(numword, "Minus ");
		ConvertToWord(-num, numword);
		return;
	}
	else if (num == 0) // special case for num=0
	{
		strcat(numword, "Zero");
		return;
	}
	
	/* Real work starts. '/' operation is for getting the multiplier, and '%' operation is for remainding digits. After each operation, the corresponding word value is added to numword string and function is recursively called again if necessary. i.e 51234/1000=51 and calling recursively fetches "Fifty One" & + Thousand + & 51234%1000=234 and calling recursively fetches "Two Hundred Thirty Four".  */
	
	else if (num >= BILLION) // for billions
	{
		ConvertToWord(num/BILLION, numword);
		strcat(numword, " Billion ");
		ConvertToWord(num%BILLION, numword);
	}
	else if (num >= MILLION) // for millions
	{
		ConvertToWord(num/MILLION, numword);
		strcat(numword, " Million ");
		ConvertToWord(num%MILLION, numword);
	}
	else if (num >= 1000)
	{
		ConvertToWord(num/1000, numword);
		strcat(numword, " Thousand ");
		ConvertToWord(num%1000, numword);
	}
	else if (num >= 100)
	{
		ConvertToWord(num/100, numword);
		strcat(numword, " Hundred ");
		ConvertToWord(num%100, numword);
	}
	else if (num >= 20)
	{
		strcat(numword, TENS[num/10]);
		ConvertToWord(num%10, numword);
	}
	else if (num >= 10) // special case TEENS for when num=12 for example
	{
		strcat(numword, " ");
		strcat(numword, TEENS[num%10]);
	}
	else if (num > 0)
	{
		strcat(numword, " "); //space added for separation
		strcat(numword, ONES[num]);
	}
}

int main()
{
	char result[1000]="\0";
	
	long long num;
	printf("Enter the no:");
	scanf("%lld", &num);
	
	ConvertToWord(num, result);
	printf("The number %lld in words is %s.", num, result);
	return 0;
}