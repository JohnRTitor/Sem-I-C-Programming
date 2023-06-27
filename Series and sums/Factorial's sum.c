#include <stdio.h>
// Factorial function
int factorial(int n)
{
	int i;
	long long fact = 1;
	for (i = n; i >= 1; i--)
	{
		// multiply n*n-1*n-2...*1 continuously
		fact *= i;
	}
	return (fact);
}
// main starts
int main()
{
	int n, i;
	long long sum = 0;
	printf("Summation of natural numbers' factorials upto n. Please enter the value of n: \n");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		// find the factorial of i and add to sum
		sum += factorial(i);
	}
	printf("The sum is %lld.", sum);
	return 0;
}