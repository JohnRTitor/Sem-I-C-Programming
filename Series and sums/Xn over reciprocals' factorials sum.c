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
	long double x, sum = 0;
	printf("Summation of reciprocals of natural numbers' factorials multiplied by power of x, upto n. For example, x + x^2/2!+ x^3/3! +..... \nPlease enter the value of n: \n");
	scanf("%d", &n);
	printf("Enter the value of x\n");
	scanf("%lf", &x);
	for (i = 1; i <= n; i++)
	{
		/* find x^i and divide by 
		factorial of i and add to sum */
		sum += pow(x, i)/(long double)factorial(i);
	}
	printf("The sum is %Lf.", sum);
	return 0;
}