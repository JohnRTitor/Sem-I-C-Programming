#include <stdio.h>
// Collatz conjecture

int main()
{
	long long int num, count = 0;
	printf("Check the stopping time of a number in collatz conjecture. \nEnter the number:");
	scanf("%lld", &num);

	// if num is odd 3*num+1
	// if even num/2
	while (num != 1)
	{
		if (num % 2 == 0)
		{
			num /= 2;
		}
		else
		{
			num = 3 * num + 1;
		}
		count++;
	}
	printf("%lld is the stopping time.", count);
	return 0;
}