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
	long double sum = 0;
	printf("Summation of reciprocals of natural numbers' factorials upto n. For example, 1 + 1/2! + 1/3! +..... \nPlease enter the value of n: \n");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		// 1/(factorial of i) and add to sum
		sum += 1 / (long double)factorial(i);
	}
	printf("The sum is %Lf.", sum);
	return 0;
}