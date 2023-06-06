#include <stdio.h>
// Summation of n natural number
long long sumN(unsigned int n)
{
	if (0 == n)
		return 0;
	else
		return n+sumN(n-1);
}
int main()
{
	unsigned int num;
	printf("Find the summation of natural numbers upto n. \nEnter the value of n:");
	scanf("%u", &num);
	printf("The factorial of %u is %lld.", num, sumN(num));
	return 0;
}