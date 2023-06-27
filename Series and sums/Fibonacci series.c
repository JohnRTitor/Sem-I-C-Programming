#include <stdio.h>
// Fibonacci series (0, 1, 1, 2 , 3, 5, 8.... )
int main()
{
	int i, elm;
	long long n1 = 0, n2 = 1, nextnum;

	printf("How many numbers in the fibonacci series you want to print?");
	scanf("%d", &elm);
	
	printf("The requested series is %lld, %lld, ", n1, n2); // print the first two numbers beforehand
	for (i = 1; i <= elm - 2; i++) // start from 1 and upto elm-2 since two numbers are already printed
{
		// take any three consecutive numbers, the third number is the sum of first two numbers
		nextnum = n1 + n2;
		printf("%lld, ", nextnum);
		// swap n1 with n2 and nextnum becomes n2
		n1 = n2;
		n2 = nextnum;
	}
	return 0;
}