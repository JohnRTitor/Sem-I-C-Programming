#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// Menu Driven program

int i = 1, flag;
// prototype declaration
int factorial(int);
void evenOdd(int);
void prime(int);

// main starts
int main()
{
	int num, choice;

	// infinite loop
	while (1)
	{
		printf("\nEnter the number:");
		scanf("%d", &num);
		printf("\nNow choose one of the options or press 4 to exit.\n 1: Calculate the factorial of %d \n Or check if %d is: \n\t 2: Even or Odd \n\t 3: Prime \n\nEnter your choice: \n", num, num);
		scanf("%d", &choice);

		switch (choice)
		{
		case 1:
			printf("The factorial of %d is %lld", num, factorial(num));
			break;
		case 2:
			evenOdd(num);
			break;
		case 3:
			prime(num);
		case 4:
			exit(0); // exits the program immediately
			break;
		default:
			printf("Invalid input. Please try again.");
			exit(1);
			break;
		}
	}
	return 0;
}

/* Sub functions starts
Factorial start */

int factorial(int n)
{
	long long fact = 1;
	for (i = n; i >= 1; i--)
	{
		// multiply n*n-1*n-2...*1 continuously
		fact *= i;
	}
	return (fact);
}

// Even or Odd
void evenOdd(int n)
{
	// if divisible by 2, even, else odd
	(n % 2 == 0) ? printf("%d is even.", n) : printf("%d is odd.", n);
}

// for prime number
void prime(int n)
{
	// 0 and 1 are not prime numbers
	// non-prime number: set flag=0
	flag = (0 == n || 1 == n) ? 0 : 1;

	for (i = 2; i <= sqrt(n); i++)
	{
		// if n is divisible by any number from 2 to sqrt n, mark not prime
		if (n % i == 0)
		{
			flag = 0;
			break;
		}
	}

	(flag == 1) ? printf("%d is a prime number.", n) : printf("%d is not prime.", n);
}