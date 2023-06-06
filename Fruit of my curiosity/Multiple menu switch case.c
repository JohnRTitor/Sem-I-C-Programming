#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// Menu Driven program

int i = 1, t, rem, rev, sum = 0, flag;
// prototype declaration
int factorial(int);
int countF(int);
void factors(int);
int reverse(int);
void evenOdd(int);
void prime(int);
void krishnaMurthy(int);
void armstrong(int);
void perfect(int);
void palindrome(int);

// main starts
int main()
{
	int num, choice;
	printf("Enter the number:");
	scanf("%d", &num);

	// infinite loop
	while (1)
	{
		printf("\nNow choose one of the options or press 11 to exit.\n 1: Calculate the factorial of %d \n 2: Count the digits of the number (%d) \n 3: Get the factors of %d \n 4: Find the reverse of %d \n \n Check if %d is - \n\t 5: Even or Odd \n\t 6: Prime \n\t 7: Krishna Murthy \n\t 8: Armstrong \n\t 9: Perfect \n\t 10: Palindrome \n\nEnter your choice: \n", num, num, num, num, num);
		scanf("%d", &choice);

		switch (choice)
		{
		case 1:
			printf("The factorial of %d is %lld", num, factorial(num));
			break;
		case 2:
			printf("The number (%d) has %d digits. ", num, countF(num));
			break;
		case 3:
			factors(num);
			break;
		case 4:
			printf("The reverse of the number is %d.", reverse(num));
			break;
		case 5:
			evenOdd(num);
			break;
		case 6:
			prime(num);
			break;
		case 7:
			krishnaMurthy(num);
			break;
		case 8:
			armstrong(num);
			break;
		case 9:
			perfect(num);
			break;
		case 10:
			palindrome(num);
			break;
		case 11:
			exit(1); // exits the program immediately
			break;
		default:
			printf("Invalid input.");
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
		fact *= i;
	}
	return (fact);
}

// Count the digits of a number
int countF(int n)
{
	int count = 0;
	while (n > 0)
	{
		count++;
		n /= 10;
	}
	return (count);
}

// Factors of the number
void factors(int n)
{
	for (i = 1; i <= n / 2; i++)
	{
		if (n % i == 0)
		{
			printf("%d, ", i);
		}
	}
	printf("%d are the factors of %d.", n, n);
}

// Reverse the number
int reverse(int n)
{
	int rev = 0;
	while (n != 0)
	{
		rem = n % 10;
		rev = rev * 10 + rem;
		n /= 10;
	}
	return (rev);
}

// Even or Odd
void evenOdd(int n)
{
	// if divisible by 2, even else odd
	(n % 2 == 0) ? printf("%d is even.", n) : printf("%d is odd.", n);
}

// for prime number
void prime(int n)
{
	// 0 and 1 are not prime numbers
	// change flag to 0 for non-prime numbers
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

// Armstrong number
void armstrong(int n)
{
	int count = countF(n);
	t = n;

	while (n > 0)
	{
		// extract the digits
		rem = n % 10;
		// then digit^count and sum them
		sum += pow(rem, count);
		n /= 10;
	}
	(sum == t) ? printf("%d is an Armstrong number.", t) : printf("%d is not an Armstrong number.", t);
}

// Krishna Murthy
void krishnaMurthy(int n)
{
	t = n;
	while (n != 0)
	{
		// extract the digits
		rem = n % 10;
		// add the factorials continuously
		sum += factorial(rem);
		n /= 10;
	}
	(sum == t) ? printf("%d is a Krishna Murthy number.", t) : printf("%d is not a Krishna Murthy number.", t);
}

// Perfect number
void perfect(int n)
{
	t = n;
	for (i = 1; i <= n / 2; i++)
	{
		sum += i;
	}
	// if factors of the number are summed and the original is returned, it's perfect
	(sum == t) ? printf("%d is a perfect number.", t) : printf("%d is not a perfect number.", t);
}

// Palindrome check
void palindrome(int n)
{
	t = n;
	// use the reverse function above to reverse and check with the original number
	rev = reverse(n);
	(t == rev) ? printf("%d is palindrome.", t) : printf("%d is not palindrome.", t);
}