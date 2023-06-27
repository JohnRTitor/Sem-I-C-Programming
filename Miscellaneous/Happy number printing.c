#include <stdio.h>
// This function prints happy numbers between a range.

int checkHappy(int);
int main()
{
	unsigned int i, lowerLimit, upperLimit;
	printf("Print all happy numbers from <lowerRange> to <upperRange>.\n");
	printf("Lower Range:\n");
	scanf("%u", &lowerLimit);
	printf("Upper Range:\n");
	scanf("%u", &upperLimit);
	
	for (i=lowerLimit; i<= upperLimit; i++)
	{
		if (checkHappy(i) == 1)
			printf("%u, ", i);
	}
	return 0;
}

/* Check happy function returns 1 if the number is found happy\
else it returns 0.\
An unhappy number results in a cycle of 4, 16, 37, 58, 89, 145, 42, 20, 4, .... */

int checkHappy(int num)
{
	int sum = 0, remainder;
	while (1)
	{
		sum = 0;
		while (num > 0)
		{
			remainder = num % 10; // extract one digit
			sum += remainder*remainder; // sum them
			num /= 10; // extract the next digit
		}
		if (sum == 1 || sum == 4)
			break;
		else
			num = sum;
	}
	if (sum == 1)
		return 1;
	else
		return 0;
}